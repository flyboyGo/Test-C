#pragma once
#define ROW 9
#define COL 9
#define COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//初始化数组,安排地雷的信息
void InitBoard(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count);

//打印数组的信息不包括地雷信息
void PrintBoard(char board2[ROW][COL], int row, int col);

//玩家排雷
char PlayerExclude(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count);

//玩家点击棋盘
char PlayerClick(char board[ROW][COL], char board2[ROW][COL], int row, int col);

//玩家取消排雷
void PlayerCancel(char board[ROW][COL], char board2[ROW][COL], int row, int col);

