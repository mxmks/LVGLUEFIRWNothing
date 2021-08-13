#include "../lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\siopress.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t img_siopress_png_data[] = {
    0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF1, 0xF2, 0xF1, 0xFF, 0xF1, 0xF2, 0xF1, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF1, 0xF2, 0xF1, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF0, 0xF1, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF,
    0xF1, 0xF2, 0xF1, 0xFF, 0xF1, 0xF2, 0xF1, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xF0, 0xF1, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFD, 0xFD, 0xFD, 0xFF, 0x79, 0x79, 0x79, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xED, 0xF0, 0xED, 0xFF, 0xE5, 0xE8, 0xE7, 0xFF, 0xE1, 0xE2, 0xE6, 0xFF, 0xDE, 0xE1, 0xE1, 0xFF, 0xDF, 0xE1, 0xE2, 0xFF, 0xDC, 0xE3, 0xE2, 0xFF, 0xDF, 0xE0, 0xE4, 0xFF, 0xDA, 0xE0, 0xE3, 0xFF, 0xF5, 0xF6, 0xF2, 0xFF, 0xDD, 0xE1, 0xE2, 0xFF, 0xDD, 0xE1, 0xE4, 0xFF, 0xDD, 0xE1, 0xE5, 0xFF, 0xDD, 0xE3, 0xE7, 0xFF, 0xE1, 0xE4, 0xE6, 0xFF,
    0xE3, 0xE3, 0xE7, 0xFF, 0xEB, 0xEC, 0xEC, 0xFF, 0xF2, 0xF2, 0xF1, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFD, 0xFD, 0xFD, 0xFF, 0x79, 0x79, 0x79, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xEF, 0xFF, 0xE4, 0xE2, 0xE5, 0xFF, 0xB8, 0xA2, 0xCF, 0xFF, 0xA4, 0x7D, 0xC5, 0xFF,
    0xB3, 0x88, 0xCA, 0xFF, 0xB2, 0x8D, 0xCC, 0xFF, 0xB0, 0x8D, 0xCB, 0xFF, 0xB1, 0x8F, 0xCD, 0xFF, 0xB5, 0x8D, 0xCE, 0xFF, 0xB2, 0x8E, 0xD0, 0xFF, 0xA1, 0x7F, 0xBE, 0xFF, 0xB1, 0x90, 0xCD, 0xFF, 0xB0, 0x8E, 0xCA, 0xFF, 0xB3, 0x8B, 0xCB, 0xFF, 0xB1, 0x8C, 0xCB, 0xFF, 0xAF, 0x8C, 0xCD, 0xFF, 0xA9, 0x86, 0xCA, 0xFF, 0xAA, 0x90, 0xC6, 0xFF, 0xDA, 0xD2, 0xDF, 0xFF, 0xC1, 0xC1, 0xBF, 0xFF,
    0xE1, 0xE1, 0xE0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xFE, 0xFE, 0xFE, 0xFF, 0x7A, 0x7A, 0x7A, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xE6, 0xE8, 0xEA, 0xFF, 0xD6, 0xDC, 0xDF, 0xFF, 0xD4, 0xC9, 0xE2, 0xFF, 0x94, 0x5B, 0xC6, 0xFF, 0x7A, 0x2E, 0xB9, 0xFF, 0x81, 0x35, 0xBD, 0xFF, 0x88, 0x39, 0xCA, 0xFF, 0x81, 0x38, 0xBF, 0xFF, 0x7C, 0x31, 0xB7, 0xFF,
    0x80, 0x35, 0xC0, 0xFF, 0x83, 0x36, 0xC1, 0xFF, 0x88, 0x39, 0xC4, 0xFF, 0x7A, 0x32, 0xB7, 0xFF, 0x7F, 0x33, 0xBA, 0xFF, 0x86, 0x38, 0xC8, 0xFF, 0x83, 0x38, 0xC3, 0xFF, 0x7D, 0x33, 0xB8, 0xFF, 0x7F, 0x32, 0xBC, 0xFF, 0x93, 0x51, 0xC3, 0xFF, 0xC9, 0xB9, 0xD7, 0xFF, 0xD3, 0xD5, 0xD7, 0xFF, 0xB4, 0xB4, 0xB5, 0xFF, 0xAC, 0xAC, 0xAC, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xEC, 0xED, 0xEE, 0xFF, 0xB2, 0xB8, 0xC4, 0xFF, 0x94, 0x9C, 0xA1, 0xFF, 0xBD, 0xB2, 0xD1, 0xFF, 0x85, 0x55, 0xB7, 0xFF, 0x60, 0x29, 0x94, 0xFF, 0x6C, 0x34, 0x9D, 0xFF, 0x7C, 0x3B, 0xB9, 0xFF, 0x6D, 0x36, 0xA6, 0xFF, 0x66, 0x2D, 0x95, 0xFF, 0x6F, 0x33, 0xA2, 0xFF, 0x73, 0x39, 0xA7, 0xFF, 0x7A, 0x35, 0xB6, 0xFF, 0x67, 0x30, 0x96, 0xFF,
    0x69, 0x2F, 0x9C, 0xFF, 0x7C, 0x38, 0xB6, 0xFF, 0x75, 0x37, 0xAD, 0xFF, 0x66, 0x31, 0x93, 0xFF, 0x69, 0x34, 0x9C, 0xFF, 0x82, 0x4F, 0xB4, 0xFF, 0xB6, 0xAB, 0xC8, 0xFF, 0xC8, 0xD1, 0xD3, 0xFF, 0xB1, 0xBB, 0xC6, 0xFF, 0xB2, 0xB3, 0xB6, 0xFF, 0xBA, 0xBA, 0xBA, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF0, 0xFF, 0xEA, 0xEB, 0xEC, 0xFF, 0xA1, 0xA5, 0xB1, 0xFF,
    0x83, 0x88, 0x8D, 0xFF, 0xBE, 0xB3, 0xCC, 0xFF, 0xA2, 0x66, 0xD1, 0xFF, 0x92, 0x3F, 0xD7, 0xFF, 0x90, 0x42, 0xD4, 0xFF, 0x90, 0x40, 0xD3, 0xFF, 0x92, 0x41, 0xD4, 0xFF, 0x94, 0x44, 0xD5, 0xFF, 0x92, 0x42, 0xCF, 0xFF, 0x90, 0x44, 0xD1, 0xFF, 0x93, 0x42, 0xD1, 0xFF, 0x94, 0x46, 0xD7, 0xFF, 0x93, 0x46, 0xD1, 0xFF, 0x94, 0x43, 0xD0, 0xFF, 0x96, 0x45, 0xD1, 0xFF, 0x95, 0x43, 0xD6, 0xFF,
    0x8F, 0x3D, 0xD7, 0xFF, 0xA0, 0x60, 0xD4, 0xFF, 0xBB, 0xAA, 0xCC, 0xFF, 0xB6, 0xBD, 0xC0, 0xFF, 0x89, 0x94, 0x9F, 0xFF, 0xD3, 0xD8, 0xE2, 0xFF, 0xB6, 0xB6, 0xB6, 0xFF, 0x7C, 0x7C, 0x7C, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xEB, 0xEC, 0xED, 0xFF, 0xBE, 0xC0, 0xCA, 0xFF, 0xB1, 0xB2, 0xB8, 0xFF, 0xBA, 0xB2, 0xC1, 0xFF, 0x8E, 0x64, 0xB2, 0xFF, 0x7A, 0x3D, 0xAF, 0xFF,
    0x76, 0x40, 0xA9, 0xFF, 0x70, 0x3A, 0x9B, 0xFF, 0x76, 0x3D, 0xA5, 0xFF, 0x7E, 0x42, 0xB4, 0xFF, 0x76, 0x3D, 0xA0, 0xFF, 0x75, 0x3D, 0xA6, 0xFF, 0x6D, 0x3B, 0x9B, 0xFF, 0x7E, 0x43, 0xB1, 0xFF, 0x78, 0x41, 0xA7, 0xFF, 0x6D, 0x3A, 0x9B, 0xFF, 0x73, 0x3C, 0xA3, 0xFF, 0x7D, 0x43, 0xAF, 0xFF, 0x76, 0x3A, 0xA8, 0xFF, 0x8C, 0x5E, 0xB0, 0xFF, 0xC4, 0xB6, 0xCD, 0xFF, 0xD5, 0xD7, 0xDB, 0xFF,
    0xC8, 0xCD, 0xD8, 0xFF, 0xCB, 0xCE, 0xD9, 0xFF, 0xA1, 0xA2, 0xA2, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xEF, 0xEF, 0xEF, 0xFF, 0xDA, 0xD8, 0xDC, 0xFF, 0xB6, 0xB4, 0xB9, 0xFF, 0x98, 0x9A, 0x98, 0xFF, 0x8D, 0x9D, 0x95, 0xFF, 0x90, 0xA2, 0x95, 0xFF, 0x91, 0xA2, 0x96, 0xFF, 0x91, 0xA2, 0x97, 0xFF, 0x91, 0xA2, 0x96, 0xFF, 0x90, 0xA2, 0x95, 0xFF,
    0x91, 0xA2, 0x96, 0xFF, 0x91, 0xA2, 0x96, 0xFF, 0x92, 0xA2, 0x97, 0xFF, 0x90, 0xA2, 0x95, 0xFF, 0x91, 0xA2, 0x96, 0xFF, 0x92, 0xA2, 0x97, 0xFF, 0x91, 0xA2, 0x96, 0xFF, 0x90, 0xA2, 0x95, 0xFF, 0x91, 0xA2, 0x96, 0xFF, 0x8B, 0x9C, 0x92, 0xFF, 0xB1, 0xB3, 0xB2, 0xFF, 0xCF, 0xCE, 0xD2, 0xFF, 0xC2, 0xC5, 0xCC, 0xFF, 0xD8, 0xD7, 0xE1, 0xFF, 0x95, 0x95, 0x95, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF0, 0xF0, 0xFF, 0xE6, 0xE0, 0xE2, 0xFF, 0xA9, 0xAB, 0xAD, 0xFF, 0xA7, 0xC4, 0xC4, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF,
    0xD5, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xA5, 0xC2, 0xC2, 0xFF, 0xA5, 0xA7, 0xA9, 0xFF, 0xC0, 0xC1, 0xC2, 0xFF, 0xE0, 0xDE, 0xE5, 0xFF, 0xB2, 0xB0, 0xB2, 0xFF, 0x7C, 0x7C, 0x7C, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xEF, 0xF0, 0xEF, 0xFF, 0xF5, 0xF4, 0xF4, 0xFF, 0xD7, 0xD3, 0xD4, 0xFF,
    0x89, 0x99, 0x98, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xC5, 0xE5, 0xE5, 0xFF, 0xB4, 0xAF, 0xAF, 0xFF, 0xB0, 0xA0, 0xA0, 0xFF, 0xB8, 0xBB, 0xBB, 0xFF, 0xCC, 0xFC, 0xFC, 0xFF, 0xD0, 0xFF, 0xFF, 0xFF, 0xB5, 0xB0, 0xB0, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xC7, 0xED, 0xED, 0xFF, 0xAF, 0x9C, 0x9C, 0xFF, 0xB0, 0xA0, 0xA0, 0xFF, 0xBB, 0xC4, 0xC4, 0xFF,
    0xCE, 0xFF, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF, 0x8B, 0x9A, 0x9A, 0xFF, 0xCE, 0xCE, 0xCA, 0xFF, 0xD5, 0xD1, 0xDD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF1, 0xF3, 0xFF, 0xC7, 0xC3, 0xD2, 0xFF, 0x8E, 0x9C, 0x9A, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xCB, 0xF8, 0xF8, 0xFF, 0xA9, 0x89, 0x89, 0xFF,
    0x91, 0x3E, 0x3E, 0xFF, 0x94, 0x45, 0x45, 0xFF, 0x8E, 0x30, 0x30, 0xFF, 0xBB, 0xC2, 0xC2, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0x7B, 0x00, 0x00, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xC6, 0xEC, 0xEC, 0xFF, 0x9E, 0x68, 0x68, 0xFF, 0x92, 0x40, 0x40, 0xFF, 0x93, 0x42, 0x42, 0xFF, 0x98, 0x53, 0x53, 0xFF, 0xB6, 0xB4, 0xB4, 0xFF, 0xCD, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0x8F, 0x9D, 0x9C, 0xFF,
    0xC2, 0xBD, 0xC3, 0xFF, 0xBC, 0xA8, 0xD4, 0xFF, 0xFC, 0xF9, 0xFC, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF2, 0xF0, 0xFF, 0xE9, 0xE2, 0xEF, 0xFF, 0x9D, 0x75, 0xBE, 0xFF, 0x91, 0xA3, 0x9C, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xC4, 0xE1, 0xE1, 0xFF, 0x9C, 0x5F, 0x5F, 0xFF, 0xBA, 0xC2, 0xC2, 0xFF, 0xDD, 0xFF, 0xFF, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB7, 0xB8, 0xB8, 0xFF,
    0xD4, 0xFF, 0xFF, 0xFF, 0x81, 0x07, 0x07, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xAD, 0x9A, 0x9A, 0xFF, 0x94, 0x45, 0x45, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xB7, 0xB6, 0xB6, 0xFF, 0x99, 0x57, 0x57, 0xFF, 0xC3, 0xE0, 0xE0, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0x93, 0xA5, 0x9E, 0xFF, 0x95, 0x6E, 0xB2, 0xFF, 0x8D, 0x56, 0xC1, 0xFF, 0xFA, 0xF3, 0xFD, 0xFF, 0x7C, 0x7C, 0x7B, 0xFF,
    0xF0, 0xF0, 0xF0, 0xFF, 0xF1, 0xF3, 0xF0, 0xFF, 0xE7, 0xDC, 0xF0, 0xFF, 0x94, 0x57, 0xBF, 0xFF, 0x92, 0xA6, 0x9C, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xCB, 0xFC, 0xFC, 0xFF, 0xAD, 0x96, 0x96, 0xFF, 0x9F, 0x69, 0x69, 0xFF, 0xA6, 0x80, 0x80, 0xFF, 0xAD, 0x95, 0x95, 0xFF, 0xCD, 0xFF, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0x81, 0x07, 0x07, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xA0, 0x6C, 0x6C, 0xFF,
    0xBA, 0xC2, 0xC2, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xC6, 0xE5, 0xE5, 0xFF, 0xA9, 0x8A, 0x8A, 0xFF, 0xB9, 0xBE, 0xBE, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0x95, 0xA9, 0x9D, 0xFF, 0x8A, 0x49, 0xBB, 0xFF, 0x85, 0x3C, 0xC2, 0xFF, 0xF9, 0xF4, 0xFC, 0xFF, 0x7C, 0x7C, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF0, 0xF1, 0xF0, 0xFF, 0xEF, 0xEC, 0xF3, 0xFF, 0xC0, 0xA9, 0xCF, 0xFF,
    0x8E, 0x9E, 0x9A, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xCC, 0xFC, 0xFC, 0xFF, 0xAD, 0x95, 0x95, 0xFF, 0x9E, 0x67, 0x67, 0xFF, 0x92, 0x40, 0x40, 0xFF, 0xB2, 0xA8, 0xA8, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0x81, 0x08, 0x08, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xA0, 0x6D, 0x6D, 0xFF, 0xBA, 0xC0, 0xC0, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xC5, 0xE5, 0xE5, 0xFF,
    0xA9, 0x89, 0x89, 0xFF, 0xB9, 0xBE, 0xBE, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0x99, 0xAB, 0xA2, 0xFF, 0x65, 0x3F, 0x88, 0xFF, 0x52, 0x24, 0x81, 0xFF, 0xF1, 0xEE, 0xF5, 0xFF, 0x7C, 0x7D, 0x7B, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xEF, 0xEF, 0xEF, 0xFF, 0xF5, 0xF6, 0xF5, 0xFF, 0xDF, 0xDB, 0xDC, 0xFF, 0x8B, 0x9A, 0x99, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xC2, 0xDD, 0xDD, 0xFF, 0xB1, 0xA3, 0xA3, 0xFF,
    0xC9, 0xF1, 0xF1, 0xFF, 0xDC, 0xFF, 0xFF, 0xFF, 0xB2, 0xAA, 0xAA, 0xFF, 0x9D, 0x61, 0x61, 0xFF, 0xD2, 0xFF, 0xFF, 0xFF, 0x81, 0x09, 0x09, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xAB, 0x94, 0x94, 0xFF, 0x99, 0x54, 0x54, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xB9, 0xBC, 0xBC, 0xFF, 0x9B, 0x5D, 0x5D, 0xFF, 0xC2, 0xDC, 0xDC, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0x9C, 0xAC, 0xA6, 0xFF,
    0x47, 0x31, 0x62, 0xFF, 0x31, 0x10, 0x5C, 0xFF, 0xED, 0xE8, 0xF6, 0xFF, 0x7D, 0x7E, 0x7C, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF8, 0xF6, 0xF7, 0xFF, 0xDF, 0xD9, 0xDE, 0xFF, 0x8B, 0x9A, 0x99, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xC6, 0xE8, 0xE8, 0xFF, 0xA2, 0x72, 0x72, 0xFF, 0x95, 0x4A, 0x4A, 0xFF, 0x9C, 0x60, 0x60, 0xFF, 0x90, 0x39, 0x39, 0xFF, 0xB4, 0xAD, 0xAD, 0xFF,
    0xD4, 0xFF, 0xFF, 0xFF, 0x7C, 0x00, 0x00, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0xC5, 0xE6, 0xE6, 0xFF, 0x9A, 0x5A, 0x5A, 0xFF, 0x9B, 0x5B, 0x5B, 0xFF, 0x9B, 0x5B, 0x5B, 0xFF, 0x9A, 0x5A, 0x5A, 0xFF, 0xB2, 0xA6, 0xA6, 0xFF, 0xCC, 0xFF, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xFF, 0x9C, 0xAC, 0xA7, 0xFF, 0x47, 0x32, 0x60, 0xFF, 0x3B, 0x15, 0x67, 0xFF, 0xF1, 0xE9, 0xF9, 0xFF, 0x7D, 0x7E, 0x7D, 0xFF,
    0xE2, 0xE0, 0xE5, 0xFF, 0xDF, 0xDE, 0xE2, 0xFF, 0xDC, 0xE2, 0xE2, 0xFF, 0xBF, 0xBE, 0xC2, 0xFF, 0x8A, 0x9A, 0x99, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xC3, 0xDF, 0xDF, 0xFF, 0xAE, 0x9A, 0x9A, 0xFF, 0xA9, 0x88, 0x88, 0xFF, 0xAD, 0x97, 0x97, 0xFF, 0xCB, 0xF9, 0xF9, 0xFF, 0xD1, 0xFF, 0xFF, 0xFF, 0xAE, 0x9B, 0x9B, 0xFF, 0xD0, 0xFF, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF,
    0xC5, 0xE7, 0xE7, 0xFF, 0xA7, 0x83, 0x83, 0xFF, 0xA8, 0x87, 0x87, 0xFF, 0xB6, 0xB4, 0xB4, 0xFF, 0xCE, 0xFF, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xFF, 0x97, 0xA8, 0xA3, 0xFF, 0x4C, 0x3B, 0x62, 0xFF, 0x45, 0x24, 0x74, 0xFF, 0xEE, 0xEA, 0xF9, 0xFF, 0x7D, 0x7D, 0x7C, 0xFF, 0xE5, 0xE4, 0xE6, 0xFF, 0xE6, 0xE5, 0xE8, 0xFF, 0xE3, 0xE7, 0xE6, 0xFF, 0xD8, 0xD7, 0xDA, 0xFF,
    0xB3, 0xB4, 0xB6, 0xFF, 0xAD, 0xCD, 0xCC, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF,
    0xD3, 0xFF, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xFF, 0xAB, 0xCB, 0xCA, 0xFF, 0xB7, 0xBC, 0xBB, 0xFF, 0xC0, 0xC1, 0xCB, 0xFF, 0xB8, 0xB0, 0xC6, 0xFF, 0xE8, 0xE7, 0xF1, 0xFF, 0x7C, 0x7C, 0x7A, 0xFF, 0xE9, 0xEB, 0xEA, 0xFF, 0xBE, 0xC1, 0xB8, 0xFF, 0xAC, 0xAF, 0xA3, 0xFF, 0xED, 0xEB, 0xEB, 0xFF, 0xCC, 0xC9, 0xCF, 0xFF, 0x84, 0x8B, 0x8E, 0xFF, 0x96, 0xA6, 0xA4, 0xFF, 0x8F, 0x9E, 0x9E, 0xFF,
    0x94, 0xA5, 0xA5, 0xFF, 0x98, 0xA9, 0xAA, 0xFF, 0x97, 0xA8, 0xA8, 0xFF, 0x90, 0x9F, 0x9F, 0xFF, 0x93, 0xA2, 0xA1, 0xFF, 0x98, 0xA8, 0xA4, 0xFF, 0x95, 0xAA, 0x9F, 0xFF, 0x94, 0xA4, 0xA1, 0xFF, 0x91, 0xA0, 0x9F, 0xFF, 0x90, 0x9F, 0x9E, 0xFF, 0x92, 0xA2, 0xA4, 0xFF, 0x97, 0xA7, 0xAE, 0xFF, 0x97, 0xA8, 0xAF, 0xFF, 0x97, 0xA9, 0xAF, 0xFF, 0x9B, 0x9F, 0xAC, 0xFF, 0xB6, 0xB8, 0xCA, 0xFF,
    0xBD, 0xC3, 0xD3, 0xFF, 0xDB, 0xDE, 0xE6, 0xFF, 0xDE, 0xDD, 0xE4, 0xFF, 0x7B, 0x7B, 0x7B, 0xFF, 0xD3, 0xD3, 0xD5, 0xFF, 0x70, 0x7C, 0x56, 0xFF, 0x5C, 0x67, 0x47, 0xFF, 0xAD, 0xB0, 0xA3, 0xFF, 0xD4, 0xD3, 0xD9, 0xFF, 0x68, 0x68, 0x7D, 0xFF, 0x87, 0x83, 0x94, 0xFF, 0xC4, 0xC6, 0xC3, 0xFF, 0x88, 0x7C, 0x75, 0xFF, 0x63, 0x49, 0x42, 0xFF, 0x6F, 0x5C, 0x55, 0xFF, 0xC0, 0xBE, 0xBB, 0xFF,
    0x9A, 0x99, 0x9F, 0xFF, 0x69, 0x5C, 0x80, 0xFF, 0x8B, 0x4D, 0xBA, 0xFF, 0x8F, 0x82, 0xA0, 0xFF, 0xAD, 0xAE, 0xB1, 0xFF, 0xB7, 0xB5, 0xBE, 0xFF, 0xA5, 0x9E, 0x8F, 0xFF, 0x6E, 0x61, 0x26, 0xFF, 0x71, 0x66, 0x28, 0xFF, 0x72, 0x65, 0x26, 0xFF, 0x7B, 0x6F, 0x39, 0xFF, 0x74, 0x6E, 0x41, 0xFF, 0x68, 0x64, 0x3F, 0xFF, 0xA0, 0xA5, 0xAB, 0xFF, 0xD7, 0xD7, 0xE2, 0xFF, 0x7C, 0x7C, 0x7C, 0xFF,
    0xA2, 0xA7, 0x96, 0xFF, 0xAF, 0xC4, 0x87, 0xFF, 0x8E, 0x9F, 0x6C, 0xFF, 0x9D, 0xA9, 0x82, 0xFF, 0xC8, 0xC8, 0xCD, 0xFF, 0x62, 0x61, 0x7B, 0xFF, 0x8F, 0x8A, 0xA5, 0xFF, 0xCA, 0xC8, 0xC3, 0xFF, 0xB6, 0x9D, 0x8B, 0xFF, 0xB2, 0x8C, 0x74, 0xFF, 0x9B, 0x76, 0x60, 0xFF, 0xD5, 0xCD, 0xC8, 0xFF, 0xA9, 0xAB, 0xB4, 0xFF, 0x69, 0x5C, 0x8E, 0xFF, 0x4B, 0x1E, 0x78, 0xFF, 0x9C, 0x8B, 0xB4, 0xFF,
    0xC4, 0xC7, 0xCC, 0xFF, 0xCE, 0xD1, 0xDB, 0xFF, 0xA0, 0x9C, 0x75, 0xFF, 0x71, 0x63, 0x00, 0xFF, 0x79, 0x6A, 0x00, 0xFF, 0x7C, 0x6B, 0x00, 0xFF, 0x7A, 0x67, 0x01, 0xFF, 0x70, 0x60, 0x04, 0xFF, 0x67, 0x58, 0x00, 0xFF, 0x8D, 0x90, 0x84, 0xFF, 0xCC, 0xCD, 0xDA, 0xFF, 0x7D, 0x7C, 0x7C, 0xFF, 0x98, 0xA4, 0x85, 0xFF, 0xA4, 0xB4, 0x7F, 0xFF, 0x7D, 0x8A, 0x5D, 0xFF, 0x9D, 0xAD, 0x7F, 0xFF,
    0xAD, 0xB0, 0xAF, 0xFF, 0x6D, 0x6B, 0x86, 0xFF, 0x8E, 0x8B, 0xA4, 0xFF, 0xC9, 0xBD, 0xB6, 0xFF, 0xB3, 0x93, 0x7C, 0xFF, 0x9D, 0x7C, 0x67, 0xFF, 0xA5, 0x7E, 0x64, 0xFF, 0xB5, 0xA8, 0xA1, 0xFF, 0xA1, 0xA3, 0xAA, 0xFF, 0x61, 0x57, 0x80, 0xFF, 0x29, 0x16, 0x44, 0xFF, 0x96, 0x84, 0xB2, 0xFF, 0xA3, 0xAD, 0xBB, 0xFF, 0xB0, 0xB6, 0xC0, 0xFF, 0x7F, 0x7C, 0x5E, 0xFF, 0x63, 0x5D, 0x22, 0xFF,
    0x75, 0x70, 0x29, 0xFF, 0x77, 0x79, 0x3A, 0xFF, 0x77, 0x7A, 0x3A, 0xFF, 0x72, 0x6E, 0x2A, 0xFF, 0x6F, 0x64, 0x1F, 0xFF, 0x5A, 0x5F, 0x5D, 0xFF, 0xB7, 0xBC, 0xCB, 0xFF, 0x7D, 0x7E, 0x7E, 0xFF, 0x96, 0xA5, 0x81, 0xFF, 0xBD, 0xCC, 0x97, 0xFF, 0x82, 0x8F, 0x60, 0xFF, 0xBD, 0xCF, 0x9E, 0xFF, 0xA1, 0xA6, 0x9F, 0xFF, 0x74, 0x70, 0x8A, 0xFF, 0x90, 0x8D, 0xA7, 0xFF, 0xCB, 0xBD, 0xB3, 0xFF,
    0xC4, 0xA2, 0x88, 0xFF, 0xA4, 0x84, 0x6B, 0xFF, 0xCE, 0xA5, 0x86, 0xFF, 0xAE, 0x9F, 0x9A, 0xFF, 0x9C, 0x9E, 0xA4, 0xFF, 0x50, 0x44, 0x6E, 0xFF, 0x76, 0x36, 0xB0, 0xFF, 0x9C, 0x89, 0xB6, 0xFF, 0x6D, 0x7A, 0x87, 0xFF, 0x84, 0x89, 0x91, 0xFF, 0x6D, 0x66, 0x47, 0xFF, 0x6B, 0x60, 0x0A, 0xFF, 0x85, 0x7A, 0x10, 0xFF, 0x81, 0x78, 0x15, 0xFF, 0x81, 0x78, 0x12, 0xFF, 0x83, 0x73, 0x0F, 0xFF,
    0x7B, 0x6E, 0x07, 0xFF, 0x48, 0x50, 0x4D, 0xFF, 0xBD, 0xC5, 0xD5, 0xFF, 0x7E, 0x7E, 0x7D, 0xFF, 0x8B, 0x9C, 0x74, 0xFF, 0xB5, 0xC7, 0x8C, 0xFF, 0xC0, 0xCF, 0x98, 0xFF, 0xA0, 0xB4, 0x83, 0xFF, 0xA3, 0xA9, 0xA0, 0xFF, 0x73, 0x6E, 0x8A, 0xFF, 0x91, 0x87, 0xA6, 0xFF, 0xC8, 0xB8, 0xAF, 0xFF, 0xB6, 0x92, 0x75, 0xFF, 0xDD, 0xB4, 0x96, 0xFF, 0xCB, 0x9F, 0x7E, 0xFF, 0xAA, 0x98, 0x95, 0xFF,
    0x9D, 0xA0, 0xA7, 0xFF, 0x52, 0x45, 0x6C, 0xFF, 0x94, 0x39, 0xDA, 0xFF, 0x93, 0x7E, 0xAA, 0xFF, 0x60, 0x6A, 0x77, 0xFF, 0x91, 0x93, 0xA2, 0xFF, 0x76, 0x6E, 0x52, 0xFF, 0x77, 0x64, 0x00, 0xFF, 0x96, 0x85, 0x05, 0xFF, 0x94, 0x85, 0x05, 0xFF, 0x95, 0x82, 0x06, 0xFF, 0x91, 0x83, 0x06, 0xFF, 0x91, 0x7F, 0x00, 0xFF, 0x61, 0x67, 0x5D, 0xFF, 0xAB, 0xB2, 0xC4, 0xFF, 0x7F, 0x7E, 0x7D, 0xFF,
    0x85, 0x95, 0x70, 0xFF, 0xC7, 0xD6, 0xA2, 0xFF, 0xC3, 0xD1, 0x9F, 0xFF, 0xA3, 0xB5, 0x86, 0xFF, 0xA6, 0xAB, 0xA8, 0xFF, 0x69, 0x5F, 0x85, 0xFF, 0x95, 0x86, 0xAC, 0xFF, 0xC1, 0xB2, 0xAB, 0xFF, 0xB5, 0x95, 0x7B, 0xFF, 0xE0, 0xBB, 0x9B, 0xFF, 0xC1, 0x98, 0x7B, 0xFF, 0xB3, 0xA5, 0x9F, 0xFF, 0x9F, 0xA0, 0xAA, 0xFF, 0x4D, 0x38, 0x70, 0xFF, 0x7E, 0x45, 0xB4, 0xFF, 0x87, 0x75, 0x9E, 0xFF,
    0x8E, 0x98, 0xA3, 0xFF, 0x8E, 0x8F, 0x9F, 0xFF, 0x7F, 0x78, 0x59, 0xFF, 0x69, 0x65, 0x18, 0xFF, 0x7F, 0x84, 0x4C, 0xFF, 0x7F, 0x7C, 0x34, 0xFF, 0x76, 0x73, 0x30, 0xFF, 0x78, 0x77, 0x4E, 0xFF, 0x8A, 0x79, 0x05, 0xFF, 0x8C, 0x8F, 0x82, 0xFF, 0xB4, 0xB5, 0xC8, 0xFF, 0x7E, 0x7D, 0x7D, 0xFF, 0x84, 0x8D, 0x77, 0xFF, 0xA2, 0xB3, 0x7D, 0xFF, 0xA3, 0xB4, 0x7F, 0xFF, 0x88, 0x97, 0x6D, 0xFF,
    0xC9, 0xCA, 0xD1, 0xFF, 0x65, 0x57, 0x83, 0xFF, 0x96, 0x86, 0xAB, 0xFF, 0xC1, 0xB9, 0xB4, 0xFF, 0x9D, 0x80, 0x6D, 0xFF, 0xC8, 0x9C, 0x7B, 0xFF, 0x8F, 0x6A, 0x54, 0xFF, 0xD2, 0xCB, 0xC5, 0xFF, 0xA1, 0xA6, 0xAD, 0xFF, 0x46, 0x26, 0x6D, 0xFF, 0xA2, 0x86, 0xBE, 0xFF, 0x86, 0x75, 0xA0, 0xFF, 0x82, 0x8A, 0x8B, 0xFF, 0x75, 0x76, 0x80, 0xFF, 0x9F, 0x9B, 0x73, 0xFF, 0x84, 0x74, 0x00, 0xFF,
    0x8C, 0x78, 0x01, 0xFF, 0x8D, 0x77, 0x01, 0xFF, 0x8C, 0x77, 0x02, 0xFF, 0x86, 0x74, 0x00, 0xFF, 0x8D, 0x75, 0x00, 0xFF, 0xBB, 0xBE, 0xB5, 0xFF, 0xA1, 0xA5, 0xB6, 0xFF, 0x7D, 0x7D, 0x7C, 0xFF, 0xD6, 0xD7, 0xD1, 0xFF, 0x49, 0x57, 0x2D, 0xFF, 0x70, 0x81, 0x54, 0xFF, 0x9B, 0xA1, 0x8D, 0xFF, 0xD4, 0xD2, 0xD7, 0xFF, 0x63, 0x56, 0x81, 0xFF, 0x8B, 0x82, 0xA8, 0xFF, 0xE8, 0xEB, 0xE7, 0xFF,
    0x88, 0x7A, 0x6F, 0xFF, 0x6B, 0x4F, 0x3B, 0xFF, 0x81, 0x71, 0x67, 0xFF, 0xDC, 0xD7, 0xD5, 0xFF, 0xA3, 0xA3, 0xAB, 0xFF, 0x4D, 0x25, 0x71, 0xFF, 0xA4, 0x76, 0xCA, 0xFF, 0x92, 0x7E, 0xAB, 0xFF, 0xA0, 0xA1, 0xA4, 0xFF, 0xAD, 0xA9, 0xBD, 0xFF, 0xB3, 0xB3, 0xA9, 0xFF, 0x8F, 0x80, 0x25, 0xFF, 0x92, 0x7F, 0x0C, 0xFF, 0x92, 0x80, 0x11, 0xFF, 0x93, 0x82, 0x12, 0xFF, 0x90, 0x7D, 0x0D, 0xFF,
    0x93, 0x83, 0x26, 0xFF, 0xAC, 0xB3, 0xB0, 0xFF, 0xBF, 0xC0, 0xCD, 0xFF, 0x7D, 0x7D, 0x7D, 0xFF, 0xE5, 0xE5, 0xE8, 0xFF, 0xCF, 0xCF, 0xCB, 0xFF, 0x9E, 0xA2, 0x96, 0xFF, 0xF0, 0xF0, 0xED, 0xFF, 0xC9, 0xC9, 0xCD, 0xFF, 0x64, 0x57, 0x7B, 0xFF, 0x8F, 0x81, 0xA2, 0xFF, 0xF0, 0xEC, 0xEB, 0xFF, 0xE1, 0xDC, 0xDF, 0xFF, 0xAD, 0xA6, 0xAA, 0xFF, 0xD8, 0xD0, 0xD4, 0xFF, 0xE7, 0xE6, 0xE3, 0xFF,
    0xA2, 0xA3, 0xA9, 0xFF, 0x4C, 0x2B, 0x6D, 0xFF, 0x6B, 0x42, 0x8A, 0xFF, 0x9C, 0x86, 0xAF, 0xFF, 0xCC, 0xCC, 0xD0, 0xFF, 0xCD, 0xCE, 0xD6, 0xFF, 0xC4, 0xC8, 0xD2, 0xFF, 0x99, 0xA0, 0xB3, 0xFF, 0x90, 0x97, 0xAA, 0xFF, 0x85, 0x8C, 0x9A, 0xFF, 0x88, 0x90, 0x9D, 0xFF, 0x93, 0x9A, 0xA8, 0xFF, 0x8D, 0x95, 0xA5, 0xFF, 0xB7, 0xBC, 0xCA, 0xFF, 0xD9, 0xDA, 0xE3, 0xFF, 0x7C, 0x7C, 0x7C, 0xFF
};
const lv_img_dsc_t img_siopress_png = {
    .header.always_zero = 0,
    .header.w = 28,
    .header.h = 28,
    .data_size = sizeof(img_siopress_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = img_siopress_png_data
};
