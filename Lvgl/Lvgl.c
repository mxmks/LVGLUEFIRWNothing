/** @file


**/          
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/ShellCEntryLib.h>
#include <Library/BaseLib.h>
#include <Library/PcdLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Pi/PiBootMode.h>
#include <Pi/PiHob.h>
#include <Library/HobLib.h>


#include <Protocol/GraphicsOutput.h>
#include <Protocol/SimplePointer.h>

#include "lv_conf.h"
#include "lvgl.h"
#include  "lv_examples.h"
#include "src/indev/keyboard.h"
#include "src/indev/mouse.h"

typedef struct _lv_obj_position {
  int16_t   index;
  int16_t   startx;
  int16_t   starty;
  int16_t   width;
  int16_t   height;
} lv_obj_position;

BOOLEAN ExitApp = FALSE;
EFI_GRAPHICS_OUTPUT_PROTOCOL       *gGraphicsOutput = NULL;
extern EFI_SIMPLE_POINTER_PROTOCOL        *gMouse = NULL;
BOOLEAN InitMouse = FALSE;


static lv_group_t*  g = NULL;
lv_obj_t * Image1_logo = NULL;
lv_obj_t * Label_caption = NULL;
lv_obj_t * ImgButton1_pci = NULL;
lv_obj_t * ImgButton2_pciidx = NULL;
lv_obj_t * ImgButton3_mem = NULL;
lv_obj_t * ImgButton4_memidx = NULL;
lv_obj_t * ImgButton5_io = NULL;
lv_obj_t * ImgButton6_ioidx = NULL;
lv_obj_t * ImgButton7_sio = NULL;
lv_obj_t * ImgButton8_clk = NULL;
lv_obj_t * ImgButton9_spd = NULL;
lv_obj_t * ImgButton10_smbus = NULL;
lv_obj_t * ImgButton11_msr = NULL;
lv_obj_t * ImgButton12_mmio = NULL;
lv_obj_t * ImgButton13_acpi = NULL;
lv_obj_t * ImgButton14_ec = NULL;
lv_obj_t * ImgButton15_hddcd = NULL;
lv_obj_t * ImgButton16_diskrw = NULL;
lv_obj_t * ImgButton17_usb = NULL;
lv_obj_t * ImgButton18_smbios = NULL;
lv_obj_t * ImgButton19_pciopt = NULL;
lv_obj_t * ImgButton20_mps = NULL;
lv_obj_t * ImgButton21_e820 = NULL;
lv_obj_t * ImgButton22_edid = NULL;
lv_obj_t * ImgButton23_help = NULL;
lv_obj_t * ImgButton24_exit = NULL;
lv_obj_t * mboxexit = NULL;
lv_obj_t * mboxwarning = NULL;

lv_obj_t * pci1cont = NULL;
lv_obj_t * pci1config_table = NULL;
lv_obj_t * pci1labeltitle = NULL;
lv_obj_t * pci1quit = NULL;
lv_obj_t * pci1quitlable = NULL;

lv_obj_t * pci2cont = NULL;
lv_obj_t * pci2config_table = NULL;
lv_obj_t * pci2labeltitle = NULL;
lv_obj_t * pci2quit = NULL;
lv_obj_t * pci2quitlable = NULL;

lv_obj_t * pci3cont = NULL;
lv_obj_t * pci3config_table = NULL;
lv_obj_t * pci3labeltitle = NULL;
lv_obj_t * pci3quit = NULL;
lv_obj_t * pci3quitlable = NULL;


UINT8 ColTitle[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
UINT16 DataBuff[16][16] = {
         { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f },
         { 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f },
         { 0x20, 0x21, 0x32, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f },
         { 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f },
         { 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f },
         { 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f },
         { 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f },
         { 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f },
         { 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f },
         { 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f },
         { 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf },
         { 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf },
         { 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf },
         { 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf },
         { 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef },
         { 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff }
};

//usage
void usage(void)
{
  Print(L"Usage: \n");
  Print(L"AppLvgl XXXX\n");
  Print(L"Any more question, please contact with Leon\n");
  return;
}

BOOLEAN ismboxexiton (
  )
{
  if (mboxexit || mboxwarning) {
    return true;
  }

  return false;
}  

void my_disp_flush(lv_disp_drv_t * disp, const lv_area_t * area, lv_color_t * color_p)
{
    UINTN Width, Height;
    EFI_STATUS  Status;

    if (area->x2 - area->x1 >= 0) {
        Width = area->x2 - area->x1;
    }
    else {
        Width = area->x1 - area->x2;
    }

    if (area->y2 - area->y1 >= 0) {
        Height = area->y2 - area->y1;
    }
    else {
        Height = area->y1 - area->y2;
    }

    Width  ++;
    Height ++;

    Status = gGraphicsOutput->Blt (
        gGraphicsOutput,
        (EFI_GRAPHICS_OUTPUT_BLT_PIXEL *) &color_p->ch ,
        EfiBltBufferToVideo,
        0,
        0,
        area->x1,
        area->y1,
        Width,
        Height,
        0
    );

    lv_disp_flush_ready(disp);         /* Indicate you are ready*/

}

void mouse_callback(
    int16_t x,
    int16_t y,
    lv_indev_state_t state
    )
{

}

EFI_STATUS main_init ( 
    )
{
    
    EFI_STATUS  Status;

   Status = gBS->LocateProtocol (&gEfiGraphicsOutputProtocolGuid, NULL, (VOID **) &gGraphicsOutput);
   
   return Status;
}    

static void cont_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (event == LV_EVENT_RELEASED) {
      lv_obj_set_top(obj, true);
      //Print(L"cont btn Clicked\n");
    }
}

