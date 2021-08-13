/**
 * @file mouse.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "mouse.h"
#include <Protocol/SimplePointer.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Protocol/GraphicsOutput.h>


#if USE_MOUSE != 0

/*********************
 *      DEFINES
 *********************/
#ifndef MONITOR_ZOOM
#define MONITOR_ZOOM    1
#endif


#define gMousePic_Width   18
#define gMousePic_Height  25

/**********************
 *      TYPEDEFS
 **********************/
void mouse_callback(
    int16_t x,
    int16_t y,
    lv_indev_state_t state
    );

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
static bool left_button_down = false;
static int16_t last_x = 0;
static int16_t last_y = 0;

EFI_GRAPHICS_OUTPUT_BLT_PIXEL gMousePicColorTable[]={
  0x34,  0x0e,  0x0c,  0x00,      //000
  0x04,  0xfe,  0x04,  0x00,      //001     //掩码图案
  0x4c,  0x4e,  0x4c,  0x00,      //002
  0xfc,  0x8a,  0x84,  0x00,      //003
  0xfc,  0xc6,  0xc4,  0x00,      //004
  0x34,  0x2e,  0x2c,  0x00,      //005
  0xfc,  0xaa,  0xac,  0x00,      //006
  0xe4,  0x52,  0x54,  0x00,      //007
  0xfc,  0x6e,  0x6c,  0x00,      //008
  0xe4,  0x46,  0x44,  0x00,      //009
  0x34,  0x1e,  0x1c,  0x00,      //010
  0xfc,  0xe6,  0xe4,  0x00,      //011
  0x4c,  0x3e,  0x3c,  0x00,      //012
  0xfc,  0x9a,  0x9c,  0x00,      //013
  0xe4,  0xba,  0xbc,  0x00,      //014
  0xe4,  0xd6,  0xd4,  0x00,      //015
  0x34,  0x36,  0x34,  0x00,      //016
  0xfc,  0x7e,  0x7c,  0x00,      //017
  0x4c,  0x1e,  0x1c,  0x00,      //018
  0xfc,  0x66,  0x64,  0x00,      //019
  0xfc,  0x92,  0x94,  0x00,      //020
  0xfc,  0xb2,  0xac,  0x00,      //021
  0xe4,  0xa6,  0xa4,  0x00,      //022
  0xe4,  0xc2,  0xc4,  0x00,      //023
  0x44,  0x36,  0x34,  0x00,      //024
  0x34,  0x16,  0x14,  0x00,      //025
  0xfc,  0x5a,  0x5c,  0x00,      //026
  0xfc,  0x76,  0x74,  0x00,      //027
  0x34,  0x26,  0x24,  0x00,      //028
  0xfc,  0xfa,  0xfc,  0x00,      //029
  0x4c,  0x46,  0x44,  0x00,      //030
  0xfc,  0xd2,  0xcc,  0x00,      //031
  0xfc,  0x8a,  0x8c,  0x00,      //032
  0xfc,  0xce,  0xcc,  0x00,      //033
  0xfc,  0xba,  0xbc,  0x00,      //034
  0xfc,  0x86,  0x84,  0x00,      //035
  0x5c,  0x2a,  0x2c,  0x00,      //036
  0xfc,  0xb2,  0xb4,  0x00,      //037
  0xfc,  0xa2,  0xa4,  0x00,      //038
  0x44,  0x3a,  0x3c,  0x00,      //039
  0xfc,  0xd2,  0xd4,  0x00,      //040
  0x34,  0x12,  0x14,  0x00,      //041
  0xfc,  0xca,  0xcc,  0x00,      //042
  0x34,  0x32,  0x34,  0x00,      //043
  0xfc,  0xae,  0xac,  0x00,      //044
  0xfc,  0x52,  0x54,  0x00,      //045
  0xfc,  0x72,  0x74,  0x00,      //046
  0x34,  0x22,  0x24,  0x00,      //047
  0xfc,  0xf2,  0xf4,  0x00,      //048
  0x4c,  0x42,  0x44,  0x00,      //049
  0xfc,  0x9e,  0x9c,  0x00,      //050
  0x3c,  0x36,  0x34,  0x00,      //051
  0xfc,  0x82,  0x84,  0x00,      //052
  0x4c,  0x22,  0x24,  0x00,      //053
  0xfc,  0x6a,  0x6c,  0x00,      //054
  0xfc,  0x96,  0x94,  0x00,      //055
  0xfc,  0xc2,  0xc4,  0x00,      //056
  0x34,  0x1a,  0x1c,  0x00,      //057
  0xfc,  0x5e,  0x5c,  0x00,      //058
  0xfc,  0x7a,  0x7c,  0x00,      //059
  0x34,  0x2a,  0x2c,  0x00,      //060
  0xfc,  0xfe,  0xfc,  0x00,      //061
  0x4c,  0x4a,  0x4c,  0x00,      //062
  0xfc,  0x8e,  0x8c,  0x00,      //063
  0xfc,  0xbe,  0xbc,  0x00,      //064
  0xfc,  0xb6,  0xb4,  0x00,      //065
  0xfc,  0xa6,  0xa4,  0x00,      //066
  0x4c,  0x3a,  0x3c,  0x00,      //067
  0xfc,  0xd6,  0xd4,  0x00,      //068
  0x00,  0x00,  0x00,  0x00,      //069
};

