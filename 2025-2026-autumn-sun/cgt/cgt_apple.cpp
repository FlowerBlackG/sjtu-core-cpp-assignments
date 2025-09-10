/*
    Console Graphic Tools on Darwin (Apple)
    
    by jyq

    Learnt from Shen Jian at Tongji University
*/

#ifdef __APPLE__
#include "./cgt.h"

usingusing namespace std;

void cgt_init() {
    // TODO
}


void cgt_close() {
    // TODO
}


void cgt_clear_screen(int color = COLOR_BLACK) {
    // TODO
}

bool cgt_has_mouse() {
    // TODO
}

void cgt_get_mouse(int& x, int& y, int& button, int& event) {
    // TODO
}

bool cgt_has_key() {
    // TODO
}


void cgt_get_key(char& ch) {
    // TODO
}

void cgt_set_color(int foreground = COLOR_WHITE, int background = COLOR_BLACK) {
    // TODO
}

void cgt_reset_color() {
    // TODO
}

void cgt_getxy(int &x, int &y) {
    // TODO
}

void cgt_gotoxy(int x, int y) {
    // TODO
}

void cgt_print_str(const char* str, int x = -1, int y = -1, int foreground = COLOR_WHITE, int background = COLOR_BLACK)  {
    // TODO
}

void cgt_print_char(char str, int x = -1, int y = -1, int foreground = COLOR_WHITE, int background = COLOR_BLACK) {
    // TODO
}

#endif // __APPLE__
