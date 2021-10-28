//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <math.h>
//#include <string.h>
//
//struct BoardGame {
//    unsigned short playerTurn;
//    int boardSqrt;
//    double boardLen;
//    bool canFinish;
//    char board[3][3][3];
//};
//
//struct BoardGame init(void) {
//    struct BoardGame game = {0};
//    game.playerTurn = 0;
//    game.boardSqrt = 3;
//    game.boardLen = 9; //game.boardSqrt * game.boardSqrt;
//    game.canFinish = false;
//
//    // Set the starting value in each board cell (Khoi tao gia tri cua cac o trong bang khi chay)
//    char pos[3] = { '0', '0', '1' };
//    for (unsigned short i = 0; i < game.boardSqrt; i++) {
//        for (unsigned short j = 0; j < game.boardSqrt; j++) {
//            for (short k = 2; k >= 0; k--) {
//                game.board[i][j][k] = pos[k];
//            }
//            if (pos[2] < '9')
//                pos[2]++;
//            else {
//                pos[2] = '0';
//                pos[1]++;
//            }
//        }
//    }
//    return game;
//}
//
//int main(void) {
//	return 0;
//}