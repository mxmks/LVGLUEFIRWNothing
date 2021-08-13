/**
 * @file lvgl.h
 * Include all LittleV GL related headers
 */
 
#ifndef LVGL_H
#define LVGL_H

#ifdef __cplusplus
extern "C" {
#endif


/***************************
 * CURRENT VERSION OF LVGL
 ***************************/
#define LVGL_VERSION_MAJOR 7
#define LVGL_VERSION_MINOR 7
#define LVGL_VERSION_PATCH 0
#define LVGL_VERSION_INFO "dev"

/*********************
 *      INCLUDES
 *********************/

#include "src/lv_misc/lv_log.h"
#include "src/lv_misc/lv_task.h"
#include "src/lv_misc/lv_math.h"
#include "src/lv_misc/lv_async.h"

#include "src/lv_hal/lv_hal.h"

#include "src/lv_core/lv_obj.h"
#include "src/lv_core/lv_group.h"
#include "src/lv_core/lv_indev.h"

#include "src/lv_core/lv_refr.h"
#include "src/lv_core/lv_disp.h"

#include "src/lv_themes/lv_theme.h"

#include "src/lv_font/lv_font.h"
#include "src/lv_font/lv_font_loader.h"
#include "src/lv_font/lv_font_fmt_txt.h"
#include "src/lv_misc/lv_printf.h"

#include "src/lv_widgets/lv_btn.h"
#include "src/lv_widgets/lv_imgbtn.h"
#include "src/lv_widgets/lv_img.h"
#include "src/lv_widgets/lv_label.h"
#include "src/lv_widgets/lv_line.h"
#include "src/lv_widgets/lv_page.h"
#include "src/lv_widgets/lv_cont.h"
#include "src/lv_widgets/lv_list.h"
#include "src/lv_widgets/lv_chart.h"
#include "src/lv_widgets/lv_table.h"
#include "src/lv_widgets/lv_checkbox.h"
#include "src/lv_widgets/lv_cpicker.h"
#include "src/lv_widgets/lv_bar.h"
#include "src/lv_widgets/lv_slider.h"
#include "src/lv_widgets/lv_led.h"
#include "src/lv_widgets/lv_btnmatrix.h"
#include "src/lv_widgets/lv_keyboard.h"
#include "src/lv_widgets/lv_dropdown.h"
#include "src/lv_widgets/lv_roller.h"
#include "src/lv_widgets/lv_textarea.h"
#include "src/lv_widgets/lv_canvas.h"
#include "src/lv_widgets/lv_win.h"
#include "src/lv_widgets/lv_tabview.h"
#include "src/lv_widgets/lv_tileview.h"
#include "src/lv_widgets/lv_msgbox.h"
#include "src/lv_widgets/lv_objmask.h"
#include "src/lv_widgets/lv_gauge.h"
#include "src/lv_widgets/lv_linemeter.h"
#include "src/lv_widgets/lv_switch.h"
#include "src/lv_widgets/lv_arc.h"
#include "src/lv_widgets/lv_spinner.h"
#include "src/lv_widgets/lv_calendar.h"
#include "src/lv_widgets/lv_spinbox.h"

#include "src/lv_draw/lv_img_cache.h"

#include "src/lv_api_map.h"

//#define LV_BUILD_TEST 1

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
extern lv_obj_t * Image1_logo;
extern lv_obj_t * ImgButton1_pci;
extern lv_obj_t * ImgButton2_pciidx;
extern lv_obj_t * ImgButton3_mem;
extern lv_obj_t * Label_caption;
extern lv_obj_t * ImgButton4_memidx;
extern lv_obj_t * ImgButton5_io;
extern lv_obj_t * ImgButton6_ioidx;
extern lv_obj_t * ImgButton7_sio;
extern lv_obj_t * ImgButton8_clk;
extern lv_obj_t * ImgButton9_spd;
extern lv_obj_t * ImgButton10_smbus;
extern lv_obj_t * ImgButton11_msr;
extern lv_obj_t * ImgButton12_mmio;
extern lv_obj_t * ImgButton13_acpi;
extern lv_obj_t * ImgButton14_ec;
extern lv_obj_t * ImgButton15_hddcd;
extern lv_obj_t * ImgButton16_diskrw;
extern lv_obj_t * ImgButton17_usb;
extern lv_obj_t * ImgButton18_smbios;
extern lv_obj_t * ImgButton19_pciopt;
extern lv_obj_t * ImgButton20_mps;
extern lv_obj_t * ImgButton21_e820;
extern lv_obj_t * ImgButton22_edid;
extern lv_obj_t * ImgButton23_help;
extern lv_obj_t * ImgButton24_exit;


/**********************
 *      MACROS
 **********************/
LV_IMG_DECLARE(img_board_png);   // assets\board.png
LV_IMG_DECLARE(img_pci_png);   // assets\pci.png
LV_IMG_DECLARE(img_pcipress_png);
LV_IMG_DECLARE(img_pciidx_png);
LV_IMG_DECLARE(img_pciidxpress_png);
LV_IMG_DECLARE(img_mem_png);
LV_IMG_DECLARE(img_mempress_png);
LV_IMG_DECLARE(img_memidx_png);
LV_IMG_DECLARE(img_memidxpress_png);
LV_IMG_DECLARE(img_io_png);
LV_IMG_DECLARE(img_iopress_png);
LV_IMG_DECLARE(img_ioidx_png);
LV_IMG_DECLARE(img_ioidxpress_png);
LV_IMG_DECLARE(img_sio_png);
LV_IMG_DECLARE(img_siopress_png);
LV_IMG_DECLARE(img_clk_png);
LV_IMG_DECLARE(img_clkpress_png);
LV_IMG_DECLARE(img_spd_png);
LV_IMG_DECLARE(img_spdpress_png);
LV_IMG_DECLARE(img_smbus_png);
LV_IMG_DECLARE(img_smbuspress_png);
LV_IMG_DECLARE(img_msr_png);
LV_IMG_DECLARE(img_msrpress_png);
LV_IMG_DECLARE(img_mmio_png);
LV_IMG_DECLARE(img_mmiopress_png);
LV_IMG_DECLARE(img_acpi_png);
LV_IMG_DECLARE(img_acpipress_png);
LV_IMG_DECLARE(img_ec_png);
LV_IMG_DECLARE(img_ecpress_png);
LV_IMG_DECLARE(img_hddcd_png);
LV_IMG_DECLARE(img_hddcdpress_png);
LV_IMG_DECLARE(img_diskrw_png);
LV_IMG_DECLARE(img_diskrwpress_png);
LV_IMG_DECLARE(img_usb_png);
LV_IMG_DECLARE(img_usbpress_png);
LV_IMG_DECLARE(img_smbios_png);
LV_IMG_DECLARE(img_smbiospress_png);
LV_IMG_DECLARE(img_pciopt_png);
LV_IMG_DECLARE(img_pcioptpress_png);
LV_IMG_DECLARE(img_mps_png);
LV_IMG_DECLARE(img_mpspress_png);
LV_IMG_DECLARE(img_e820_png);
LV_IMG_DECLARE(img_e820press_png);
LV_IMG_DECLARE(img_edid_png);
LV_IMG_DECLARE(img_edidpress_png);
LV_IMG_DECLARE(img_help_png);
LV_IMG_DECLARE(img_helppress_png);
LV_IMG_DECLARE(img_exit_png);
LV_IMG_DECLARE(img_exitpress_png);




/** Gives 1 if the x.y.z version is supported in the current version
 * Usage:
 *
 * - Require v6
 * #if LV_VERSION_CHECK(6,0,0)
 *   new_func_in_v6();
 * #endif
 *
 *
 * - Require at least v5.3
 * #if LV_VERSION_CHECK(5,3,0)
 *   new_feature_from_v5_3();
 * #endif
 *
 *
 * - Require v5.3.2 bugfixes
 * #if LV_VERSION_CHECK(5,3,2)
 *   bugfix_in_v5_3_2();
 * #endif
 *
 * */
#define LV_VERSION_CHECK(x,y,z) (x == LVGL_VERSION_MAJOR && (y < LVGL_VERSION_MINOR || (y == LVGL_VERSION_MINOR && z <= LVGL_VERSION_PATCH)))


#ifdef __cplusplus
}
#endif

#endif /*LVGL_H*/
