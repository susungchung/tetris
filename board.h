#define BOARDWIDTH 12
#define BOARDHEIGHT 21
#ifndef __BOARD_H__
#define __BOARD_H__

#include <stdio.h>
#include <stdint.h>
#include <vector>

class Board{
    int boardArray[BOARDHEIGHT][BOARDWIDTH];
    bool boardReset();
    public:
    Board();
    void print();
    void draw();

    bool valid(const uint8_t (*block)[5], uint8_t px, uint8_t py);
    void deleteRow(int rowNum);
    std::vector<int> findFullRow();

};

#endif