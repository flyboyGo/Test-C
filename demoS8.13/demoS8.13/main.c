#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <memory.h>
#include<assert.h>

typedef struct Postion
{
	int row;
	int col;
}PT;
/////////////////////////////////////////////////////////////////
typedef PT STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}Stack;

void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

void StackPush(Stack* ps, STDataType x)
{
	assert(ps);

	// ����-������
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(Stack* ps)
{
	assert(ps);
	// ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	//ps->a[ps->top - 1] = 0;
	ps->top--;
}

STDataType StackTop(Stack* ps)
{
	assert(ps);
	// ջ���ˣ�����Top��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	return ps->a[ps->top - 1];
}

int StackSize(Stack* ps)
{
	assert(ps);

	return ps->top;
}

int StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->top == 0;
}

////////////////////////////////////////////////////////////////

Stack path;
Stack minpath;

void PrintMaze(int** maze, int N, int M)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// ���ջ���������·��
void PirntPath(Stack* ps)
{
	// path���ݵ���rPath
	Stack rPath;
	StackInit(&rPath);
	while (!StackEmpty(ps))
	{
		StackPush(&rPath, StackTop(ps));
		StackPop(ps);
	}

	while (StackSize(&rPath) > 1)
	{
		PT top = StackTop(&rPath);
		printf("[%d,%d],", top.row, top.col);
		StackPop(&rPath);
	}

	PT top = StackTop(&rPath);
	printf("[%d,%d]", top.row, top.col);
	StackPop(&rPath);

	StackDestory(&rPath);
}

int IsPass(int** maze, int N, int M, PT pos)
{
	if (pos.row >= 0 && pos.row < N
		&& pos.col >= 0 && pos.col < M
		&& maze[pos.row][pos.col] == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void StackCopy(Stack* ppath, Stack* pcopy)
{
	pcopy->a = (STDataType*)malloc(sizeof(STDataType*) * ppath->capacity);
	assert(pcopy->a);
	memcpy(pcopy->a, ppath->a, sizeof(STDataType) * ppath->top);
	pcopy->top = ppath->top;
	pcopy->capacity = ppath->capacity;
}

void GetMazePath(int** maze, int N, int M, PT cur, int P)
{
	StackPush(&path, cur);

	// ����ߵ�����
	if (cur.row == 0 && cur.col == M - 1)
	{
		// �ҵ��˸��̵�·��������minpath��
		if (P >= 0 && StackEmpty(&minpath)
			|| StackSize(&path) < StackSize(&minpath))
		{
			if(minpath.a != NULL)
			{
				StackDestory(&minpath);
			}
			StackCopy(&path, &minpath);
		}
	}

	// ̽��curλ�õ����������ĸ�����
	PT next;
	maze[cur.row][cur.col] = 2;

	// ��
	next = cur;
	next.row -= 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P - 3);

	}

	// ��
	next = cur;
	next.row += 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P);
	}


	// ��
	next = cur;
	next.col -= 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P - 1);
	}

	// ��
	next = cur;
	next.col += 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P - 1);
	}

	// �ָ�һ��
	maze[cur.row][cur.col] = 1;
	StackPop(&path);
}

int main()
{
	int N = 0, M = 0, P = 0;
	while (scanf("%d%d%d", &N, &M, &P) != EOF)
	{
		// int a[n][m]; // vs2013 ��֧��
		// ��̬���ٶ�ά����
		int** maze = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i < N; ++i)
		{
			maze[i] = (int*)malloc(sizeof(int) * M);
		}

		// ��ά���������
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				scanf("%d", &maze[i][j]);
			}
		}

		StackInit(&path);
		StackInit(&minpath);

		// PrintMaze(maze, N, M);
		PT entry = { 0, 0 };
		GetMazePath(maze, N, M, entry, P);

		if (!StackEmpty(&minpath))
		{
			PirntPath(&minpath);
		}
		else
		{
			printf("Can not escape!\n");
		}


		StackDestory(&path);
		StackDestory(&minpath);

		for (int i = 0; i < N; ++i)
		{
			free(maze[i]);
		}
		free(maze);
		maze = NULL;
	}

	return 0;
}