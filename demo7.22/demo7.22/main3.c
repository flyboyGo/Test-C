#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct S
{
	char c1;
	int a;
	char c2;
};

//使用宏模拟实现offsetof
#define OFFSETOF(strcut_name, member_name) (int)&(((strcut_name*)0)-> member_name)

//int main()
//{
//	struct S s;
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}


//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//
//	pstPimData = (struct tagPIM*)puc;
//
//	memset(puc, 0, 4);  
//
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}



//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}


//int main()
//{
//	int* p = malloc(0); //malloc()可以开辟0字节的空间
//	return 0;
//}
