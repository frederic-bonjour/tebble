#include <Arduino.h>
#include "BigDigitsFont.h"


BigDigitsFont::BigDigitsFont() {}


uint8_t BigDigitsFont::getCharWidth(char c) {
    return 7;
}


uint8_t BigDigitsFont::getCharIndex(char ch) {
    if (ch >= 48 && ch <= 57) {
        ch -= 48;
    }
    return ch;
}


uint8_t* BigDigitsFont::getChar(char c) {
    uint8_t index = getCharIndex(c);
    if (index < 10) {
        return chars[index];
    }
    return NULL;
}


uint8_t BigDigitsFont::getHeight() {
    return 7;
}


bool BigDigitsFont::handlesDiacritics() {
    return false;
}


uint8_t BigDigitsFont::chars[10][7] = {
    { 0x7F, 0x41, 0x41, 0x41, 0x41, 0x41, 0X7F }, // 0
    { 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 }, // 1
    { 0x7F, 0x01, 0x01, 0x7F, 0x40, 0x40, 0x7F }, // 2
    { 0x7F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x7F }, // 3
    { 0x41, 0x41, 0x41, 0x7F, 0x01, 0x01, 0x01 }, // 4
    { 0x7F, 0x40, 0x40, 0x7F, 0x01, 0x01, 0x7F }, // 5
    { 0x7F, 0x01, 0x01, 0x7F, 0x41, 0x41, 0x7F }, // 6
    { 0x7F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 }, // 7
    { 0x7F, 0x41, 0x41, 0x7F, 0x41, 0x41, 0x7F }, // 8
    { 0x7F, 0x41, 0x41, 0x7F, 0x01, 0x01, 0x7F }  // 9
};