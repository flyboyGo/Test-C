#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//��ʼ����������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ��������
void DisplayBoard(char board[ROW][COL], int row, int col);

//�����������
void PlayerMove(char board[ROW][COL], int row, int col);

//������������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ��Ӯ
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//����   - 'C'
char IsWin(char board[ROW][COL], int row, int col);

char IsWinPlus(char board[ROW][COL], int row, int col, int sz);