UINT8 gMousePicPicture[]={
 0x3e, 0xd1, 0x01, 0x2b, 0x43, 0xd0, 0x01, 0x2b, 0x0f, 0x0c, 0xcf, 0x01, 0x10, 0x3d, 0x16, 0x31, 0xce, 0x01, 0x10, 0x3d, 0x38, 0x0e, 0x1e, 0xcd, 0x01, 0x3c, 0xc2, 0x3d, 0x22, 0x17, 0x3e, 0xcc,
 0x01, 0x2f, 0xc2, 0x3d, 0x06, 0x04, 0x0e, 0x05, 0xcb, 0x01, 0x2f, 0xc2, 0x3d, 0x40, 0x2c, 0x38, 0x44, 0x05, 0xca, 0x01, 0x0a, 0x30, 0x3d, 0x28, 0x26, 0x2c, 0x40, 0x28, 0x05, 0xc9, 0x01, 0x0a,
 0x0b, 0x3d, 0x21, 0x0d, 0x26, 0x06, 0x40, 0x21, 0x27, 0xc8, 0x01, 0x0a, 0x28, 0x3d, 0x38, 0x37, 0x0d, 0x32, 0x06, 0x22, 0x21, 0x33, 0xc7, 0x01, 0x39, 0x2a, 0x3d, 0x22, 0x3f, 0x14, 0x0d, 0x32,
 0x06, 0x22, 0x2a, 0x0c, 0xc6, 0x01, 0x39, 0x22, 0x3d, 0x2c, 0x20, 0x3f, 0x14, 0x37, 0x0d, 0x42, 0x41, 0x2a, 0x43, 0xc5, 0x01, 0x39, 0x25, 0x1d, 0x42, 0x34, 0x03, 0x20, 0x3f, 0xc2, 0x37, 0x42,
 0x25, 0x2a, 0x18, 0xc4, 0x01, 0x19, 0x42, 0x0b, 0x0d, 0x11, 0x34, 0x23, 0x3f, 0x14, 0x37, 0x0d, 0x26, 0x25, 0x04, 0x05, 0xc3, 0x01, 0x19, 0x0d, 0x1f, 0x20, 0x3b, 0x34, 0x23, 0x3f, 0x37, 0x0d,
 0x26, 0x42, 0x06, 0x41, 0x2a, 0x3c, 0xc2, 0x01, 0x19, 0x3f, 0x25, 0x08, 0x1b, 0x34, 0x3f, 0x0d, 0x26, 0x06, 0x2c, 0x41, 0x22, 0x40, 0x04, 0x28, 0x3c, 0x01, 0x29, 0x34, 0x3f, 0x36, 0x3b, 0x20,
 0x32, 0x3c, 0x1c, 0xc6, 0x3c, 0x05, 0xc2, 0x3c, 0x29, 0x08, 0x13, 0x36, 0x11, 0x0d, 0x1c, 0xcb, 0x01, 0x00, 0x1a, 0x3a, 0x36, 0x20, 0x2f, 0xcc, 0x01, 0x29, 0x2d, 0x1a, 0x08, 0x39, 0xcd, 0x01,
 0x00, 0x2d, 0x07, 0x39, 0xce, 0x01, 0x00, 0x09, 0x35, 0xcf, 0x01, 0x00, 0x12, 0xd0, 0x01, 0x24, 0xd1, 0x01,
};