static void pci1quit_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (event == LV_EVENT_RELEASED) {
      if (pci1cont) {
        lv_obj_del(pci1cont);
        pci1cont = NULL;
      }
    }
}

static void pci2quit_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (event == LV_EVENT_RELEASED) {
      if (pci2cont) {
        lv_obj_del(pci2cont);
        pci2cont = NULL;
      }
    }
}

static void pci3quit_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (event == LV_EVENT_RELEASED) {
      if (pci3cont) {
        lv_obj_del(pci3cont);
        pci3cont = NULL;
      }
    }
}

void createpci1configtable (
  )
{
    uint16_t index = 0;
    uint16_t count = 0;
    //lv_style_t pci1quitstyle;

    // pci1 container
    pci1cont = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(pci1cont, 20, 70);
    lv_obj_set_size(pci1cont, 900, 600);
    lv_obj_set_click(pci1cont, true);
    lv_obj_set_style_local_bg_opa(pci1cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci1cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
    lv_cont_set_layout(pci1cont, LV_LAYOUT_OFF);
    lv_cont_set_fit(pci1cont, LV_FIT_NONE);
    lv_obj_set_event_cb(pci1cont, cont_eventhandler);

    // window label
    pci1labeltitle =  lv_label_create(pci1cont, NULL);
    lv_obj_set_pos(pci1labeltitle, 5, 5);
    lv_obj_set_size(pci1labeltitle, 200, 16);
    lv_label_set_text(pci1labeltitle, "pci config window 1");

    // quit button
    pci1quit = lv_btn_create(pci1cont, NULL);
    lv_obj_set_pos(pci1quit, 870, 1);
    lv_obj_set_size(pci1quit, 30, 30);
    lv_obj_set_style_local_bg_opa(pci1quit, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci1quit, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_bg_opa(pci1quit, LV_BTN_PART_MAIN, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci1quit, LV_BTN_PART_MAIN, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_bg_opa(pci1quit, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci1quit, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_TRANSP);
    lv_obj_set_event_cb(pci1quit, pci1quit_eventhandler);
    pci1quitlable = lv_label_create(pci1quit, NULL); 
    lv_label_set_text(pci1quitlable, "x");

    // pci table
    pci1config_table = lv_table_create(pci1cont, NULL);
    lv_obj_set_pos(pci1config_table, 5, 30);
    //Write codes screen
    lv_table_set_col_cnt(pci1config_table,17);
    lv_table_set_row_cnt(pci1config_table,17);

    lv_table_set_cell_value(pci1config_table,0,0,"0000");
    for (index = 0; index < 0x10; index++) {
      lv_table_set_cell_value_fmt(pci1config_table, 0, index+1, "%02x", ColTitle[index]);
    }

    for (index = 0 ; index < 0x10; index++) {
      lv_table_set_cell_value_fmt(pci1config_table, index + 1, 0, "%03x", ColTitle[index] << 4);
      for (count = 0; count < 0x10; count++) {
        lv_table_set_cell_value_fmt(pci1config_table, index + 1, count + 1, "%02x", DataBuff[index][count]);
      }
    }

    lv_table_set_col_width(pci1config_table, 0, 50);
    for (index = 1; index <= 16; index++ ) {
      lv_table_set_col_width(pci1config_table, index, 30);
    }

    lv_obj_set_style_local_pad_left(pci1config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_right(pci1config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_top(pci1config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_bottom(pci1config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);

    lv_obj_set_drag(pci1config_table, true);

    lv_group_add_obj(g, pci1cont);
}

void createpci2configtable (
  )
{
    uint16_t index = 0;
    uint16_t count = 0;
    //lv_style_t pci1quitstyle;

    // pci2 container
    pci2cont = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(pci2cont, 50, 100);
    lv_obj_set_size(pci2cont, 900, 600);
    lv_obj_set_click(pci2cont, true);
    lv_obj_set_style_local_bg_opa(pci2cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci2cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_bg_opa(pci2cont, LV_BTN_PART_MAIN, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci2cont, LV_BTN_PART_MAIN, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_bg_opa(pci2cont, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci2cont, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_TRANSP);
    lv_cont_set_layout(pci2cont, LV_LAYOUT_OFF);
    lv_cont_set_fit(pci2cont, LV_FIT_NONE);
    lv_obj_set_event_cb(pci2cont, cont_eventhandler);

    // window label
    pci2labeltitle =  lv_label_create(pci2cont, NULL);
    lv_obj_set_pos(pci2labeltitle, 5, 5);
    lv_obj_set_size(pci2labeltitle, 200, 16);
    lv_label_set_text(pci2labeltitle, "pci config window 2");

    // quit button
    pci2quit = lv_btn_create(pci2cont, NULL);
    lv_obj_set_pos(pci2quit, 870, 1);
    lv_obj_set_size(pci2quit, 30, 30);
    lv_obj_set_style_local_bg_opa(pci2quit, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci2quit, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_event_cb(pci2quit, pci2quit_eventhandler);
    pci2quitlable = lv_label_create(pci2quit, NULL); 
    lv_label_set_text(pci2quitlable, "x");

    // pci table
    pci2config_table = lv_table_create(pci2cont, NULL);
    lv_obj_set_pos(pci2config_table, 5, 30);
    //Write codes screen
    lv_table_set_col_cnt(pci2config_table,17);
    lv_table_set_row_cnt(pci2config_table,17);

    lv_table_set_cell_value(pci2config_table,0,0,"0000");
    for (index = 0; index < 0x10; index++) {
      lv_table_set_cell_value_fmt(pci2config_table, 0, index+1, "%02x", ColTitle[index]);
    }

    for (index = 0 ; index < 0x10; index++) {
      lv_table_set_cell_value_fmt(pci2config_table, index + 1, 0, "%03x", ColTitle[index] << 4);
      for (count = 0; count < 0x10; count++) {
        lv_table_set_cell_value_fmt(pci2config_table, index + 1, count + 1, "%02x", DataBuff[index][count]);
      }
    }

    lv_table_set_col_width(pci2config_table, 0, 50);
    for (index = 1; index <= 16; index++ ) {
      lv_table_set_col_width(pci2config_table, index, 30);
    }

    lv_obj_set_style_local_pad_left(pci2config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_right(pci2config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_top(pci2config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_bottom(pci2config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);

    lv_obj_set_drag(pci2config_table, true);

    lv_group_add_obj(g, pci2cont);
}

void createpci3configtable (
  )
{
    uint16_t index = 0;
    uint16_t count = 0;
    //lv_style_t pci1quitstyle;

    // pci3 container
    pci3cont = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(pci3cont, 80, 130);
    lv_obj_set_size(pci3cont, 900, 600);
    lv_obj_set_click(pci3cont, true);
    lv_obj_set_style_local_bg_opa(pci3cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci3cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_bg_opa(pci3cont, LV_BTN_PART_MAIN, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci3cont, LV_BTN_PART_MAIN, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_bg_opa(pci3cont, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci3cont, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_TRANSP);
    lv_cont_set_layout(pci3cont, LV_LAYOUT_OFF);
    lv_cont_set_fit(pci3cont, LV_FIT_NONE);
    lv_obj_set_event_cb(pci3cont, cont_eventhandler);

    // window label
    pci3labeltitle =  lv_label_create(pci3cont, NULL);
    lv_obj_set_pos(pci3labeltitle, 5, 5);
    lv_obj_set_size(pci3labeltitle, 200, 16);
    lv_label_set_text(pci3labeltitle, "pci config window 3");

    // quit button
    pci3quit = lv_btn_create(pci3cont, NULL);
    lv_obj_set_pos(pci3quit, 870, 1);
    lv_obj_set_size(pci3quit, 30, 30);
    lv_obj_set_style_local_bg_opa(pci3quit, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_border_opa(pci3quit, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_event_cb(pci3quit, pci3quit_eventhandler);
    pci3quitlable = lv_label_create(pci3quit, NULL); 
    lv_label_set_text(pci3quitlable, "x");

    // pci table
    pci3config_table = lv_table_create(pci3cont, NULL);
    lv_obj_set_pos(pci3config_table, 5, 30);
    //Write codes screen
    lv_table_set_col_cnt(pci3config_table,17);
    lv_table_set_row_cnt(pci3config_table,17);

    lv_table_set_cell_value(pci3config_table,0,0,"0000");
    for (index = 0; index < 0x10; index++) {
      lv_table_set_cell_value_fmt(pci3config_table, 0, index+1, "%02x", ColTitle[index]);
    }

    for (index = 0 ; index < 0x10; index++) {
      lv_table_set_cell_value_fmt(pci3config_table, index + 1, 0, "%03x", ColTitle[index] << 4);
      for (count = 0; count < 0x10; count++) {
        lv_table_set_cell_value_fmt(pci3config_table, index + 1, count + 1, "%02x", DataBuff[index][count]);
      }
    }

    lv_table_set_col_width(pci3config_table, 0, 50);
    for (index = 1; index <= 16; index++ ) {
      lv_table_set_col_width(pci3config_table, index, 30);
    }

    lv_obj_set_style_local_pad_left(pci3config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_right(pci3config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_top(pci3config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_pad_bottom(pci3config_table, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 0);

    lv_obj_set_drag(pci3config_table, true);

    lv_group_add_obj(g, pci3cont);
}

static void warning_event_handler(lv_obj_t * msgbox, lv_event_t e)
{
    if(e == LV_EVENT_CLICKED) {
        uint16_t b = lv_msgbox_get_active_btn(msgbox);
        if(b == 0 || b == 1) {
            lv_obj_del(msgbox);
            mboxwarning = NULL;
        }
    }
}

static void ImgButton1_pci_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      if (pci1cont == NULL) {
        createpci1configtable();
      } else if (pci2cont == NULL) {
        createpci2configtable();
      } else if (pci3cont == NULL) {
        createpci3configtable();
      } else {
        static const char * warnings[] ={"OK", ""};
        mboxwarning = lv_msgbox_create(lv_scr_act(), NULL);
        lv_msgbox_set_text(mboxwarning, "What are you NONG SHA LEI?\nToo many windows opened");
        lv_msgbox_add_btns(mboxwarning, warnings);
        lv_obj_set_width(mboxwarning, 300);
        lv_obj_set_event_cb(mboxwarning, warning_event_handler);
        lv_obj_align(mboxwarning, NULL, LV_ALIGN_CENTER, 0, 0);
      }
      
      //Print(L"pci btn Clicked\n");
    }
}

static void ImgButton2_pciidx_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"pci index btn Clicked\n");
    }
}

static void ImgButton3_mem_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"memory btn Clicked\n");
    }
}

static void ImgButton4_memidx_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"memory index btn Clicked\n");
    }
}

static void ImgButton5_io_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"io btn Clicked\n");
    }
}

static void ImgButton6_ioidx_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"io index btn Clicked\n");
    }
}

static void ImgButton7_sio_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"sio btn Clicked\n");
    }
}

