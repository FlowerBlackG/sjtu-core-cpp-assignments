
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include "./cgt.h"

#ifdef _WIN32
    #include <Windows.h>
    #define SLEEP Sleep
#else
    #include <unistd.h>
    #define SLEEP usleep
#endif

using namespace std;


int main() {
    return 0;
    cgt_init();
    cgt_clear_screen();

    while (true) {
        SLEEP(10);
        // click on screen to show an '*' at that position
        int x, y, button, event;
        // if click on 3, 3, we break the loop
        // mark exit point

        cgt_print_char('X', 3, 3, COLOR_LIGHT_YELLOW);

        if (cgt_has_mouse()) {
            cgt_get_mouse(x, y, button, event);
            if (event == MOUSE_CLICK) {
                if (x == 3 && y == 3) {
                    break;
                }
                // if left, red; if right, green; if middle, blue
                if (button == MOUSE_BUTTON_LEFT) {
                    cgt_print_str("*", x, y, COLOR_LIGHT_RED);
                } else if (button == MOUSE_BUTTON_RIGHT) {
                    cgt_print_str("*", x, y, COLOR_LIGHT_GREEN);
                } else if (button == MOUSE_BUTTON_MIDDLE) {
                    cgt_print_str("*", x, y, COLOR_LIGHT_BLUE);
                }
            }
        }
    }


    // keyboard test
    cgt_clear_screen();
    while (true) {
        char ch;
        if (cgt_has_key()) {
            cgt_get_key(ch);


            if (ch == 'q' || ch == 'Q') {
                break;
            }
            
            // print with ranbow color
            int color = rand() % 16;
            cgt_print_char(ch, -1, -1, color);
        }

        SLEEP(10);
    }
    
    cgt_close();
    return 0;
}
