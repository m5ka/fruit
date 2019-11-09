#ifndef FRUIT_H_
#define FRUIT_H_

#define FRUIT_NUM 4

// fruit.c
char* get_panel(int i);
int setup_screen();

// loop.c
void loop();

// output.c
int compensate(int start, int change, int max);
void print_fruit_machine(int maxr, int maxc, int c1, int c2, int c3);
void print_fruit_line(int maxr, int maxc, int c1, int c2, int c3);

#endif