EFI_GRAPHICS_OUTPUT_BLT_PIXEL oldMouseHideZone[gMousePic_Width*gMousePic_Height];


EFI_SIMPLE_POINTER_PROTOCOL        *gMouse = NULL;
extern EFI_GRAPHICS_OUTPUT_PROTOCOL       *gGraphicsOutput;
    UINT16 xScale, yScale;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

VOID getRectImage(IN UINTN x1,IN UINTN y1,IN UINTN Width,IN UINTN Height,
                                    IN OUT EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ImageBuffer)
{
    gGraphicsOutput->Blt (gGraphicsOutput,ImageBuffer,EfiBltVideoToBltBuffer,x1,y1,0,0,Width,Height,0);
}

VOID putRectImage(IN UINTN x1,IN UINTN y1,IN UINTN Width,IN UINTN Height,
                                    IN OUT EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ImageBuffer)
{
    gGraphicsOutput->Blt (gGraphicsOutput,ImageBuffer,EfiBltBufferToVideo,0,0,x1,y1,Width,Height,0);
}


VOID putpixel(UINTN x,UINTN y,EFI_GRAPHICS_OUTPUT_BLT_PIXEL *color)
{
//  EFI_GRAPHICS_OUTPUT_BLT_PIXEL color;
//  
//  MemCpy(&color,&(gColorTable[color_number]),sizeof(EFI_GRAPHICS_OUTPUT_BLT_PIXEL));
  gGraphicsOutput->Blt (gGraphicsOutput,color,EfiBltVideoFill,0,0,x,y,1,1,0);
}

VOID putPCX256(UINTN x,UINTN y,UINTN Width,UINTN Height,
              EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ColorTable,
              UINT8 *Picture,
              UINT8 MaskColor)
{
    UINT32 index,count;
    UINT16 num_bytes;
    UINT8 pcxdata;
    UINTN putX,putY;
    
    index=0;    //图像数据的指针
    count=0;    //用来定位像素位置的计数器
    //压缩区数据处理
    while(count<=(((UINT32)Width) * ((UINT32)Height)))
    {
        // get the first piece of data
        pcxdata = Picture[index];
        ++index;
        // is this a rle?
        if(pcxdata>=192)
        {
            // how many bytes in run?
            num_bytes = pcxdata-192;
            // get the actual data for the run
            pcxdata  = Picture[index];;
            ++index;
            // replicate data in buffer num_bytes times
            while(num_bytes-->0)
            {
                putX=x+(count%Width);
                putY=y+(count/Width);
                if(pcxdata!=MaskColor)  //Mask颜色不显示
                    putpixel(putX,putY,&(ColorTable[pcxdata]));
                ++count;
            } // end while
        } // end if rle
        else
        {
            // actual data, just copy it into buffer at next location
            putX=x+(count%Width);
            putY=y+(count/Width);
            if(pcxdata!=MaskColor)  //Mask颜色不显示
                putpixel(putX,putY,&(ColorTable[pcxdata]));
            ++count;
        } // end else not rle
    } // end while 
}

