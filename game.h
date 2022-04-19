#ifndef __GAME_H__
#define __GAME_H__
#include "board.h"
#include <iostream>
#include <stdint.h>
#include <stdlib.h>  
#include <queue>
#include <vector>

#define MAX_ROTATION 4

class Game{
    int score;
    bool gameOver;
    
    Board* board;

    // information on current piece
    uint8_t px,py;
    uint8_t pieceType;
    uint8_t pieceRotation;


    // queue to store next piece
    std::queue<uint8_t> nextQueue;

    

    void _addNewPieceType();
    uint8_t _getNextPieceType();

    public:
    Game(Board* b);
    
    const uint8_t (*getPiece())[5];

    void rotatePiece();

     
};
#endif