static void ImgButton8_clk_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"clock btn Clicked\n");
    }
}

static void ImgButton9_spd_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"spd btn Clicked\n");
    }
}

static void ImgButton10_smbus_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"smbus btn Clicked\n");
    }
}

static void ImgButton11_msr_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"msr btn Clicked\n");
    }
}

static void ImgButton12_mmio_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"mmio btn Clicked\n");
    }
}

static void ImgButton13_acpi_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"acpi btn Clicked\n");
    }
}

static void ImgButton14_ec_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"ec btn Clicked\n");
    }
}

static void ImgButton15_hddcd_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"hddcd btn Clicked\n");
    }
}

static void ImgButton16_diskrw_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"diskrw btn Clicked\n");
    }
}

static void ImgButton17_usb_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"usb btn Clicked\n");
    }
}

static void ImgButton18_smbios_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"smbios btn Clicked\n");
    }
}

static void ImgButton19_pciopt_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"pci optionrom btn Clicked\n");
    }
}

static void ImgButton20_mps_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"mps btn Clicked\n");
    }
}

static void ImgButton21_e820_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"e820 btn Clicked\n");
    }
}

static void ImgButton22_edid_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"edid btn Clicked\n");
    }
}

static void ImgButton23_help_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      Print(L"help btn Clicked\n");
    }
}


