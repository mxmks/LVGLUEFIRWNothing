#include "../lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\edidpress.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t img_edidpress_png_data[] = {
    0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xF3, 0xF2, 0xF2, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF,
    0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF4, 0xF3, 0xF3, 0xFF, 0xF3, 0xF2, 0xF2, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFD, 0xFD, 0xFD, 0xFF, 0x79, 0x79, 0x79, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF4, 0xF4, 0xF4, 0xFF, 0xCE, 0xCD, 0xCD, 0xFF,
    0x6E, 0x70, 0x70, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF,
    0x76, 0x78, 0x78, 0xFF, 0x76, 0x78, 0x78, 0xFF, 0x6E, 0x71, 0x71, 0xFF, 0xC6, 0xC5, 0xC5, 0xFF, 0xF1, 0xF0, 0xF0, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xFE, 0xFE, 0xFE, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xCF, 0xCE, 0xCE, 0xFF, 0x8A, 0x9B, 0x9B, 0xFF, 0xDB, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF,
    0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xFF, 0x95, 0xAA, 0xAA, 0xFF,
    0x9A, 0x99, 0x99, 0xFF, 0xAE, 0xAD, 0xAD, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE7, 0xE6, 0xE6, 0xFF, 0x75, 0x7D, 0x7D, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xCB, 0xFC, 0xFC, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF,
    0xC9, 0xFF, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xCB, 0xFC, 0xFC, 0xFF, 0xCB, 0xFE, 0xFE, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xCB, 0xFE, 0xFE, 0xFF, 0xCB, 0xFC, 0xFC, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0x89, 0x94, 0x94, 0xFF, 0xA1, 0x9F, 0x9F, 0xFF, 0xBB, 0xBB, 0xBB, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF,
    0xF1, 0xF1, 0xF1, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x7D, 0x83, 0x83, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0xD1, 0xE1, 0xE1, 0xFF, 0xDD, 0xA6, 0xA6, 0xFF, 0xDD, 0xA6, 0xA6, 0xFF, 0xDE, 0x9F, 0x9F, 0xFF, 0xCF, 0xEB, 0xEB, 0xFF, 0xD7, 0xC5, 0xC5, 0xFF, 0xDD, 0xA6, 0xA6, 0xFF, 0xDE, 0xA3, 0xA3, 0xFF, 0xD0, 0xE5, 0xE5, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xCC, 0xF8, 0xF8, 0xFF,
    0xDA, 0xB5, 0xB5, 0xFF, 0xCD, 0xF6, 0xF6, 0xFF, 0xDD, 0xA7, 0xA7, 0xFF, 0xDD, 0xA4, 0xA4, 0xFF, 0xD7, 0xC4, 0xC4, 0xFF, 0xCD, 0xF6, 0xF6, 0xFF, 0xCB, 0xFE, 0xFE, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0x8C, 0x96, 0x96, 0xFF, 0x94, 0x92, 0x92, 0xFF, 0xB1, 0xB1, 0xB1, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x7D, 0x83, 0x83, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF,
    0xC9, 0xFF, 0xFF, 0xFF, 0xE1, 0x90, 0x90, 0xFF, 0xFC, 0x0A, 0x0A, 0xFF, 0xEB, 0x5F, 0x5F, 0xFF, 0xEF, 0x4B, 0x4B, 0xFF, 0xD1, 0xE4, 0xE4, 0xFF, 0xF7, 0x20, 0x20, 0xFF, 0xF3, 0x38, 0x38, 0xFF, 0xF5, 0x2E, 0x2E, 0xFF, 0xF1, 0x43, 0x43, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xD0, 0xE8, 0xE8, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xD4, 0xD8, 0xD8, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xF0, 0x46, 0x46, 0xFF,
    0xF4, 0x34, 0x34, 0xFF, 0xDA, 0xB2, 0xB2, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0x8D, 0x97, 0x97, 0xFF, 0x8B, 0x8A, 0x8A, 0xFF, 0xA6, 0xA6, 0xA6, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x7D, 0x83, 0x83, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xE0, 0x96, 0x96, 0xFF, 0xF5, 0x2C, 0x2C, 0xFF, 0xE1, 0x94, 0x94, 0xFF,
    0xE4, 0x81, 0x81, 0xFF, 0xCE, 0xF3, 0xF3, 0xFF, 0xF8, 0x1F, 0x1F, 0xFF, 0xD0, 0xE7, 0xE7, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xC5, 0xFF, 0xFF, 0xFF, 0xCF, 0xEB, 0xEB, 0xFF, 0xFC, 0x0D, 0x0D, 0xFF, 0xD4, 0xD7, 0xD7, 0xFF, 0xF3, 0x3A, 0x3A, 0xFF, 0xC4, 0xFF, 0xFF, 0xFF, 0xEA, 0x63, 0x63, 0xFF, 0xE7, 0x75, 0x75, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF,
    0x8D, 0x98, 0x98, 0xFF, 0x89, 0x88, 0x88, 0xFF, 0xA3, 0xA3, 0xA3, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x7D, 0x83, 0x83, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xE0, 0x96, 0x96, 0xFF, 0xF7, 0x23, 0x23, 0xFF, 0xE4, 0x81, 0x81, 0xFF, 0xE8, 0x6E, 0x6E, 0xFF, 0xCF, 0xED, 0xED, 0xFF, 0xF8, 0x1F, 0x1F, 0xFF, 0xD3, 0xD4, 0xD4, 0xFF,
    0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xC5, 0xFF, 0xFF, 0xFF, 0xCF, 0xEB, 0xEB, 0xFF, 0xFC, 0x0D, 0x0D, 0xFF, 0xD4, 0xD7, 0xD7, 0xFF, 0xF4, 0x32, 0x32, 0xFF, 0xC4, 0xFF, 0xFF, 0xFF, 0xE6, 0x7D, 0x7D, 0xFF, 0xE7, 0x78, 0x78, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0x8D, 0x98, 0x98, 0xFF, 0x8A, 0x88, 0x88, 0xFF, 0xA3, 0xA3, 0xA3, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF,
    0xF1, 0xF1, 0xF1, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x7D, 0x83, 0x83, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xE1, 0x8F, 0x8F, 0xFF, 0xE7, 0x71, 0x71, 0xFF, 0xC1, 0xFF, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0xFF, 0xF9, 0x1A, 0x1A, 0xFF, 0xCF, 0xE9, 0xE9, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xC5, 0xFF, 0xFF, 0xFF, 0xCF, 0xEB, 0xEB, 0xFF,
    0xFC, 0x0D, 0x0D, 0xFF, 0xD4, 0xD7, 0xD7, 0xFF, 0xF2, 0x3B, 0x3B, 0xFF, 0xC4, 0xFF, 0xFF, 0xFF, 0xEB, 0x60, 0x60, 0xFF, 0xE7, 0x74, 0x74, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0x8D, 0x98, 0x98, 0xFF, 0x8A, 0x88, 0x88, 0xFF, 0xA3, 0xA3, 0xA3, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x7D, 0x83, 0x83, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF,
    0xC9, 0xFF, 0xFF, 0xFF, 0xE1, 0x90, 0x90, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xF3, 0x38, 0x38, 0xFF, 0xF7, 0x24, 0x24, 0xFF, 0xD3, 0xD8, 0xD8, 0xFF, 0xF7, 0x21, 0x21, 0xFF, 0xF7, 0x24, 0x24, 0xFF, 0xF9, 0x1A, 0x1A, 0xFF, 0xEE, 0x51, 0x51, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xD0, 0xE8, 0xE8, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xD3, 0xD8, 0xD8, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xF5, 0x2E, 0x2E, 0xFF,
    0xF5, 0x31, 0x31, 0xFF, 0xD9, 0xB9, 0xB9, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0x8D, 0x98, 0x98, 0xFF, 0x8A, 0x88, 0x88, 0xFF, 0xA3, 0xA3, 0xA3, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE7, 0xE6, 0xE6, 0xFF, 0x75, 0x7D, 0x7D, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0xCF, 0xE9, 0xE9, 0xFF, 0xD8, 0xBE, 0xBE, 0xFF, 0xD8, 0xBD, 0xBD, 0xFF,
    0xD9, 0xB8, 0xB8, 0xFF, 0xCE, 0xF0, 0xF0, 0xFF, 0xD3, 0xD4, 0xD4, 0xFF, 0xD8, 0xBD, 0xBD, 0xFF, 0xD9, 0xBB, 0xBB, 0xFF, 0xCF, 0xED, 0xED, 0xFF, 0xCA, 0xFF, 0xFF, 0xFF, 0xCC, 0xFA, 0xFA, 0xFF, 0xD6, 0xC8, 0xC8, 0xFF, 0xCC, 0xF9, 0xF9, 0xFF, 0xD8, 0xBE, 0xBE, 0xFF, 0xD8, 0xBC, 0xBC, 0xFF, 0xD4, 0xD3, 0xD3, 0xFF, 0xCC, 0xF9, 0xF9, 0xFF, 0xCB, 0xFE, 0xFE, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF,
    0x8E, 0x9A, 0x9A, 0xFF, 0x89, 0x88, 0x88, 0xFF, 0xA3, 0xA3, 0xA3, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF2, 0xF1, 0xF1, 0xFF, 0xCF, 0xCE, 0xCE, 0xFF, 0x8D, 0x9F, 0x9F, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF,
    0xD3, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0x9E, 0xB3, 0xB3, 0xFF, 0x88, 0x87, 0x87, 0xFF, 0x8D, 0x8D, 0x8D, 0xFF, 0xA2, 0xA2, 0xA2, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xEB, 0xEA, 0xEA, 0xFF, 0x9E, 0x9D, 0x9D, 0xFF, 0x7A, 0x7D, 0x7D, 0xFF, 0x7D, 0x7C, 0x7C, 0xFF, 0xA5, 0xBC, 0xBC, 0xFF, 0xD2, 0xFF, 0xFF, 0xFF, 0xCD, 0xFE, 0xFE, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0x94, 0xA2, 0xA2, 0xFF, 0x7F, 0x7F, 0x7F, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF,
    0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0x89, 0x89, 0x89, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x91, 0x91, 0x91, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xE8, 0xE8, 0xE8, 0xFF, 0xAE, 0xAE, 0xAE, 0xFF,
    0xAA, 0xA9, 0xA9, 0xFF, 0x8C, 0x88, 0x88, 0xFF, 0xA0, 0xB6, 0xB6, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0x94, 0xA1, 0xA1, 0xFF, 0x88, 0x85, 0x85, 0xFF, 0x8F, 0x8E, 0x8E, 0xFF, 0x8E, 0x8D, 0x8D, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF,
    0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8C, 0x8C, 0xFF, 0x8D, 0x8D, 0x8D, 0xFF, 0x91, 0x91, 0x91, 0xFF, 0x9B, 0x9B, 0x9B, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF, 0xEA, 0xEA, 0xEA, 0xFF, 0xB5, 0xB5, 0xB5, 0xFF, 0x99, 0x96, 0x96, 0xFF, 0x9F, 0xB6, 0xB6, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF,
    0xD5, 0xFF, 0xFF, 0xFF, 0x95, 0xA3, 0xA3, 0xFF, 0x89, 0x87, 0x87, 0xFF, 0x94, 0x94, 0x94, 0xFF, 0x99, 0x99, 0x99, 0xFF, 0xA1, 0xA1, 0xA1, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x9F, 0x9F, 0x9F, 0xFF,
    0xA3, 0xA3, 0xA3, 0xFF, 0xAE, 0xAE, 0xAE, 0xFF, 0xC1, 0xC1, 0xC1, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF9, 0xF9, 0xF9, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0xA1, 0x9F, 0x9F, 0xFF, 0x9E, 0xB5, 0xB5, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0x98, 0xA8, 0xA8, 0xFF, 0x89, 0x85, 0x85, 0xFF, 0x93, 0x93, 0x93, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF,
    0xA9, 0xA9, 0xA9, 0xFF, 0xBB, 0xBB, 0xBB, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0xB6, 0xB6, 0xB6, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB7, 0xB7, 0xB7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xCB, 0xCA, 0xCA, 0xFF, 0xD0, 0xCE, 0xCE, 0xFF, 0xAD, 0xA9, 0xA9, 0xFF, 0x9E, 0xB5, 0xB5, 0xFF, 0xD2, 0xFF, 0xFF, 0xFF, 0x88, 0x97, 0x97, 0xFF, 0x6E, 0x6A, 0x6A, 0xFF, 0x7A, 0x78, 0x78, 0xFF, 0x87, 0x86, 0x86, 0xFF, 0x93, 0x91, 0x91, 0xFF, 0xD3, 0xD1, 0xD1, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF,
    0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0xD2, 0xD1, 0xD1, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0xF7, 0xF7, 0xF7, 0xFF, 0xFE, 0xFE, 0xFE, 0xFF, 0x79, 0x79, 0x79, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xCA, 0xCA, 0xFF, 0x00, 0x00, 0x00, 0xFF,
    0x14, 0x20, 0x20, 0xFF, 0x3A, 0x3F, 0x3F, 0xFF, 0x98, 0xA5, 0xA5, 0xFF, 0x9D, 0xAD, 0xAD, 0xFF, 0x43, 0x49, 0x49, 0xFF, 0x18, 0x22, 0x22, 0xFF, 0x1C, 0x26, 0x26, 0xFF, 0x1A, 0x24, 0x24, 0xFF, 0x19, 0x23, 0x23, 0xFF, 0x13, 0x1D, 0x1D, 0xFF, 0x12, 0x1D, 0x1D, 0xFF, 0x12, 0x1D, 0x1D, 0xFF, 0x12, 0x1D, 0x1D, 0xFF, 0x12, 0x1D, 0x1D, 0xFF, 0x12, 0x1D, 0x1D, 0xFF, 0x12, 0x1D, 0x1D, 0xFF,
    0x12, 0x1D, 0x1D, 0xFF, 0x17, 0x22, 0x22, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x95, 0x95, 0x95, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xE3, 0xE3, 0xE3, 0xFF, 0xFD, 0xFD, 0xFD, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x18, 0x23, 0x23, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xBC, 0xDD, 0xDD, 0xFF, 0x71, 0x68, 0x68, 0xFF, 0xA3, 0xB8, 0xB8, 0xFF,
    0xE1, 0xFF, 0xFF, 0xFF, 0xE4, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xE9, 0xFF, 0xFF, 0xFF, 0xE2, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xEA, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xE2, 0xFF, 0xFF, 0xFF, 0xE8, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xE4, 0xFF, 0xFF, 0xFF, 0xE6, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0x46, 0x5A, 0x5A, 0xFF, 0x6A, 0x68, 0x68, 0xFF,
    0xB2, 0xB2, 0xB2, 0xFF, 0xAD, 0xAD, 0xAD, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF, 0xE4, 0xFF, 0xFF, 0xFF, 0xAD, 0xC9, 0xC9, 0xFF, 0x81, 0x83, 0x83, 0xFF, 0xC0, 0xE6, 0xE6, 0xFF, 0x92, 0xB6, 0xB6, 0xFF, 0xAF, 0xD9, 0xD9, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0x77, 0x93, 0x93, 0xFF,
    0xC7, 0xF7, 0xF7, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF, 0x67, 0x80, 0x80, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xBF, 0xED, 0xED, 0xFF, 0x7F, 0x9D, 0x9D, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xA7, 0xCF, 0xCF, 0xFF, 0x97, 0xBB, 0xBB, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0x3F, 0x52, 0x52, 0xFF, 0x61, 0x5E, 0x5E, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xAB, 0xAB, 0xAB, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF, 0xE2, 0xFF, 0xFF, 0xFF, 0xBB, 0xE1, 0xE1, 0xFF, 0xB6, 0xD8, 0xD8, 0xFF, 0xDB, 0xFF, 0xFF, 0xFF, 0x75, 0x91, 0x91, 0xFF, 0xA2, 0xC9, 0xC9, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0x54, 0x68, 0x68, 0xFF, 0xC4, 0xF3, 0xF3, 0xFF, 0xDC, 0xFF, 0xFF, 0xFF, 0x3E, 0x4C, 0x4C, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF,
    0xB9, 0xE5, 0xE5, 0xFF, 0x5F, 0x76, 0x76, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0x97, 0xBB, 0xBB, 0xFF, 0x80, 0x9F, 0x9F, 0xFF, 0xE4, 0xFF, 0xFF, 0xFF, 0x40, 0x53, 0x53, 0xFF, 0x59, 0x56, 0x56, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF,
    0xE0, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xE9, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF,
    0xDD, 0xFF, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0x40, 0x53, 0x53, 0xFF, 0x5A, 0x57, 0x57, 0xFF, 0xA1, 0xA1, 0xA1, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0x8F, 0xB1, 0xB1, 0xFF, 0x75, 0x91, 0x91, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF,
    0x68, 0x82, 0x82, 0xFF, 0x9C, 0xC1, 0xC1, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0x42, 0x52, 0x52, 0xFF, 0xC3, 0xF1, 0xF1, 0xFF, 0xDE, 0xFF, 0xFF, 0xFF, 0x29, 0x32, 0x32, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xB6, 0xE1, 0xE1, 0xFF, 0x4F, 0x62, 0x62, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0x8F, 0xB1, 0xB1, 0xFF, 0x75, 0x91, 0x91, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0x40, 0x53, 0x53, 0xFF, 0x5A, 0x57, 0x57, 0xFF,
    0xA1, 0xA1, 0xA1, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF, 0xE4, 0xFF, 0xFF, 0xFF, 0xAF, 0xD9, 0xD9, 0xFF, 0xA2, 0xC9, 0xC9, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0x9C, 0xC1, 0xC1, 0xFF, 0xB5, 0xE1, 0xE1, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0x89, 0xA9, 0xA9, 0xFF,
    0xC9, 0xF9, 0xF9, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0x7C, 0x99, 0x99, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xC2, 0xF1, 0xF1, 0xFF, 0x8F, 0xB1, 0xB1, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xAF, 0xD9, 0xD9, 0xFF, 0xA2, 0xC9, 0xC9, 0xFF, 0xE2, 0xFF, 0xFF, 0xFF, 0x40, 0x53, 0x53, 0xFF, 0x5A, 0x57, 0x57, 0xFF, 0xA1, 0xA1, 0xA1, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xE9, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF,
    0xD3, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0x40, 0x53, 0x53, 0xFF, 0x5A, 0x57, 0x57, 0xFF, 0xA1, 0xA1, 0xA1, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xCB, 0xC9, 0xC9, 0xFF, 0x13, 0x1D, 0x1D, 0xFF,
    0xE9, 0xFF, 0xFF, 0xFF, 0x77, 0x93, 0x93, 0xFF, 0x54, 0x68, 0x68, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0x42, 0x52, 0x52, 0xFF, 0x88, 0xA9, 0xA9, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0x0D, 0x10, 0x10, 0xFF, 0xBE, 0xEB, 0xEB, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0xAC, 0xD5, 0xD5, 0xFF, 0x1F, 0x26, 0x26, 0xFF, 0xE5, 0xFF, 0xFF, 0xFF, 0x77, 0x93, 0x93, 0xFF,
    0x54, 0x68, 0x68, 0xFF, 0xE8, 0xFF, 0xFF, 0xFF, 0x40, 0x53, 0x53, 0xFF, 0x5A, 0x57, 0x57, 0xFF, 0xA1, 0xA1, 0xA1, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xFD, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD2, 0xD0, 0xD0, 0xFF, 0x0A, 0x16, 0x16, 0xFF, 0xEB, 0xFF, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF,
    0xCB, 0xFF, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0xC7, 0xF9, 0xF9, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0xC3, 0xF6, 0xF6, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xC8, 0xFB, 0xFB, 0xFF, 0xDA, 0xFF, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xFF, 0xE8, 0xFF, 0xFF, 0xFF, 0x3B, 0x50, 0x50, 0xFF, 0x56, 0x54, 0x54, 0xFF,
    0xA4, 0xA4, 0xA4, 0xFF, 0xAD, 0xAD, 0xAD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0x81, 0x80, 0x80, 0xFF, 0x7D, 0x7B, 0x7B, 0xFF, 0x7D, 0x7B, 0x7B, 0xFF, 0x7D, 0x7B, 0x7B, 0xFF, 0x7C, 0x79, 0x79, 0xFF, 0x7E, 0x7C, 0x7C, 0xFF, 0x7D, 0x7B, 0x7B, 0xFF, 0x7C, 0x79, 0x79, 0xFF, 0x7E, 0x7D, 0x7D, 0xFF,
    0x7C, 0x7A, 0x7A, 0xFF, 0x7C, 0x79, 0x79, 0xFF, 0x7F, 0x7D, 0x7D, 0xFF, 0x7C, 0x79, 0x79, 0xFF, 0x7C, 0x7A, 0x7A, 0xFF, 0x7E, 0x7C, 0x7C, 0xFF, 0x7C, 0x79, 0x79, 0xFF, 0x7D, 0x7B, 0x7B, 0xFF, 0x7D, 0x7B, 0x7B, 0xFF, 0x7D, 0x7A, 0x7A, 0xFF, 0x81, 0x80, 0x80, 0xFF, 0x81, 0x81, 0x81, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0x7C, 0x7C, 0x7C, 0xFF, 0x7E, 0x7E, 0x7E, 0xFF
};
const lv_img_dsc_t img_edidpress_png = {
    .header.always_zero = 0,
    .header.w = 28,
    .header.h = 28,
    .data_size = sizeof(img_edidpress_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = img_edidpress_png_data
};