VOID AlphaTransparent(IN UINTN Width,IN UINTN Height,
                                    IN EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ImagePointer,
                                    IN OUT EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ImageOverlayArea,
                                    IN UINT16 Alpha)
{
//  EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ImageOverlayArea;
//  UINT32                        ImageOverlayAreaSize;
    UINT32 i;
    
//  //1 申请同样大小的内存，准备使用
//  ImageOverlayAreaSize = (UINT32)(Width*Height*sizeof(EFI_GRAPHICS_OUTPUT_BLT_PIXEL));
//  gBS->AllocatePool (
//                  EfiRuntimeServicesData,
//                  ImageOverlayAreaSize,
//                  (VOID **) &ImageOverlayArea
//                  );
//  //2 要覆盖区域的图像提取
//  getRectImage(x,y,Width,Height,ImageOverlayArea); 
  //3 对两段内存进行处理,选取Alpha最大分母16,便于计算   
  //Alpha混合公式如下：(A覆盖在B上)
    //                  R(C)=(1-alpha)*R(B) + alpha*R(A)
    //                  G(C)=(1-alpha)*G(B) + alpha*G(A)
    //                  B(C)=(1-alpha)*B(B) + alpha*B(A)
    for(i=0;i<((UINT32)Width * (UINT32)Height);i++)
    {
        //特别为掩图（即指定某颜色不显示）定做，配合decompressPCX256_special才能使用
        if(ImagePointer[i].Reserved!=0xAA)
        {
            ImageOverlayArea[i].Blue=(UINT8)(((16-Alpha)* ImageOverlayArea[i].Blue + Alpha * ImagePointer[i].Blue)>>4);
            ImageOverlayArea[i].Green=(UINT8)(((16-Alpha)* ImageOverlayArea[i].Green + Alpha * ImagePointer[i].Green)>>4);
            ImageOverlayArea[i].Red=(UINT8)(((16-Alpha)* ImageOverlayArea[i].Red + Alpha * ImagePointer[i].Red)>>4);
            ImageOverlayArea[i].Reserved=(UINT8)(((16-Alpha)* ImageOverlayArea[i].Reserved + Alpha * ImagePointer[i].Reserved)>>4);
        }
    }
    //3 显示
//  putRectImage(x,y,Width,Height,ImageOverlayArea); 
    
//  gBS->FreePool(ImageOverlayArea);
}

VOID decompressPCX256_special(IN UINTN Width,IN UINTN Height,
              IN EFI_GRAPHICS_OUTPUT_BLT_PIXEL *ColorTable,
              IN UINT8 *Picture,
              IN OUT EFI_GRAPHICS_OUTPUT_BLT_PIXEL *BltBuffer,
              IN UINT8 MaskColor)
{
    UINT32 index,count;
    UINT16 num_bytes;
    UINT8 pcxdata;
    
    index=0;    //图像数据的指针
    count=0;    //用来定位像素位置的计数器
    // 将数据解压到缓冲区中
    while(count<(((UINT32)Width) * ((UINT32)Height)))
    {
        // get the first piece of data
        pcxdata = Picture[index];
        ++index;
        // is this a rle?
        if(pcxdata>=192)
        {
            // how many bytes in run?
            num_bytes = pcxdata-192;
            // get the actual data for the run
            pcxdata  = Picture[index];;
            ++index;
            // replicate data in buffer num_bytes times
            while(num_bytes-->0)
            {
                BltBuffer[count].Blue =ColorTable[pcxdata].Blue;
                BltBuffer[count].Green =ColorTable[pcxdata].Green;
                BltBuffer[count].Red =ColorTable[pcxdata].Red;
                if(pcxdata==MaskColor)  //Mask颜色不显示
                        BltBuffer[count].Reserved=0xAA;
                else
                    BltBuffer[count].Reserved =ColorTable[pcxdata].Reserved;
                count+=1;
            } // end while
        } // end if rle
        else
        {
            // actual data, just copy it into buffer at next location
            BltBuffer[count].Blue =ColorTable[pcxdata].Blue;
            BltBuffer[count].Green =ColorTable[pcxdata].Green;
            BltBuffer[count].Red =ColorTable[pcxdata].Red;
            if(pcxdata==MaskColor)  //Mask颜色不显示
                BltBuffer[count].Reserved=0xAA;
            else
                BltBuffer[count].Reserved =ColorTable[pcxdata].Reserved;
            count+=1;
        } // end else not rle
    } // end while 
}

