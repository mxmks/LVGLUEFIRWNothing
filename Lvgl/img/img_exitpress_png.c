#include "../lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\exitpress.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t img_exitpress_png_data[] = {
    0xDE, 0xBB, 0x90, 0xFF, 0xDC, 0xBB, 0x91, 0xFF, 0xDB, 0xBB, 0x92, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xDC, 0xBC, 0x93, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE1, 0xC1, 0x98, 0xFF,
    0xE0, 0xC0, 0x97, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE4, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xDF, 0xBD, 0x91, 0xFF, 0xDE, 0xBD, 0x93, 0xFF, 0xDC, 0xBD, 0x94, 0xFF, 0xDD, 0xBD, 0x94, 0xFF,
    0xDC, 0xBC, 0x93, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF,
    0xE2, 0xC2, 0x99, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE4, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xDF, 0xBD, 0x91, 0xFF, 0xDE, 0xBD, 0x92, 0xFF, 0xDC, 0xBD, 0x94, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xE0, 0xC0, 0x97, 0xFF,
    0xE0, 0xC0, 0x97, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF,
    0xE4, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xDF, 0xBE, 0x92, 0xFF, 0xDF, 0xBE, 0x93, 0xFF, 0xDD, 0xBE, 0x95, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC1, 0x98, 0xFF,
    0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE4, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF,
    0xE0, 0xBD, 0x92, 0xFF, 0xDE, 0xBD, 0x94, 0xFF, 0xDD, 0xBD, 0x95, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF,
    0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE4, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xDF, 0xBE, 0x94, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDF, 0xBF, 0x96, 0xFF,
    0xDE, 0xBE, 0x95, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE0, 0xC0, 0x96, 0xFF, 0xE2, 0xC2, 0x98, 0xFF, 0xE2, 0xC3, 0x98, 0xFF, 0xE3, 0xC3, 0x99, 0xFF, 0xE3, 0xC4, 0x99, 0xFF, 0xE3, 0xC3, 0x99, 0xFF, 0xE3, 0xC3, 0x99, 0xFF, 0xE2, 0xC2, 0x98, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF,
    0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE4, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xE0, 0xBF, 0x95, 0xFF, 0xDE, 0xBF, 0x96, 0xFF, 0xDE, 0xBE, 0x95, 0xFF, 0xDF, 0xC0, 0x96, 0xFF, 0xE1, 0xC2, 0x98, 0xFF, 0xE0, 0xC1, 0x97, 0xFF, 0xD8, 0xBA, 0x99, 0xFF,
    0xD4, 0xB1, 0x93, 0xFF, 0xD5, 0xAE, 0x8F, 0xFF, 0xD1, 0xAA, 0x8B, 0xFF, 0xD0, 0xAA, 0x8C, 0xFF, 0xD6, 0xB6, 0x99, 0xFF, 0xE7, 0xC3, 0x98, 0xFF, 0xEA, 0xC4, 0x98, 0xFF, 0xE9, 0xC4, 0x98, 0xFF, 0xE7, 0xC3, 0x98, 0xFF, 0xE3, 0xC2, 0x97, 0xFF, 0xE3, 0xC2, 0x98, 0xFF, 0xE4, 0xC3, 0x99, 0xFF, 0xE3, 0xC3, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF,
    0xE3, 0xC3, 0x9B, 0xFF, 0xE2, 0xC3, 0x9C, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE3, 0xC4, 0x9D, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xDF, 0xBE, 0x94, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xDF, 0xC0, 0x96, 0xFF, 0xDD, 0xBC, 0x95, 0xFF, 0xD6, 0xB2, 0x8F, 0xFF, 0xD4, 0xAF, 0x8F, 0xFF, 0xC3, 0x9F, 0x8F, 0xFF, 0xBB, 0x8E, 0x84, 0xFF, 0xC1, 0x8F, 0x82, 0xFF, 0xC4, 0x96, 0x8A, 0xFF, 0xC2, 0x9A, 0x91, 0xFF,
    0xBB, 0x96, 0x8E, 0xFF, 0xAA, 0xB1, 0x9F, 0xFF, 0xAA, 0xB6, 0xA3, 0xFF, 0xAC, 0xB7, 0xA4, 0xFF, 0xC7, 0xC3, 0xAA, 0xFF, 0xED, 0xD4, 0xB4, 0xFF, 0xE9, 0xD3, 0xB5, 0xFF, 0xE8, 0xCF, 0xAE, 0xFF, 0xE5, 0xC7, 0xA0, 0xFF, 0xE4, 0xC3, 0x9B, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE4, 0xC4, 0x9C, 0xFF, 0xE3, 0xC4, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF,
    0xE1, 0xBF, 0x93, 0xFF, 0xDF, 0xBE, 0x94, 0xFF, 0xDF, 0xC0, 0x97, 0xFF, 0xE1, 0xC2, 0x98, 0xFF, 0xD7, 0xB4, 0x91, 0xFF, 0xBD, 0x8D, 0x7D, 0xFF, 0xBF, 0x8D, 0x7D, 0xFF, 0xBE, 0x8B, 0x7F, 0xFF, 0xC0, 0x8C, 0x81, 0xFF, 0xD1, 0xA0, 0x91, 0xFF, 0xE6, 0xC4, 0xB8, 0xFF, 0xE3, 0xCB, 0xC5, 0xFF, 0xAD, 0x7F, 0x7A, 0xFF, 0x4B, 0x9C, 0xB3, 0xFF, 0x41, 0xA7, 0xC4, 0xFF, 0x37, 0xA4, 0xC2, 0xFF,
    0x80, 0xC3, 0xD3, 0xFF, 0xFF, 0xF6, 0xEC, 0xFF, 0xF3, 0xE8, 0xDE, 0xFF, 0xEE, 0xE7, 0xDA, 0xFF, 0xE8, 0xCF, 0xAF, 0xFF, 0xE5, 0xC5, 0x9B, 0xFF, 0xE6, 0xC6, 0x9D, 0xFF, 0xE7, 0xC7, 0x9E, 0xFF, 0xE6, 0xC6, 0x9E, 0xFF, 0xE5, 0xC6, 0x9F, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xDF, 0xBE, 0x94, 0xFF, 0xDF, 0xC0, 0x97, 0xFF, 0xE2, 0xC3, 0x99, 0xFF,
    0xD6, 0xB2, 0x90, 0xFF, 0xB5, 0x82, 0x77, 0xFF, 0xC0, 0x88, 0x7B, 0xFF, 0xD8, 0xA0, 0x8C, 0xFF, 0xE7, 0xB5, 0x9D, 0xFF, 0xF0, 0xC1, 0xAB, 0xFF, 0xFA, 0xDE, 0xD0, 0xFF, 0xEF, 0xDD, 0xD6, 0xFF, 0xAD, 0x79, 0x73, 0xFF, 0x91, 0xC1, 0xCF, 0xFF, 0x9B, 0xD8, 0xEB, 0xFF, 0x54, 0xBA, 0xDB, 0xFF, 0x75, 0xC7, 0xE2, 0xFF, 0xFF, 0xEC, 0xDE, 0xFF, 0xF0, 0xBE, 0xA0, 0xFF, 0xEF, 0xE5, 0xD9, 0xFF,
    0xE9, 0xD3, 0xB5, 0xFF, 0xE6, 0xC5, 0x9B, 0xFF, 0xE6, 0xC6, 0x9D, 0xFF, 0xE8, 0xC8, 0x9F, 0xFF, 0xE7, 0xC6, 0x9E, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xDF, 0xBE, 0x94, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC2, 0x98, 0xFF, 0xD5, 0xB1, 0x8F, 0xFF, 0xBD, 0x89, 0x7A, 0xFF, 0xDB, 0xA1, 0x8A, 0xFF, 0xF4, 0xBB, 0x9E, 0xFF,
    0xF8, 0xC5, 0xA9, 0xFF, 0xF7, 0xC9, 0xB1, 0xFF, 0xFB, 0xDF, 0xCF, 0xFF, 0xED, 0xDC, 0xD4, 0xFF, 0xAD, 0x7A, 0x74, 0xFF, 0xB5, 0xCE, 0xD6, 0xFF, 0xC7, 0xEA, 0xF4, 0xFF, 0x91, 0xD5, 0xEB, 0xFF, 0x9C, 0xC6, 0xCE, 0xFF, 0xF9, 0xAE, 0x81, 0xFF, 0xE8, 0x83, 0x45, 0xFF, 0xED, 0xD9, 0xC8, 0xFF, 0xE9, 0xD1, 0xB1, 0xFF, 0xE5, 0xC2, 0x95, 0xFF, 0xE6, 0xC5, 0x9B, 0xFF, 0xE8, 0xC8, 0x9E, 0xFF,
    0xE7, 0xC6, 0x9E, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xDF, 0xBE, 0x94, 0xFF, 0xDE, 0xBF, 0x96, 0xFF, 0xE1, 0xC2, 0x98, 0xFF, 0xD4, 0xB0, 0x8E, 0xFF, 0xBF, 0x8B, 0x7C, 0xFF, 0xE4, 0xAA, 0x90, 0xFF, 0xF9, 0xC2, 0xA1, 0xFF, 0xF7, 0xC5, 0xA8, 0xFF, 0xF6, 0xC8, 0xAF, 0xFF, 0xFB, 0xDF, 0xCF, 0xFF, 0xED, 0xDC, 0xD4, 0xFF,
    0xAD, 0x7B, 0x73, 0xFF, 0xB0, 0xCE, 0xD7, 0xFF, 0xCA, 0xEF, 0xF9, 0xFF, 0xBB, 0xD4, 0xD6, 0xFF, 0xC4, 0xA1, 0x84, 0xFF, 0xED, 0x6B, 0x1E, 0xFF, 0xE8, 0x77, 0x32, 0xFF, 0xF1, 0xE7, 0xDE, 0xFF, 0xF0, 0xF4, 0xEF, 0xFF, 0xED, 0xE9, 0xDD, 0xFF, 0xE9, 0xD5, 0xB8, 0xFF, 0xE7, 0xC8, 0x9F, 0xFF, 0xE7, 0xC6, 0x9E, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF,
    0xE1, 0xBF, 0x93, 0xFF, 0xE0, 0xBF, 0x95, 0xFF, 0xDE, 0xBE, 0x96, 0xFF, 0xE0, 0xC1, 0x97, 0xFF, 0xD3, 0xAF, 0x8D, 0xFF, 0xBE, 0x8B, 0x7C, 0xFF, 0xE5, 0xAA, 0x90, 0xFF, 0xFA, 0xC3, 0xA1, 0xFF, 0xF9, 0xC6, 0xA9, 0xFF, 0xF8, 0xCA, 0xB1, 0xFF, 0xFB, 0xDF, 0xCF, 0xFF, 0xED, 0xDC, 0xD4, 0xFF, 0xAC, 0x7A, 0x73, 0xFF, 0xB5, 0xD5, 0xDF, 0xFF, 0xD4, 0xDE, 0xDA, 0xFF, 0xD9, 0xAB, 0x8A, 0xFF,
    0xDB, 0x71, 0x2F, 0xFF, 0xE6, 0x52, 0x00, 0xFF, 0xE6, 0x67, 0x1A, 0xFF, 0xED, 0xA7, 0x7C, 0xFF, 0xED, 0xB4, 0x90, 0xFF, 0xEC, 0xB1, 0x8C, 0xFF, 0xE9, 0xBE, 0x96, 0xFF, 0xE7, 0xC8, 0x9E, 0xFF, 0xE7, 0xC6, 0x9F, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xE0, 0xBF, 0x95, 0xFF, 0xDF, 0xBF, 0x96, 0xFF, 0xE0, 0xC1, 0x97, 0xFF,
    0xD3, 0xAF, 0x8D, 0xFF, 0xBE, 0x8B, 0x7C, 0xFF, 0xE4, 0xA9, 0x8F, 0xFF, 0xF4, 0xBB, 0x9E, 0xFF, 0xE6, 0xB2, 0x9B, 0xFF, 0xEC, 0xBC, 0xA6, 0xFF, 0xFA, 0xDE, 0xCD, 0xFF, 0xED, 0xDC, 0xD4, 0xFF, 0xAD, 0x7A, 0x74, 0xFF, 0xB8, 0xDC, 0xEA, 0xFF, 0xDD, 0xAD, 0x89, 0xFF, 0xE6, 0x71, 0x29, 0xFF, 0xE4, 0x53, 0x00, 0xFF, 0xE5, 0x55, 0x00, 0xFF, 0xE4, 0x54, 0x00, 0xFF, 0xE4, 0x52, 0x00, 0xFF,
    0xE4, 0x50, 0x00, 0xFF, 0xE4, 0x51, 0x00, 0xFF, 0xE5, 0x98, 0x5A, 0xFF, 0xE8, 0xC8, 0x9F, 0xFF, 0xE7, 0xC7, 0x9F, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xDE, 0xBD, 0x93, 0xFF, 0xDD, 0xBD, 0x94, 0xFF, 0xE0, 0xC1, 0x97, 0xFF, 0xD3, 0xAF, 0x8D, 0xFF, 0xBF, 0x8C, 0x7C, 0xFF, 0xE0, 0xA6, 0x8D, 0xFF, 0xDA, 0xA1, 0x8C, 0xFF,
    0xB3, 0x82, 0x7A, 0xFF, 0xCE, 0xA1, 0x93, 0xFF, 0xF8, 0xDC, 0xCD, 0xFF, 0xEE, 0xDC, 0xD4, 0xFF, 0xAD, 0x7A, 0x74, 0xFF, 0xB2, 0xDF, 0xF0, 0xFF, 0xDA, 0x78, 0x3B, 0xFF, 0xE6, 0x50, 0x00, 0xFF, 0xE5, 0x53, 0x00, 0xFF, 0xE4, 0x55, 0x00, 0xFF, 0xE4, 0x55, 0x00, 0xFF, 0xE4, 0x53, 0x00, 0xFF, 0xE4, 0x52, 0x00, 0xFF, 0xE4, 0x52, 0x00, 0xFF, 0xE5, 0x98, 0x5B, 0xFF, 0xE8, 0xC9, 0x9F, 0xFF,
    0xE7, 0xC7, 0x9F, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xDE, 0xBD, 0x93, 0xFF, 0xDD, 0xBD, 0x95, 0xFF, 0xDF, 0xBF, 0x95, 0xFF, 0xD3, 0xAF, 0x8D, 0xFF, 0xBF, 0x8C, 0x7D, 0xFF, 0xDB, 0xA2, 0x8A, 0xFF, 0xC5, 0x8E, 0x7F, 0xFF, 0xD8, 0xC4, 0xC4, 0xFF, 0xF9, 0xE5, 0xDA, 0xFF, 0xFC, 0xE2, 0xD3, 0xFF, 0xED, 0xDB, 0xD4, 0xFF,
    0xAD, 0x7A, 0x73, 0xFF, 0x9D, 0xCC, 0xDD, 0xFF, 0xC7, 0xCC, 0xC3, 0xFF, 0xDE, 0x85, 0x4C, 0xFF, 0xE5, 0x51, 0x00, 0xFF, 0xE5, 0x54, 0x00, 0xFF, 0xE5, 0x56, 0x00, 0xFF, 0xE5, 0x5A, 0x06, 0xFF, 0xE5, 0x59, 0x06, 0xFF, 0xE5, 0x5A, 0x06, 0xFF, 0xE6, 0x9B, 0x5F, 0xFF, 0xE8, 0xC8, 0x9F, 0xFF, 0xE7, 0xC7, 0x9F, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF,
    0xE1, 0xBF, 0x92, 0xFF, 0xDE, 0xBF, 0x93, 0xFF, 0xDD, 0xBE, 0x94, 0xFF, 0xDF, 0xC0, 0x95, 0xFF, 0xD2, 0xAE, 0x8D, 0xFF, 0xBF, 0x8B, 0x7D, 0xFF, 0xDF, 0xA4, 0x8B, 0xFF, 0xD2, 0x9B, 0x85, 0xFF, 0xBD, 0x8F, 0x87, 0xFF, 0xDC, 0xB1, 0xA3, 0xFF, 0xF9, 0xDC, 0xCE, 0xFF, 0xEE, 0xDC, 0xD4, 0xFF, 0xAD, 0x7A, 0x74, 0xFF, 0x8A, 0xC0, 0xD1, 0xFF, 0xA0, 0xD7, 0xE8, 0xFF, 0xAF, 0xB8, 0xB1, 0xFF,
    0xC9, 0x80, 0x4E, 0xFF, 0xE9, 0x53, 0x00, 0xFF, 0xE7, 0x6F, 0x26, 0xFF, 0xF1, 0xCB, 0xB2, 0xFF, 0xF0, 0xDC, 0xCB, 0xFF, 0xED, 0xD5, 0xC4, 0xFF, 0xEA, 0xCD, 0xAD, 0xFF, 0xE7, 0xC8, 0x9E, 0xFF, 0xE7, 0xC6, 0x9E, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE2, 0xC0, 0x92, 0xFF, 0xE0, 0xBE, 0x92, 0xFF, 0xDF, 0xBF, 0x94, 0xFF, 0xE1, 0xC1, 0x94, 0xFF,
    0xD3, 0xAF, 0x8C, 0xFF, 0xBE, 0x8A, 0x7C, 0xFF, 0xE4, 0xA8, 0x8E, 0xFF, 0xED, 0xB4, 0x97, 0xFF, 0xDE, 0xAA, 0x95, 0xFF, 0xE8, 0xBA, 0xA4, 0xFF, 0xFB, 0xDD, 0xCF, 0xFF, 0xEE, 0xDC, 0xD4, 0xFF, 0xAD, 0x79, 0x75, 0xFF, 0x74, 0xB5, 0xCC, 0xFF, 0x7B, 0xCF, 0xEA, 0xFF, 0x6F, 0xC0, 0xD7, 0xFF, 0x9C, 0xA6, 0x9D, 0xFF, 0xF3, 0x80, 0x3C, 0xFF, 0xE8, 0x77, 0x34, 0xFF, 0xF0, 0xE0, 0xD2, 0xFF,
    0xEC, 0xE5, 0xD5, 0xFF, 0xE9, 0xD9, 0xBF, 0xFF, 0xE8, 0xCE, 0xAC, 0xFF, 0xE6, 0xC7, 0x9D, 0xFF, 0xE6, 0xC6, 0x9E, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE3, 0xC0, 0x91, 0xFF, 0xE2, 0xBE, 0x93, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE2, 0xC1, 0x95, 0xFF, 0xD5, 0xAF, 0x8C, 0xFF, 0xBF, 0x8B, 0x7C, 0xFF, 0xE5, 0xA9, 0x90, 0xFF, 0xFB, 0xC2, 0xA2, 0xFF,
    0xFA, 0xC6, 0xAB, 0xFF, 0xF8, 0xCA, 0xB1, 0xFF, 0xFB, 0xDF, 0xCF, 0xFF, 0xEE, 0xDC, 0xD4, 0xFF, 0xAE, 0x79, 0x75, 0xFF, 0x65, 0xAF, 0xCA, 0xFF, 0x61, 0xC4, 0xE4, 0xFF, 0x40, 0xB4, 0xD9, 0xFF, 0x7A, 0xBE, 0xD0, 0xFF, 0xFF, 0xC2, 0x9C, 0xFF, 0xEA, 0x8D, 0x54, 0xFF, 0xEE, 0xDB, 0xCA, 0xFF, 0xE7, 0xD1, 0xB2, 0xFF, 0xE4, 0xC2, 0x95, 0xFF, 0xE5, 0xC5, 0x9B, 0xFF, 0xE7, 0xC7, 0x9D, 0xFF,
    0xE5, 0xC7, 0x9F, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE8, 0xC9, 0xA2, 0xFF, 0xE3, 0xBF, 0x91, 0xFF, 0xE2, 0xBF, 0x92, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE2, 0xC0, 0x94, 0xFF, 0xD5, 0xAF, 0x8C, 0xFF, 0xBB, 0x87, 0x79, 0xFF, 0xD8, 0x9F, 0x88, 0xFF, 0xF4, 0xBA, 0x9D, 0xFF, 0xF8, 0xC5, 0xAA, 0xFF, 0xF8, 0xCA, 0xB1, 0xFF, 0xFC, 0xE0, 0xCF, 0xFF, 0xEE, 0xDC, 0xD4, 0xFF,
    0xAC, 0x78, 0x73, 0xFF, 0x67, 0xA5, 0xBF, 0xFF, 0x5D, 0xB2, 0xD2, 0xFF, 0x44, 0xA5, 0xCA, 0xFF, 0x77, 0xB9, 0xD2, 0xFF, 0xE4, 0xD3, 0xCA, 0xFF, 0xDA, 0xB3, 0x9C, 0xFF, 0xEC, 0xE4, 0xDA, 0xFF, 0xE8, 0xD2, 0xB4, 0xFF, 0xE4, 0xC3, 0x98, 0xFF, 0xE6, 0xC6, 0x9D, 0xFF, 0xE7, 0xC7, 0x9E, 0xFF, 0xE5, 0xC7, 0x9F, 0xFF, 0xE5, 0xC6, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE8, 0xC9, 0xA2, 0xFF,
    0xE3, 0xBF, 0x90, 0xFF, 0xE1, 0xBE, 0x91, 0xFF, 0xDF, 0xBD, 0x93, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xD5, 0xB1, 0x8E, 0xFF, 0xB8, 0x8C, 0x81, 0xFF, 0xC2, 0x92, 0x86, 0xFF, 0xD5, 0x9F, 0x8C, 0xFF, 0xE1, 0xAC, 0x97, 0xFF, 0xEA, 0xBA, 0xA5, 0xFF, 0xF7, 0xDA, 0xCA, 0xFF, 0xEF, 0xDF, 0xD9, 0xFF, 0xB1, 0x85, 0x81, 0xFF, 0x98, 0xA5, 0xA4, 0xFF, 0x92, 0xAA, 0xAD, 0xFF, 0x91, 0xAA, 0xAE, 0xFF,
    0xA5, 0xB1, 0xAD, 0xFF, 0xC6, 0xBA, 0xAC, 0xFF, 0xCE, 0xC5, 0xB9, 0xFF, 0xE6, 0xDC, 0xCA, 0xFF, 0xE7, 0xCD, 0xAA, 0xFF, 0xE4, 0xC3, 0x99, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE6, 0xC6, 0x9D, 0xFF, 0xE6, 0xC6, 0x9E, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE2, 0xBE, 0x90, 0xFF, 0xE1, 0xBE, 0x91, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xE0, 0xBE, 0x92, 0xFF,
    0xD9, 0xB8, 0x92, 0xFF, 0xC5, 0xA6, 0x92, 0xFF, 0xC3, 0xA2, 0x93, 0xFF, 0xBE, 0x98, 0x8E, 0xFF, 0xBB, 0x92, 0x8A, 0xFF, 0xCB, 0x9F, 0x93, 0xFF, 0xDF, 0xC0, 0xB6, 0xFF, 0xE0, 0xCE, 0xCB, 0xFF, 0xB9, 0x9A, 0x97, 0xFF, 0xD4, 0xB9, 0x96, 0xFF, 0xD8, 0xBD, 0x97, 0xFF, 0xD8, 0xBD, 0x98, 0xFF, 0xDB, 0xBF, 0x98, 0xFF, 0xDF, 0xC0, 0x98, 0xFF, 0xE0, 0xC1, 0x9A, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF,
    0xE4, 0xC4, 0x9B, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE6, 0xC6, 0x9D, 0xFF, 0xE5, 0xC5, 0x9D, 0xFF, 0xE5, 0xC6, 0x9F, 0xFF, 0xE5, 0xC6, 0x9F, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE2, 0xBE, 0x8F, 0xFF, 0xE0, 0xBD, 0x90, 0xFF, 0xDE, 0xBC, 0x92, 0xFF, 0xDF, 0xBD, 0x91, 0xFF, 0xDE, 0xBC, 0x92, 0xFF, 0xDA, 0xB9, 0x92, 0xFF, 0xD7, 0xB9, 0x96, 0xFF, 0xCB, 0xB8, 0xA8, 0xFF,
    0xBC, 0xA9, 0xA1, 0xFF, 0xBF, 0xA2, 0x96, 0xFF, 0xC7, 0xA8, 0x9E, 0xFF, 0xC7, 0xAB, 0xA2, 0xFF, 0xC0, 0xA1, 0x99, 0xFF, 0xDF, 0xBD, 0x93, 0xFF, 0xE3, 0xC0, 0x93, 0xFF, 0xE3, 0xC0, 0x94, 0xFF, 0xE3, 0xC0, 0x94, 0xFF, 0xE3, 0xC1, 0x95, 0xFF, 0xE3, 0xC0, 0x94, 0xFF, 0xE3, 0xC0, 0x96, 0xFF, 0xE3, 0xC2, 0x99, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF,
    0xE4, 0xC6, 0x9D, 0xFF, 0xE4, 0xC5, 0x9F, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE7, 0xC8, 0xA1, 0xFF, 0xE2, 0xBE, 0x8F, 0xFF, 0xDF, 0xBC, 0x91, 0xFF, 0xDE, 0xBD, 0x92, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xDF, 0xBD, 0x91, 0xFF, 0xDF, 0xBE, 0x93, 0xFF, 0xDC, 0xBF, 0x9A, 0xFF, 0xD7, 0xBB, 0x98, 0xFF, 0xD7, 0xB7, 0x93, 0xFF, 0xD7, 0xB6, 0x92, 0xFF, 0xD7, 0xB6, 0x92, 0xFF,
    0xD9, 0xB8, 0x94, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE3, 0xC1, 0x96, 0xFF, 0xE3, 0xC1, 0x95, 0xFF, 0xE2, 0xC0, 0x96, 0xFF, 0xE2, 0xC1, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE5, 0xC4, 0x9B, 0xFF, 0xE4, 0xC5, 0x9C, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE5, 0xC6, 0x9F, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF,
    0xE1, 0xBD, 0x8F, 0xFF, 0xE0, 0xBD, 0x90, 0xFF, 0xDD, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x90, 0xFF, 0xDE, 0xBC, 0x90, 0xFF, 0xDF, 0xBC, 0x90, 0xFF, 0xDF, 0xBC, 0x90, 0xFF, 0xE0, 0xBD, 0x91, 0xFF, 0xE1, 0xBF, 0x92, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE0, 0xBE, 0x93, 0xFF,
    0xE2, 0xC0, 0x95, 0xFF, 0xE2, 0xC0, 0x95, 0xFF, 0xE2, 0xC0, 0x94, 0xFF, 0xE3, 0xC0, 0x96, 0xFF, 0xE3, 0xC2, 0x99, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE3, 0xC4, 0x9D, 0xFF, 0xE3, 0xC4, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE6, 0xC7, 0xA0, 0xFF, 0xE1, 0xBD, 0x8E, 0xFF, 0xDF, 0xBC, 0x8F, 0xFF, 0xDD, 0xBB, 0x91, 0xFF, 0xDD, 0xBB, 0x90, 0xFF,
    0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE2, 0xC0, 0x95, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE3, 0xC1, 0x97, 0xFF,
    0xE3, 0xC2, 0x98, 0xFF, 0xE2, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF, 0xE5, 0xC5, 0x9C, 0xFF, 0xE3, 0xC5, 0x9D, 0xFF, 0xE3, 0xC4, 0x9E, 0xFF, 0xE5, 0xC6, 0x9F, 0xFF, 0xE5, 0xC6, 0x9F, 0xFF, 0xE1, 0xBD, 0x8E, 0xFF, 0xDE, 0xBB, 0x90, 0xFF, 0xDD, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF,
    0xDE, 0xBC, 0x91, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE1, 0xBF, 0x94, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xE2, 0xC0, 0x96, 0xFF, 0xE2, 0xC1, 0x98, 0xFF, 0xE2, 0xC2, 0x99, 0xFF, 0xE3, 0xC3, 0x9A, 0xFF, 0xE4, 0xC4, 0x9B, 0xFF,
    0xE3, 0xC4, 0x9C, 0xFF, 0xE3, 0xC4, 0x9D, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF, 0xE1, 0xBD, 0x8E, 0xFF, 0xDE, 0xBB, 0x90, 0xFF, 0xDD, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDD, 0xBB, 0x90, 0xFF, 0xDD, 0xBB, 0x90, 0xFF,
    0xDD, 0xBB, 0x90, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xDE, 0xBC, 0x91, 0xFF, 0xE0, 0xBE, 0x93, 0xFF, 0xDF, 0xBD, 0x92, 0xFF, 0xE1, 0xBF, 0x93, 0xFF, 0xE0, 0xBE, 0x94, 0xFF, 0xE0, 0xBF, 0x97, 0xFF, 0xE0, 0xC0, 0x97, 0xFF, 0xE1, 0xC1, 0x98, 0xFF, 0xE3, 0xC3, 0x99, 0xFF, 0xE1, 0xC2, 0x9A, 0xFF, 0xE1, 0xC2, 0x9B, 0xFF, 0xE2, 0xC3, 0x9C, 0xFF, 0xE4, 0xC5, 0x9E, 0xFF
};
const lv_img_dsc_t img_exitpress_png = {
    .header.always_zero = 0,
    .header.w = 28,
    .header.h = 28,
    .data_size = sizeof(img_exitpress_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = img_exitpress_png_data
};
