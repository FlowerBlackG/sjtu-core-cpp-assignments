/*
    Console Graphic Tools
    
    by gty

    Learnt from Shen Jian at Tongji University
*/


#pragma once


#define COLOR_BLACK         0
#define COLOR_BLUE          1
#define COLOR_GREEN         2
#define COLOR_CYAN          3
#define COLOR_RED           4
#define COLOR_MAGENTA       5
#define COLOR_YELLOW        6
#define COLOR_WHITE         7

#define COLOR_LIGHT_BLACK   8
#define COLOR_LIGHT_BLUE    9
#define COLOR_LIGHT_GREEN   10
#define COLOR_LIGHT_CYAN    11
#define COLOR_LIGHT_RED     12
#define COLOR_LIGHT_MAGENTA 13
#define COLOR_LIGHT_YELLOW  14
#define COLOR_LIGHT_WHITE   15


#define MOUSE_BUTTON_LEFT   1
#define MOUSE_BUTTON_RIGHT  2
#define MOUSE_BUTTON_MIDDLE 3

#define MOUSE_CLICK       1
#define MOUSE_DOUBLECLICK 2
#define MOUSE_RELEASE     3
#define MOUSE_MOVE        4


void cgt_init();
void cgt_close();

void cgt_clear_screen(int color = COLOR_BLACK);

bool cgt_has_mouse();
void cgt_get_mouse(int& x, int& y, int& button, int& event);

bool cgt_has_key();
void cgt_get_key(char& ch);

void cgt_set_color(int foreground = COLOR_WHITE, int background = COLOR_BLACK);
void cgt_reset_color();

void cgt_getxy(int &x, int &y);
void cgt_gotoxy(int x, int y);

void cgt_print_str(const char* str, int x = -1, int y = -1, int foreground = COLOR_WHITE, int background = COLOR_BLACK);


void cgt_print_char(char str, int x = -1, int y = -1, int foreground = COLOR_WHITE, int background = COLOR_BLACK);
