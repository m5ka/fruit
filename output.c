// output.c
// helper functions to control output of the game
#include "fruit.h"

int compensate(int start, int change, int max) {
    int ok = 0;
    do {
        if(start < 0)
            start += max;
        else if(start >= max)
            start -= max;
        else
            ok = 1;
    } while(ok < 1);
    return start;
}

void print_fruit_machine(int maxr, int maxc, int c1, int c2, int c3) {

}

void print_fruit_line(int maxr, int maxc, int c1, int c2, int c3) {

}