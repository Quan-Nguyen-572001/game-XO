//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <Windows.h>
//#include <stdbool.h>
//#include <limits.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define WIDTH   18
//#define HEIGHT  10
//
//// You can deliver arry_next('board') through function parameters. 
//// However, in this case, it's much readable to define 'board' and the other variables as global variables.
//char board[HEIGHT][WIDTH];
//
//// the current position of the worm
//int x, y;
//
//// the current direction. i.e. increment/decrement values for 'worm_x' and 'worm_y'
//int dx, dy;
////char sum_mark_pos[HEIGHT-2][WIDTH-2];
////char minus_mark_pos[HEIGHT - 2][WIDTH - 2];
//int score = 1;
//char inner_space[HEIGHT - 2][WIDTH - 2];
//
//void initialize(int, int);
//void disply_next();
//bool is_blocked();
//void turn();
//void move();
//
//
//// initialize game baord & earthworm
//void initialize(int start_x, int start_y) {
//    // horizontal walls
//    for (int i = 0; i < WIDTH; i++) {
//        board[0][i] = board[HEIGHT - 1][i] = '#';
//    }
//
//    //inner space
//    for (int i = 0; i < HEIGHT - 2; i++) {
//        for (int j = 0; j < WIDTH - 2; j++) {
//            inner_space[i][j] = board[i+1][j+1] = ' ';
//        }
//    }
//
//    //vertical walls
//    for (int i = 0; i < HEIGHT; i++) {
//        board[i][0] = board[i][WIDTH - 1] = '#';
//    }
//
//    // initial position & direction of earthworm
//    x = start_x;
//    y = start_y;
//    dx = dy = 1;
//    board[x][y] = '@';
//
//   
//    //create +,- mark
//    //srand((unsigned int)time(NULL));
//    //for (int i = 0; i < 5; i++) {
//    //    board[1 + rand() % ((HEIGHT - 2)+1-2)][1 + rand() % (WIDTH - 2)] = '+'; //to avoid [1][1] position
//    //}
//    //for (int i = 0; i < 5; i++) {
//    //    board[1 + rand() % ((HEIGHT - 2)+1-2)][1 + rand() % (WIDTH - 2)] = '-'; //to avoid [1][1] position
//    //}
//    printf("You have to wait around 10sec, I explained in my code's comment part\n");
//    for (int i = 1; i <= 5; i++) {
//        while (1) {
//            srand((unsigned int)time(NULL));
//            int x_next = 1 + rand() % 9;
//            int y_next = 1 + rand() % 17;
//            if (board[x_next][y_next] == ' ') {
//                board[x_next][y_next] = '+';
//                //board[x][y] = ' ';
//                break;
//            }
//        }
//    }
//    for (int i = 1; i <= 5; i++) {
//        while (1) {
//            srand((unsigned int)time(NULL));
//            int x_next = 1 + rand() % 9;
//            int y_next = 1 + rand() % 17;
//            if (board[x_next][y_next] == ' ') {
//                board[x_next][y_next] = '-';
//                //board[x][y] = ' ';
//                break;
//            }
//        }
//    }
//}
//
////disply_next the game board
//void disply_next() {
//   
//    printf("score = %d\n", score);
//    for (int i = 0; i < HEIGHT; i++) {
//        for (int j = 0; j < WIDTH; j++) {
//            printf("%c", board[i][j]);
//        }
//        printf("\n");
//    }
//  
//}
//
//// Investigate the next position in the current direction
//bool is_blocked() {
//    //int x_next = x + dx;
//    //int y_next = y + dy;
//    ///*return board[x_next][y_next] != ' ';*/
//    //if (board[x_next][y_next] == ' ' || board[x_next][y_next] == '+' || board[x_next][y_next] == '-') {
//    //    return FALSE;
//    //}
//    //else {
//    //    return TRUE;
//    //}bool is_blocked() {
//    return board[x + dx][y + dy] == '#';
//}
//
//void turn() {
//    if (board[x + dx][y] == '#')
//        dx = -dx;
//    else
//        dy = -dy;
//}
//
//
//
//void move() {
//    if (board[x + dx][y + dy] == '+') {
//        score += 1;
//        board[x][y] = ' ';
//        x += dx;
//        y += dy;
//        board[x][y] = '@';
//        while (1) {
//            srand((unsigned int)time(NULL));
//            int x_next = 1 + rand() % 9;
//            int y_next = 1 + rand() % 17;
//            if (board[x_next][y_next] == ' ') {
//                board[x_next][y_next] = '+';
//                board[x][y] = ' ';
//                break;
//            }
//        }
//        //board[1 + rand() % (HEIGHT - 2)][1 + rand() % (WIDTH - 2)] = '+';
//        
//    }
//    else if (board[x + dx][y + dy] == '-') {
//        score -= 1;
//        board[x][y] = ' ';
//        x += dx;
//        y += dy;
//        board[x][y] = '@';
//        while (1) {
//            srand((unsigned int)time(NULL));
//            int x_next = 1 + rand() % 9;
//            int y_next = 1 + rand() % 17;
//            if (board[x_next][y_next] == ' ') {
//                board[x_next][y_next] = '-';
//                board[x][y] = ' ';
//                break;
//            }
//        }
//        //board[1 + rand() % (HEIGHT - 2)][1 + rand() % (WIDTH - 2)] = '-';
//        
//    }
//    else if (board[x + dx][y + dy] == ' ') {
//        board[x][y] = ' ';
//        x += dx;
//        y += dy;
//        board[x][y] = '@';
//    }
//}
//
//int main(void)
//{
//    initialize(1, 1);
//    while (1) {
//        while (is_blocked()) {
//            turn();
//        }
//        move();
//        disply_next();
//        Sleep(100);
//        system("cls");
//    }
//    return 0;
//}

//You have to wait about 10 seconds before the game runs because I used while loop to create + and -
//randomly and to check if + and - does not meet any diffent symbols like # or @ or + and - that are 
//already exists in the board that time.
//Firstly I used just srand() and rand() to create so sometimes it only shows 4 + or 4 - so I have to use 
//while loop to check the condition.
