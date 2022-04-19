#define BOARDWIDTH 12
#define BOARDHEIGHT 21
#ifndef __BOARD_H__
#define __BOARD_H__

#include <stdio.h>


class Board{
    int boardArray[BOARDHEIGHT][BOARDWIDTH];
    bool boardReset();
    public:
    Board();
    void print();
    void draw();
    bool collision(int (*block)[5]);
    
};

#endif