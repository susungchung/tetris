//========= main.c =========//
#include <stdio.h>
#include "game.h"
#include "test.h"

int main() {
    printf("main()\n");
    Board board;
    Game game(&board);
    const uint8_t (*block)[5] = game.getPiece();
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            printf("%d ",block[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            printf("%d ",block[i][j]);
        }
        printf("\n");
    }
*/