#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct BoardGame {
    unsigned short playerTurn;
    int boardSqrt;
    double boardLen;
    bool canFinish;
    char board[3][3][3];
};
struct BoardGame init(void) {
    struct BoardGame game = {0};
    game.playerTurn = 0;
    game.boardSqrt = 3;
    game.boardLen = 9;//game.boardSqrt * game.boardSqrt (why errors?) ;
    game.canFinish = false;
}

int main() {
    startMenu();

    for (struct BoardGame game = init();;) //use for with unlimited range equal to while
    //while(struct BoardGame game = ttt_init()) tai sao k dung duoc while
    {
        displayBoardTotal();

        if (!game.canFinish)
            markAnswer();

        if (finishGame())
            break;
    }

    return 0;
}