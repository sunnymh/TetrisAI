//
//  main.cpp
//  TetrisAI
//
//  Created by He Ma on 5/24/15.
//  Copyright (c) 2015 He Ma. All rights reserved.
//

#include <iostream>
#include "AIEngine.h"
const int BOARD_WIDTH = 10;
const int BOARD_HEIGHT = 20;

AIEngine engine;

int AI(int boardW, int boardH,
              char board[],
              char curPiece,
              int curX, int curY,
              int curR,
              char nextPiece,
              int* bestX, int* bestRotation)
{
    engine.setBoardInfo(boardW,boardH,curX,curY);
    Board boardInit(boardW, boardH, board);
    engine.getMax(boardInit, curPiece, bestX, bestRotation);
    return 0;
}

int main(int argc, const char * argv[]) {
    int bestX;
    int bestRotation;
    int boardW = BOARD_WIDTH;
    int boardH = BOARD_HEIGHT;
    int curX = boardW/2 + 1;
    int curY = boardH - 1;
    int curR = 1;
    char nextPiece = ' ';
    
    char curPiece = 'Z';
    char board[] = "11111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    
    AI(boardW, boardH,
       board, curPiece,
       curX, curY, curR, nextPiece,
       &bestX, &bestRotation);
    cout << bestX<< "    "<<bestRotation<< endl;
    return 0;
}
