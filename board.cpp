#include "board.h"


Board::Board(){
    // initialize board empty

    if (!boardReset()){
        printf("ERROR: boardReset failed during init");
    }
}


bool Board::boardReset(){
    for(int i = 0; i<BOARDHEIGHT; i++){
        for (int j = 0; j<BOARDWIDTH;j++){
            if (i == BOARDHEIGHT-1 || j == 0 || j == BOARDWIDTH-1){
                boardArray[i][j] = -1;
            }
            else{
                boardArray[i][j] = 0;
            }
        }
    }
    return true;
}

void Board::print(){
    for(int i = 0; i<BOARDHEIGHT; i++){
        for (int j = 0; j<BOARDWIDTH;j++){
            printf("%d",boardArray[i][j]);
        }
        printf("\n");
    }
}

bool Board::collision(int (*block)[5]){
    return false;
}