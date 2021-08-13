/**
 * @file sdl_kb.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <Library/UefiBootServicesTableLib.h>
#include <Protocol/SimpleTextIn.h>
#include "keyboard.h"

// extern BOOLEAN ExitApp;

#if USE_KEYBOARD

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static uint32_t keycode_to_ascii(EFI_INPUT_KEY sdl_key);

/**********************
 *  STATIC VARIABLES
 **********************/
static uint32_t last_key;
static lv_indev_state_t state;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Initialize the keyboard
 */
void keyboard_init(void)
{
    /*Nothing to init*/
}

/**
 * Get the last pressed or released character from the PC's keyboard
 * @param indev_drv pointer to the related input device driver
 * @param data store the read data here
 * @return false: because the points are not buffered, so no more data to be read
 */
bool keyboard_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data)
{
    EFI_STATUS Status;
    EFI_INPUT_KEY Key;
    Status =  gST->ConIn->ReadKeyStroke(gST->ConIn, &Key);
    if (Status == EFI_SUCCESS)
    {
        data->key = keycode_to_ascii(Key);
        data->state = LV_INDEV_STATE_PR;
        //Print (L"Key:%d %d", Key.ScanCode, Key.UnicodeChar);

        //if (data->key == LV_KEY_ESC) {
        //    ExitApp = TRUE;
        //}
        return false;
    }
    data->state = LV_INDEV_STATE_REL;

    return false;
}

/**
 * It is called periodically from the SDL thread to check a key is pressed/released
 * @param event describes the event
 */
void keyboard_handler(SDL_Event * event)
{
    /* We only care about SDL_KEYDOWN and SDL_KEYUP events */
    switch(event->type) {
        case SDL_KEYDOWN:                       /*Button press*/
            last_key = event->key.keysym.sym;   /*Save the pressed key*/
            state = LV_INDEV_STATE_PR;          /*Save the key is pressed now*/
            break;
        case SDL_KEYUP:                         /*Button release*/
            state = LV_INDEV_STATE_REL;         /*Save the key is released but keep the last key*/
            break;
        default:
            break;

    }
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/**
 * Convert the key code LV_KEY_... "codes" or leave them if they are not control characters
 * @param sdl_key the key code
 * @return
 */
static uint32_t keycode_to_ascii(EFI_INPUT_KEY sdl_key)
{
    /*Remap some key to LV_KEY_... to manage groups*/
    switch(sdl_key.ScanCode) {
        case SCAN_UP:
            return LV_KEY_UP;

        case SCAN_DOWN:
            return LV_KEY_DOWN;

        case SCAN_RIGHT:
            return LV_KEY_RIGHT;

        case SCAN_LEFT:
            return LV_KEY_LEFT;

        case SCAN_HOME:
            return LV_KEY_HOME;

        case SCAN_END:
            return LV_KEY_END;

        case SCAN_DELETE:
            return LV_KEY_DEL;

        case SCAN_PAGE_UP:
            return LV_KEY_PREV;

        case SCAN_PAGE_DOWN:
            return LV_KEY_NEXT;

        case SCAN_ESC:
            return LV_KEY_ESC;

        case SCAN_NULL:
            switch(sdl_key.UnicodeChar) {
                case 13:
                    return LV_KEY_ENTER;

                default:
                    return sdl_key.UnicodeChar;
            }
        default:
            return sdl_key.UnicodeChar;
    }
}
#endif
