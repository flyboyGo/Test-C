#pragma once
#define ROW 9
#define COL 9
#define COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//��ʼ������,���ŵ��׵���Ϣ
void InitBoard(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count);

//��ӡ�������Ϣ������������Ϣ
void PrintBoard(char board2[ROW][COL], int row, int col);

//�������
char PlayerExclude(char board[ROW][COL], char board2[ROW][COL], int row, int col, int count);

//��ҵ������
char PlayerClick(char board[ROW][COL], char board2[ROW][COL], int row, int col);

//���ȡ������
void PlayerCancel(char board[ROW][COL], char board2[ROW][COL], int row, int col);

