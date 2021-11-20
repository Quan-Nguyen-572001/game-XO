//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <math.h>
//#include <string.h>
//
//// Creating the board struct
//struct BoardGame {
//    unsigned short playerTurn;
//    int boardSqrt;
//    double boardLen;
//    bool canFinish;
//    char board[3][3][3];
//};
//
//// Initializing the board struct
//struct BoardGame init(void) {
//    struct BoardGame game = {0};
//    game.playerTurn = 0;
//    game.boardSqrt = 3;
//    game.boardLen = 9;
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
//
//
//        }
//    }
//    return game;
//}
//
//// The menu that displays when starting the game (Cac dong se hien thi trc khi bat dau choi)
//void startMenu(void) {
//	char key;
//	system("clear");//ko co cung ko sao
//	printf("Tic tac toe game.\n");
//	printf("Hint : Each player needs to choose a number to place the symbol\n");
//	printf("Press Enter to start\n");
//	scanf_s("%c", &key,sizeof(key));
//}
//
//// Returns the symbol of the current player
//char currentPlayerTurn(struct BoardGame* game) {
//    return game->playerTurn % 2 ? 'O' : 'X';
//}
//
//// Returns the symbol of the player before the one now
//char lastPlayerTurn(struct BoardGame* game) {
//    return game->playerTurn % 2 ? 'X' : 'O';
//}
//
//// Asks the current player for a position
//char* askForPosition(struct BoardGame* game) {
//    static char pos[3];
//
//    printf("Choose a position for '%c': ", currentPlayerTurn(game));
//    scanf("%s", &pos); 
//    //scanf_s("%s", &pos, sizeof(pos)); //I don't know why I use this it returns errors, that's why I use
//    //the scanf above instead
//    return pos;
//};
//
//// Checks if the spot chosen by the player is empty
//bool isLegalMove(struct BoardGame* game, unsigned short col, unsigned short row) {
//    if ((row + 1) <= game->boardSqrt && (col + 1) <= game->boardSqrt) {
//        if (game->board[col][row][1] != 'X' && game->board[col][row][1] != 'O')
//            return true;
//    }
//    return false;
//}
//
//// Edit the board cell to display the symbol of the current player
//void markAnswer(struct BoardGame* game) {
//    char* ans = askForPosition(game);
//
//    for (unsigned short col = 0; col < game->boardSqrt; col++) {
//        for (unsigned short row = 0; row < game->boardSqrt; row++) {
//            if (strncmp(ans, game->board[col][row], 3) == 0) {
//                if (isLegalMove(game, col, row)) {
//                    game->board[col][row][0] = ' ';
//                    game->board[col][row][2] = ' ';
//                    game->board[col][row][1] = currentPlayerTurn(game);
//                    game->playerTurn++;
//                    break;
//                }
//                else {
//                    markAnswer(game);
//                }
//            }
//        }
//    }
//}
//
//// Prints one row of board cells
//void displayBoardSegment(struct BoardGame* game, unsigned short vPos) {
//    for (unsigned short i = 0; i < 3; i++) {
//        if (i % 2 == 0) {
//            for (unsigned short j = 0; j < game->boardSqrt; j++)
//                printf("|=====|");
//        }
//        else {
//            for (unsigned short j = 0; j < game->boardSqrt; j++)
//                printf("| %c%c%c |", game->board[vPos][j][0], game->board[vPos][j][1], game->board[vPos][j][2]);
//        }
//        printf("\n");
//    }
//}
//
//// Prints as many board cell rows as needed
//void displayBoardTotal(struct BoardGame* game) {
//    system("clear");
//    printf("Tic Tac Toe %dx%d\n\n", game->boardSqrt, game->boardSqrt);
//    for (unsigned short i = 0; i < game->boardSqrt; i++)
//        displayBoardSegment(game, i);
//}
//
//// Checks if the game ended in a draw
//bool testForDraw(struct BoardGame* game) {
//    return game->playerTurn >= game->boardLen;
//}
//
//// Checks for rows with each cell full of one symbol
//bool isHorizontalWin(struct BoardGame* game) {
//    for (unsigned short i = 0; i < game->boardSqrt; i++) {
//        char elem = game->board[i][0][1];
//        for (unsigned short j = 0; j < game->boardSqrt; j++) {
//            if (elem != game->board[i][j][1])
//                break;
//            if (j == game->boardSqrt - 1) {
//                if (elem == 'X' || elem == 'O')
//                    return true;
//            }
//        }
//    }
//    return false;
//}
//
//// Checks for columns with each cell full of one symbol
//bool isVerticalWin(struct BoardGame* game) {
//    for (unsigned short j = 0; j < game->boardSqrt; j++) {
//        char elem = game->board[0][j][1];
//        for (unsigned short i = 0; i < game->boardSqrt; i++) {
//            if (elem != game->board[i][j][1])
//                break;
//            if (i == game->boardSqrt - 1) {
//                if (elem == 'X' || elem == 'O')
//                    return true;
//            }
//        }
//    }
//    return false;
//}
//
//// Checks one diagonal (top left -> bottom right) with each cell full of one symbol 
//bool isDiagonalWinLeftToRight(struct BoardGame* game) {
//    char elem = game->board[0][0][1];
//
//    for (unsigned short i = 0, j = 0; i < game->boardSqrt; i++, j++) {
//        if (elem != game->board[i][j][1])
//            break;
//        if (j == game->boardSqrt - 1) {
//            if (elem == 'X' || elem == 'O')
//                return true;
//        }
//    }
//    return false;
//}
//
//// Checks other diagonal (top right -> bottom left) with each cell full of one symbol
//bool isDiagonalWinRightToLeft(struct BoardGame* game) {
//    unsigned short lastPosRow = game->boardSqrt - 1;
//    char elem = game->board[0][lastPosRow][1];
//
//    for (unsigned short i = 0, j = game->boardSqrt - 1; i < game->boardSqrt; i++, j--) {
//
//        if (elem != game->board[i][j][1]) //I don't know it has warnings
//            break;
//        if (j == 0) {
//            if (elem == 'X' || elem == 'O')
//                return true;
//        }
//    }
//    return false;
//}
//
//// All of the win possibilities combined
//bool testForWin(struct BoardGame* game) {
//    if (isVerticalWin(game) || isHorizontalWin(game) || isDiagonalWinLeftToRight(game) || isDiagonalWinRightToLeft(game))
//        return true;
//}
//
//// Checks if somebody won or the game ended in a draw
//bool finishGame(struct BoardGame* game) {
//    if (testForWin(game) && game->canFinish) {
//        printf("\n'%c' won!\n", lastPlayerTurn(game));
//        return true;
//    }
//    else if (testForDraw(game) && game->canFinish) {
//        printf("\nDraw!\n");
//        return true;
//    }
//    else if (testForWin(game) || testForDraw(game)) {
//        game->canFinish = true;
//    }
//    return false;
//}
//
//
//// 'main' function
//int main() {
//    startMenu();
//
//    for (struct BoardGame game = init();;)
//    //while(struct TTT_BoardGame game = ttt_init()) tai sao k dung duoc while
//    {
//        displayBoardTotal(&game);
//
//        if (!game.canFinish)
//            markAnswer(&game);
//
//        if (finishGame(&game))
//            break;
//    }
//
//    return 0;
//}


