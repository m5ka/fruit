// fruit.c
// main entry for program - initialisation and delegation
#include "fruit.h"
#include <ncurses.h>
#include <unistd.h>

char *fruit_options[] = {"cherry", "apple", "mango", "toilet"};
int maxr, maxc;

char* get_fruit(int i) {
    return fruit_options[i];
}

int setup_screen() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    if(has_colors() == FALSE) {
        endwin();
        printf("Your terminal does not support colour!\n");
        return 1;
    }
    getmaxyx(stdscr, maxr, maxc);
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    return 0;
}

int main() {
    if(setup_screen())
        return -1;
    sleep(1);
    endwin();
    return 0;
}