VOID putMouseArrow(UINTN x,UINTN y)
{
    EFI_STATUS Status;
    EFI_GRAPHICS_OUTPUT_BLT_PIXEL *BltBuffer;
    EFI_GRAPHICS_OUTPUT_BLT_PIXEL *BltBuffer1;
    UINT32                        BltBufferSize;
    
    if(x>=(LV_HOR_RES_MAX-1-gMousePic_Width))
        x=LV_HOR_RES_MAX-1-gMousePic_Width;
    if(y>=LV_VER_RES_MAX-1-gMousePic_Height)
        y=LV_VER_RES_MAX-1-gMousePic_Height;
    //0 还原鼠标覆盖的区域
    putRectImage(last_x,last_y,gMousePic_Width,gMousePic_Height,oldMouseHideZone);
    last_x=(UINT16)x;
    last_y=(UINT16)y;
    //1 保存当前鼠标要覆盖的区域
    getRectImage(x,y,gMousePic_Width,gMousePic_Height,oldMouseHideZone);
    //2 在当前位置显示鼠标
    //2-1 申请内存 再保存一份当前覆盖区域的内容
    BltBufferSize = ((UINT32)gMousePic_Width *  (UINT32)gMousePic_Height * (sizeof (EFI_GRAPHICS_OUTPUT_BLT_PIXEL)));
    Status = gBS->AllocatePool (
                  EfiRuntimeServicesData,
                  BltBufferSize,
                  (VOID **) &BltBuffer
                  );//最大可以容纳2^30的256色pcx数据，即32678x32678的图，不会溢出
  Status = gBS->AllocatePool (
                  EfiRuntimeServicesData,
                  BltBufferSize,
                  (VOID **) &BltBuffer1
                  );//最大可以容纳2^30的256色pcx数据，即32678x32678的图，不会溢出
  //2-2  读取覆盖区域
    getRectImage(x,y,gMousePic_Width,gMousePic_Height,BltBuffer);  //BltBuffer包含要覆盖的图像 
    //2-3 解压
    decompressPCX256_special(gMousePic_Width,gMousePic_Height,gMousePicColorTable,gMousePicPicture,BltBuffer1,1);
    //2-4 透明处理
    AlphaTransparent(gMousePic_Width,gMousePic_Height,BltBuffer1,BltBuffer,10);
    //2-5 显示
    putRectImage(x,y,gMousePic_Width,gMousePic_Height,BltBuffer);
    
    
  gBS->FreePool(BltBuffer);    
  gBS->FreePool(BltBuffer1);              
}

VOID WaitKey(VOID)
{
  EFI_INPUT_KEY     Key;
  UINTN Index;

  // flush keyboard buffer
  while ( gST->ConIn->ReadKeyStroke(gST->ConIn,&Key) == EFI_SUCCESS );
  gBS->WaitForEvent( 1, &gST->ConIn->WaitForKey, &Index );
  return;
}
/**
 * Initialize the mouse
 */
