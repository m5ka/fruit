// loop.c
// controlling of game logic
#include "fruit.h"
#include <ncurses.h>
#include <unistd.h>

int ask_to_quit() {
    return 1;
}

void loop() {
    while(true) {
        if(ask_to_quit())
            break;
    }
}