static void exit_event_handler(lv_obj_t * msgbox, lv_event_t e)
{
    if(e == LV_EVENT_CLICKED) {
        uint16_t b = lv_msgbox_get_active_btn(msgbox);
        if(b == 0 || b == 1) {
            lv_obj_del(msgbox);
            mboxexit = NULL;
        }

        if (b == 0) {
          ExitApp = TRUE;
        }
    }
}

static void ImgButton24_exit_eventhandler(lv_obj_t * obj, lv_event_t event)
{
    if (ismboxexiton()) {
      return;
    }

    if (event == LV_EVENT_RELEASED) {
      static const char * btns[] ={"Leave", "Stay", ""};
      mboxexit = lv_msgbox_create(lv_scr_act(), NULL);
      lv_msgbox_set_text(mboxexit, "What are you NONG SHA LEI?");
      lv_msgbox_add_btns(mboxexit, btns);
      lv_obj_set_width(mboxexit, 200);
      lv_obj_set_event_cb(mboxexit, exit_event_handler);
      lv_obj_align(mboxexit, NULL, LV_ALIGN_CENTER, 0, 0);

      //ExitApp = TRUE;
      //Print(L"exit btn Clicked\n");
    }
}


int main (int argc, char **argv) 
{
    EFI_STATUS Status;
    static lv_style_t style_btn;
    static lv_style_t style_btn2;

    lv_init();
    
    Status = main_init();
    if (EFI_ERROR(Status)) {
      return Status;
    }

    static lv_disp_buf_t disp_buf;
    static lv_color_t buf[LV_HOR_RES_MAX * LV_VER_RES_MAX / 10];                     /*Declare a buffer for 1/10 screen size*/
    lv_disp_buf_init(&disp_buf, buf, NULL, LV_HOR_RES_MAX * LV_VER_RES_MAX / 10);    /*Initialize the display buffer*/    

    lv_disp_drv_t disp_drv;               /*Descriptor of a display driver*/
    lv_disp_drv_init(&disp_drv);          /*Basic initialization*/
    disp_drv.flush_cb = my_disp_flush;    /*Set your driver function*/
    disp_drv.buffer = &disp_buf;          /*Assign the buffer to the display*/
    lv_disp_drv_register(&disp_drv);      /*Finally register the driver*/

    g = lv_group_create();
    //lv_group_set_focus_cb(g, focus_cb);

    #if LV_EX_KEYBOARD
      lv_indev_drv_t kb_drv;
      lv_indev_drv_init(&kb_drv);
      kb_drv.type = LV_INDEV_TYPE_KEYPAD;
      kb_drv.read_cb = keyboard_read;
      lv_indev_t * kb_indev = lv_indev_drv_register(&kb_drv);
      lv_indev_set_group(kb_indev, g);
    #endif

    #if USE_MOUSE
      lv_indev_drv_t ms_drv;
      lv_indev_drv_init(&ms_drv);
      ms_drv.type = LV_INDEV_TYPE_POINTER;
      ms_drv.read_cb = mouse_read;
      lv_indev_t * ms_indev = lv_indev_drv_register(&ms_drv);
      lv_indev_set_group(ms_indev, g);
    #endif

    // logo image
    Image1_logo = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(Image1_logo, &img_board_png);
    lv_obj_set_click(Image1_logo, false);
    lv_obj_set_hidden(Image1_logo, false);
    lv_obj_set_size(Image1_logo, 15, 15);
    lv_obj_set_pos(Image1_logo, 0, 10); // force: 15
    lv_obj_set_drag(Image1_logo, false);
    lv_group_add_obj(g, Image1_logo);

    // caption label
    Label_caption = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_long_mode(Label_caption, LV_LABEL_LONG_EXPAND);
    lv_label_set_align(Label_caption, LV_LABEL_ALIGN_LEFT);
    lv_label_set_text(Label_caption, "LVGL UEFI RW Nothing v0.01 by Leon Miao");
    lv_obj_set_size(Label_caption, 300, 16);  // force: -116
    lv_obj_set_click(Label_caption, false);
    lv_obj_set_hidden(Label_caption, false);
    lv_obj_clear_state(Label_caption, LV_STATE_DISABLED);
    lv_obj_set_drag(Label_caption, false);
    lv_obj_set_pos(Label_caption, 18, 10); // force: 189
    lv_group_add_obj(g, Label_caption);


    // pci button
    ImgButton1_pci = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton1_pci, LV_BTN_STATE_RELEASED, &img_pci_png);
    lv_imgbtn_set_src(ImgButton1_pci, LV_BTN_STATE_PRESSED, &img_pcipress_png);
    lv_obj_set_click(ImgButton1_pci, true);
    lv_obj_set_hidden(ImgButton1_pci, false);
    lv_obj_clear_state(ImgButton1_pci, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton1_pci, 0, 33); // force: 30
    lv_obj_set_drag(ImgButton1_pci, false);
    lv_obj_set_event_cb(ImgButton1_pci, ImgButton1_pci_eventhandler);   
    lv_group_add_obj(g, ImgButton1_pci);

    
    // pci index button
    ImgButton2_pciidx = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton2_pciidx, LV_BTN_STATE_RELEASED, &img_pciidx_png);
    lv_imgbtn_set_src(ImgButton2_pciidx, LV_BTN_STATE_PRESSED, &img_pciidxpress_png);
    lv_obj_set_click(ImgButton2_pciidx, true);
    lv_obj_set_hidden(ImgButton2_pciidx, false);
    lv_obj_clear_state(ImgButton2_pciidx, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton2_pciidx, 35, 33); // force: 30
    lv_obj_set_drag(ImgButton2_pciidx, false);
    lv_obj_set_event_cb(ImgButton2_pciidx, ImgButton2_pciidx_eventhandler);
    lv_group_add_obj(g, ImgButton2_pciidx);

    // memory button
    ImgButton3_mem = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton3_mem, LV_BTN_STATE_RELEASED, &img_mem_png);
    lv_imgbtn_set_src(ImgButton3_mem, LV_BTN_STATE_PRESSED, &img_mempress_png);
    lv_obj_set_click(ImgButton3_mem, true);
    lv_obj_set_hidden(ImgButton3_mem, false);
    lv_obj_clear_state(ImgButton3_mem, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton3_mem, 70, 33); // force: 30
    lv_obj_set_drag(ImgButton3_mem, false);
    lv_obj_set_event_cb(ImgButton3_mem, ImgButton3_mem_eventhandler);
    lv_group_add_obj(g, ImgButton3_mem);

    // memory index button
    ImgButton4_memidx = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton4_memidx, LV_BTN_STATE_RELEASED, &img_memidx_png);
    lv_imgbtn_set_src(ImgButton4_memidx, LV_BTN_STATE_PRESSED, &img_memidxpress_png);
    lv_obj_set_click(ImgButton4_memidx, true);
    lv_obj_set_hidden(ImgButton4_memidx, false);
    lv_obj_clear_state(ImgButton4_memidx, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton4_memidx, 105, 33); // force: 30
    lv_obj_set_drag(ImgButton4_memidx, false);
    lv_obj_set_event_cb(ImgButton4_memidx, ImgButton4_memidx_eventhandler);
    lv_group_add_obj(g, ImgButton4_memidx);

    // io button
    ImgButton5_io = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton5_io, LV_BTN_STATE_RELEASED, &img_io_png);
    lv_imgbtn_set_src(ImgButton5_io, LV_BTN_STATE_PRESSED, &img_iopress_png);
    lv_obj_set_click(ImgButton5_io, true);
    lv_obj_set_hidden(ImgButton5_io, false);
    lv_obj_clear_state(ImgButton5_io, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton5_io, 140, 33); // force: 30
    lv_obj_set_drag(ImgButton5_io, false);
    lv_obj_set_event_cb(ImgButton5_io, ImgButton5_io_eventhandler);
    lv_group_add_obj(g, ImgButton5_io);

    // io index button
    ImgButton6_ioidx = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton6_ioidx, LV_BTN_STATE_RELEASED, &img_ioidx_png);
    lv_imgbtn_set_src(ImgButton6_ioidx, LV_BTN_STATE_PRESSED, &img_ioidxpress_png);
    lv_obj_set_click(ImgButton6_ioidx, true);
    lv_obj_set_hidden(ImgButton6_ioidx, false);
    lv_obj_clear_state(ImgButton6_ioidx, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton6_ioidx, 175, 33); // force: 30
    lv_obj_set_drag(ImgButton6_ioidx, false);
    lv_obj_set_event_cb(ImgButton6_ioidx, ImgButton6_ioidx_eventhandler);
    lv_group_add_obj(g, ImgButton6_ioidx);

    // sio button
    ImgButton7_sio = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton7_sio, LV_BTN_STATE_RELEASED, &img_sio_png);
    lv_imgbtn_set_src(ImgButton7_sio, LV_BTN_STATE_PRESSED, &img_siopress_png);
    lv_obj_set_click(ImgButton7_sio, true);
    lv_obj_set_hidden(ImgButton7_sio, false);
    lv_obj_clear_state(ImgButton7_sio, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton7_sio, 210, 33); // force: 30
    lv_obj_set_drag(ImgButton7_sio, false);
    lv_obj_set_event_cb(ImgButton7_sio, ImgButton7_sio_eventhandler);
    lv_group_add_obj(g, ImgButton7_sio);

    // clock button
    ImgButton8_clk = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton8_clk, LV_BTN_STATE_RELEASED, &img_clk_png);
    lv_imgbtn_set_src(ImgButton8_clk, LV_BTN_STATE_PRESSED, &img_clkpress_png);
    lv_obj_set_click(ImgButton8_clk, true);
    lv_obj_set_hidden(ImgButton8_clk, false);
    lv_obj_clear_state(ImgButton8_clk, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton8_clk, 245, 33); // force: 30
    lv_obj_set_drag(ImgButton8_clk, false);
    lv_obj_set_event_cb(ImgButton8_clk, ImgButton8_clk_eventhandler);
    lv_group_add_obj(g, ImgButton8_clk);

    // spd button
    ImgButton9_spd = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton9_spd, LV_BTN_STATE_RELEASED, &img_spd_png);
    lv_imgbtn_set_src(ImgButton9_spd, LV_BTN_STATE_PRESSED, &img_spdpress_png);
    lv_obj_set_click(ImgButton9_spd, true);
    lv_obj_set_hidden(ImgButton9_spd, false);
    lv_obj_clear_state(ImgButton9_spd, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton9_spd, 280, 33); // force: 30s
    lv_obj_set_drag(ImgButton9_spd, false);
    lv_obj_set_event_cb(ImgButton9_spd, ImgButton9_spd_eventhandler);
    lv_group_add_obj(g, ImgButton9_spd);

    // smbus button
    ImgButton10_smbus = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton10_smbus, LV_BTN_STATE_RELEASED, &img_smbus_png);
    lv_imgbtn_set_src(ImgButton10_smbus, LV_BTN_STATE_PRESSED, &img_smbuspress_png);
    lv_obj_set_click(ImgButton10_smbus, true);
    lv_obj_set_hidden(ImgButton10_smbus, false);
    lv_obj_clear_state(ImgButton10_smbus, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton10_smbus, 315, 33); // force: 30s
    lv_obj_set_drag(ImgButton10_smbus, false);
    lv_obj_set_event_cb(ImgButton10_smbus, ImgButton10_smbus_eventhandler);
    lv_group_add_obj(g, ImgButton10_smbus);

    // msr button
    ImgButton11_msr = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton11_msr, LV_BTN_STATE_RELEASED, &img_msr_png);
    lv_imgbtn_set_src(ImgButton11_msr, LV_BTN_STATE_PRESSED, &img_msrpress_png);
    lv_obj_set_click(ImgButton11_msr, true);
    lv_obj_set_hidden(ImgButton11_msr, false);
    lv_obj_clear_state(ImgButton11_msr, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton11_msr, 350, 33); // force: 30s
    lv_obj_set_drag(ImgButton11_msr, false);
    lv_obj_set_event_cb(ImgButton11_msr, ImgButton11_msr_eventhandler);
    lv_group_add_obj(g, ImgButton11_msr);

    // mmio button
    ImgButton12_mmio = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton12_mmio, LV_BTN_STATE_RELEASED, &img_mmio_png);
    lv_imgbtn_set_src(ImgButton12_mmio, LV_BTN_STATE_PRESSED, &img_mmiopress_png);
    lv_obj_set_click(ImgButton12_mmio, true);
    lv_obj_set_hidden(ImgButton12_mmio, false);
    lv_obj_clear_state(ImgButton12_mmio, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton12_mmio, 385, 33); // force: 30s
    lv_obj_set_drag(ImgButton12_mmio, false);
    lv_obj_set_event_cb(ImgButton12_mmio, ImgButton12_mmio_eventhandler);
    lv_group_add_obj(g, ImgButton12_mmio);

    // acpi button
    ImgButton13_acpi = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton13_acpi, LV_BTN_STATE_RELEASED, &img_acpi_png);
    lv_imgbtn_set_src(ImgButton13_acpi, LV_BTN_STATE_PRESSED, &img_acpipress_png);
    lv_obj_set_click(ImgButton13_acpi, true);
    lv_obj_set_hidden(ImgButton13_acpi, false);
    lv_obj_clear_state(ImgButton13_acpi, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton13_acpi, 420, 33); // force: 30s
    lv_obj_set_drag(ImgButton13_acpi, false);
    lv_obj_set_event_cb(ImgButton13_acpi, ImgButton13_acpi_eventhandler);
    lv_group_add_obj(g, ImgButton13_acpi);

    // ec button
    ImgButton14_ec = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton14_ec, LV_BTN_STATE_RELEASED, &img_ec_png);
    lv_imgbtn_set_src(ImgButton14_ec, LV_BTN_STATE_PRESSED, &img_ecpress_png);
    lv_obj_set_click(ImgButton14_ec, true);
    lv_obj_set_hidden(ImgButton14_ec, false);
    lv_obj_clear_state(ImgButton14_ec, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton14_ec, 455, 33); // force: 30s
    lv_obj_set_drag(ImgButton14_ec, false);
    lv_obj_set_event_cb(ImgButton14_ec, ImgButton14_ec_eventhandler);
    lv_group_add_obj(g, ImgButton14_ec);

    // hdd cd button
    ImgButton15_hddcd = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton15_hddcd, LV_BTN_STATE_RELEASED, &img_hddcd_png);
    lv_imgbtn_set_src(ImgButton15_hddcd, LV_BTN_STATE_PRESSED, &img_hddcdpress_png);
    lv_obj_set_click(ImgButton15_hddcd, true);
    lv_obj_set_hidden(ImgButton15_hddcd, false);
    lv_obj_clear_state(ImgButton15_hddcd, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton15_hddcd, 490, 33); // force: 30s
    lv_obj_set_drag(ImgButton15_hddcd, false);
    lv_obj_set_event_cb(ImgButton15_hddcd, ImgButton15_hddcd_eventhandler);
    lv_group_add_obj(g, ImgButton15_hddcd);

    // diskrw button
    ImgButton16_diskrw = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton16_diskrw, LV_BTN_STATE_RELEASED, &img_diskrw_png);
    lv_imgbtn_set_src(ImgButton16_diskrw, LV_BTN_STATE_PRESSED, &img_diskrwpress_png);
    lv_obj_set_click(ImgButton16_diskrw, true);
    lv_obj_set_hidden(ImgButton16_diskrw, false);
    lv_obj_clear_state(ImgButton16_diskrw, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton16_diskrw, 525, 33); // force: 30s
    lv_obj_set_drag(ImgButton16_diskrw, false);
    lv_obj_set_event_cb(ImgButton16_diskrw, ImgButton16_diskrw_eventhandler);
    lv_group_add_obj(g, ImgButton16_diskrw);

    // usb button
    ImgButton17_usb = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton17_usb, LV_BTN_STATE_RELEASED, &img_usb_png);
    lv_imgbtn_set_src(ImgButton17_usb, LV_BTN_STATE_PRESSED, &img_usbpress_png);
    lv_obj_set_click(ImgButton17_usb, true);
    lv_obj_set_hidden(ImgButton17_usb, false);
    lv_obj_clear_state(ImgButton17_usb, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton17_usb, 560, 33); // force: 30s
    lv_obj_set_drag(ImgButton17_usb, false);
    lv_obj_set_event_cb(ImgButton17_usb, ImgButton17_usb_eventhandler);
    lv_group_add_obj(g, ImgButton17_usb);

    // smbios button
    ImgButton18_smbios = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton18_smbios, LV_BTN_STATE_RELEASED, &img_smbios_png);
    lv_imgbtn_set_src(ImgButton18_smbios, LV_BTN_STATE_PRESSED, &img_smbiospress_png);
    lv_obj_set_click(ImgButton18_smbios, true);
    lv_obj_set_hidden(ImgButton18_smbios, false);
    lv_obj_clear_state(ImgButton18_smbios, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton18_smbios, 595, 33); // force: 30s
    lv_obj_set_drag(ImgButton18_smbios, false);
    lv_obj_set_event_cb(ImgButton18_smbios, ImgButton18_smbios_eventhandler);
    lv_group_add_obj(g, ImgButton18_smbios);

    // pci optionrom button
    ImgButton19_pciopt = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton19_pciopt, LV_BTN_STATE_RELEASED, &img_pciopt_png);
    lv_imgbtn_set_src(ImgButton19_pciopt, LV_BTN_STATE_PRESSED, &img_pcioptpress_png);
    lv_obj_set_click(ImgButton19_pciopt, true);
    lv_obj_set_hidden(ImgButton19_pciopt, false);
    lv_obj_clear_state(ImgButton19_pciopt, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton19_pciopt, 630, 33); // force: 30s
    lv_obj_set_drag(ImgButton19_pciopt, false);
    lv_obj_set_event_cb(ImgButton19_pciopt, ImgButton19_pciopt_eventhandler);
    lv_group_add_obj(g, ImgButton19_pciopt);

    // mps button
    ImgButton20_mps = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton20_mps, LV_BTN_STATE_RELEASED, &img_mps_png);
    lv_imgbtn_set_src(ImgButton20_mps, LV_BTN_STATE_PRESSED, &img_mpspress_png);
    lv_obj_set_click(ImgButton20_mps, true);
    lv_obj_set_hidden(ImgButton20_mps, false);
    lv_obj_clear_state(ImgButton20_mps, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton20_mps, 665, 33); // force: 30s
    lv_obj_set_drag(ImgButton20_mps, false);
    lv_obj_set_event_cb(ImgButton20_mps, ImgButton20_mps_eventhandler);
    lv_group_add_obj(g, ImgButton20_mps);

    // e820 button
    ImgButton21_e820 = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton21_e820, LV_BTN_STATE_RELEASED, &img_e820_png);
    lv_imgbtn_set_src(ImgButton21_e820, LV_BTN_STATE_PRESSED, &img_e820press_png);
    lv_obj_set_click(ImgButton21_e820, true);
    lv_obj_set_hidden(ImgButton21_e820, false);
    lv_obj_clear_state(ImgButton21_e820, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton21_e820, 700, 33); // force: 30s
    lv_obj_set_drag(ImgButton21_e820, false);
    lv_obj_set_event_cb(ImgButton21_e820, ImgButton21_e820_eventhandler);
    lv_group_add_obj(g, ImgButton21_e820);

    // edid button
    ImgButton22_edid = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton22_edid, LV_BTN_STATE_RELEASED, &img_edid_png);
    lv_imgbtn_set_src(ImgButton22_edid, LV_BTN_STATE_PRESSED, &img_edidpress_png);
    lv_obj_set_click(ImgButton22_edid, true);
    lv_obj_set_hidden(ImgButton22_edid, false);
    lv_obj_clear_state(ImgButton22_edid, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton22_edid, 735, 33); // force: 30s
    lv_obj_set_drag(ImgButton22_edid, false);
    lv_obj_set_event_cb(ImgButton22_edid, ImgButton22_edid_eventhandler);
    lv_group_add_obj(g, ImgButton22_edid);

    // help button
    ImgButton23_help = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton23_help, LV_BTN_STATE_RELEASED, &img_help_png);
    lv_imgbtn_set_src(ImgButton23_help, LV_BTN_STATE_PRESSED, &img_helppress_png);
    lv_obj_set_click(ImgButton23_help, true);
    lv_obj_set_hidden(ImgButton23_help, false);
    lv_obj_clear_state(ImgButton23_help, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton23_help, 770, 33); // force: 30s
    lv_obj_set_drag(ImgButton23_help, false);
    lv_obj_set_event_cb(ImgButton23_help, ImgButton23_help_eventhandler);
    lv_group_add_obj(g, ImgButton23_help);

    // exit button
    ImgButton24_exit = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(ImgButton24_exit, LV_BTN_STATE_RELEASED, &img_exit_png);
    lv_imgbtn_set_src(ImgButton24_exit, LV_BTN_STATE_PRESSED, &img_exitpress_png);
    lv_obj_set_click(ImgButton24_exit, true);
    lv_obj_set_hidden(ImgButton24_exit, false);
    lv_obj_clear_state(ImgButton24_exit, LV_STATE_DISABLED);
    lv_obj_set_pos(ImgButton24_exit, 840, 33); // force: 30s
    lv_obj_set_drag(ImgButton24_exit, false);
    lv_obj_set_event_cb(ImgButton24_exit, ImgButton24_exit_eventhandler);
    lv_group_add_obj(g, ImgButton24_exit);      


    while (1) {
        lv_tick_inc(5);
        lv_task_handler();
    if (!InitMouse) {
      mouse_init();
      InitMouse = TRUE;
    }        
        gBS->Stall(1000 * 5);
        if (ExitApp) {
            break;
        }
    }
    return 0;
}