void mouse_init(void)
{
//  Print(L"\nmouse_init here\n"); // leon test debug
//  WaitKey(); // leon test debug
    EFI_STATUS  Status;
    UINT64 temp;

    Status = gBS->LocateProtocol(&gEfiSimplePointerProtocolGuid, NULL, (VOID **) &gMouse);
    if (EFI_ERROR(Status)) {
      return;
    }

    last_x = LV_HOR_RES_MAX / 2;
    last_y = LV_VER_RES_MAX / 2;

    temp = gMouse->Mode->ResolutionX;
    xScale = 0;
    while(temp!=0)
     {
       temp >>= 1;
       ++xScale; //if 8,xScale=4;if 16,xScale=5;if 65536,xScale=17;
     }
     xScale -= 1;

     temp = gMouse->Mode->ResolutionY;
     yScale = 0;
     while(temp!=0)
     {
       temp >>= 1;
       ++yScale; //if 8,xScale=4;if 16,xScale=5;if 65536,xScale=17;
     }
     yScale -= 1;

    getRectImage(last_x, last_y,gMousePic_Width,gMousePic_Height,oldMouseHideZone);
    putPCX256(last_x, last_y,gMousePic_Width,gMousePic_Height,gMousePicColorTable,gMousePicPicture,1); //maskcolor=1

    putMouseArrow(last_x, last_y);
}

EFI_STATUS GetMouseState(EFI_SIMPLE_POINTER_STATE *State)
{
//  UINTN Index;
    
//  gBS->WaitForEvent( 1, &gMouse->WaitForInput, &Index );
  return gMouse->GetState(gMouse,State);  
}

/**
 * Get the current position and state of the mouse
 * @param indev_drv pointer to the related input device driver
 * @param data store the mouse data here
 * @return false: because the points are not buffered, so no more data to be read
 */
bool mouse_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data)
{
   
    (void) indev_drv;      /*Unused*/
    EFI_SIMPLE_POINTER_STATE State;
    INT32 i,j;

    if (gMouse == NULL) {
        return false;
    }
    
    if (!EFI_ERROR( gBS->CheckEvent( gMouse->WaitForInput) ) ) {
      GetMouseState(&State);
      
      //调节因子设置为8
         i = last_x +  ((State.RelativeMovementX<<3) >> xScale);
         if (i < 0)
           i = 0;
         if (i > LV_HOR_RES_MAX - 1)
           i = LV_HOR_RES_MAX - 1;
         j = last_y + ((State.RelativeMovementY<<3) >> yScale);
         if (j < 0)
           j = 0;
         if (j > LV_VER_RES_MAX - 1)
           j = LV_VER_RES_MAX - 1;
         putMouseArrow(i, j);
         //Print(L"mouse i = %x, j = %x\n", i, j);
         left_button_down = State.LeftButton;
    }
    
    /*Store the collected data*/
    data->point.x = last_x;
    data->point.y = last_y;
    data->state = left_button_down ? LV_INDEV_STATE_PR : LV_INDEV_STATE_REL;

    //mouse_callback(last_x, last_y, data->state);

    return false;
}

/**
 * It will be called from the main SDL thread
 */
void mouse_handler(SDL_Event * event)
{
#if 0 // leon test debug    
    switch(event->type) {
        case SDL_MOUSEBUTTONUP:
            if(event->button.button == SDL_BUTTON_LEFT)
                left_button_down = false;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if(event->button.button == SDL_BUTTON_LEFT) {
                left_button_down = true;
                last_x = event->motion.x / MONITOR_ZOOM;
                last_y = event->motion.y / MONITOR_ZOOM;
            }
            break;
        case SDL_MOUSEMOTION:
            last_x = event->motion.x / MONITOR_ZOOM;
            last_y = event->motion.y / MONITOR_ZOOM;
            break;

        case SDL_FINGERUP:
            left_button_down = false;
            last_x = LV_HOR_RES * event->tfinger.x / MONITOR_ZOOM;
            last_y = LV_VER_RES * event->tfinger.y / MONITOR_ZOOM;
            break;
        case SDL_FINGERDOWN:
            left_button_down = true;
            last_x = LV_HOR_RES * event->tfinger.x / MONITOR_ZOOM;
            last_y = LV_VER_RES * event->tfinger.y / MONITOR_ZOOM;
            break;
        case SDL_FINGERMOTION:
            last_x = LV_HOR_RES * event->tfinger.x / MONITOR_ZOOM;
            last_y = LV_VER_RES * event->tfinger.y / MONITOR_ZOOM;
            break;
    }
#endif // leon test debug
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

#endif
