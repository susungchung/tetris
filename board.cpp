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

std::vector<int> Board::findFullRow(){
    std::vector<int> res;
    for(int i = 1; i < BOARDHEIGHT;i++){
        blank = false;
        for (int j = 1; j < BOARDWIDTH-1;j++){
            blank |= (boardArray[i][j] == 0);
        }
        if (blank){
            res.push_back(i);
        }
    }
    return res;
}

void Board::deleteRow(int rowNum){
    for(int i = rowNum; i < BOARDHEIGHT-1; i++){
        for (int j = 1; j < BOARDWIDTH-1;j++){
            boardArray[i][j] = boardArray[i+1][j]
        }
    }

    for (int j = 1; j < BOARDWIDTH-1;j++){
        boardArray[BOARDHEIGHT-1][j] = 0;
    }
}
