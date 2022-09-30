#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf); //二进制的形式写入到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <string.h>
#include <errno.h>

/*
    FILE *fopen(const char *filename, const char *mode)
    该函数返回一个 FILE 指针。否则返回 NULL，且设置全局变量 errno 来标识错误。


    int fclose(FILE *stream) 
    如果流成功关闭，则该方法返回零。如果失败，则返回 EOF。
*/
//文件的打开与关闭
//int main()
//{
//	//打开文件tes.txt
//	//.. 表示上一级路径
//	// . 表示当前路径
//	//fopen("D:\\VisualStudioWorkPlace\\demo7.21\\demo7.21\\test.txt", "r");//绝对路径
//
//	FILE* pf = fopen("test.txt", "r"); //相对路径
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//打开成功
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


/*
   int fgetc(FILE *stream) 从指定的流 stream 获取下一个字符（一个无符号字符），并把位置标识符往前移动。
   该函数以无符号 char 强制转换为 int 的形式返回读取的字符，如果到达文件末尾或发生读错误，则返回 EOF。

   int fputc(int char, FILE *stream) 把参数 char 指定的字符（一个无符号字符）写入到指定的流 stream 中，并把位置标识符往前移动。
   如果没有发生错误，则返回被写入的字符。如果发生错误，则返回 EOF，并设置错误标识符。
*/

//文件的顺序读写
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}



//int main()
//{
//	int c = 0;
//	FILE* pfWrite = fopen("test.txt", "r");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//读文件
//	while ((c = fgetc(pfWrite)) != EOF)
//	{
//		fputc(c,stdout);
//	}
//	printf("\n");
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//从键盘输入
//输出到屏幕
//键盘、屏幕都是外部设备

//键盘 -- 标准输入设备 -- stdin
//屏幕 -- 标准输出设备 -- stdout
//是一个程序默认打开的两个流设备

//stdin  FILE*
//stdout FILE*
//stderr FILE*


//标准输入、输出流的使用
// int main()
// {
// 	char ch = fgetc(stdin);
// 	fputc(ch, stdout);
// 	return 0;
// }


// int main()
// {
//     //打开文件
//     FILE* pf = fopen("test.txt", "w");
//     if(pf == NULL)
//     {
//         printf("%s\n", strerror(errno));
//         return 0;
//     }

//     //写文件
//     fputc('c', pf);
//     fputc('o', pf);
//     fputc('o', pf);
//     fputc('l', pf);

//     //关闭文件
//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////
/*
   char* fgets(char *str, int n, FILE *stream) 从指定的流 stream 读取一行，并把它存储在 str 所指向的字符串内。
   当读取 (n-1) 个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。
   如果成功，该函数返回相同的 str 参数。如果到达文件末尾或者没有读取到任何字符，str 的内容保持不变，并返回一个空指针。
   如果发生错误，返回一个空指针
*/
 //int main()
 //{
 //    char buf[1024] = {0};
 //    FILE* pf = fopen("test.txt", "r");
 //    if(pf == NULL)
 //    {
 //        printf("%s\n", strerror(errno));
 //        return 0;
 //    }

 //    //读文件
 //    fgets(buf, 1024, pf);
 //    //printf("%s", buf);
 //    puts(buf);//自带\n

 //    fgets(buf, 1024, pf);
 //    //printf("%s", buf);
 //    puts(buf);//自带\n

 //    //关闭文件
 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}

/*
   int fputs(const char *str, FILE *stream) 把字符串写入到指定的流 stream 中，但不包括空字符。
   该函数返回一个非负值，如果发生错误则返回 EOF。
*/
 //int main()
 //{
 //    char buf[1024] = {0};

 //    FILE* pf = fopen("test.txt", "w");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //写文件
 //    fputs("hello\n", pf);
 //    fputs("world\n", pf);

 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}

// int main()
// {
//     //从键盘读取一行文本信息
//     char buf[1024] = {0};
//     //fgets(buf, 1024, stdin); //从标准输入流读取
//     //fputs(buf, stdout);//输出到标准输出流

//     //等价
//     gets(buf);
//     puts(buf);
//     return 0;
// }


/*
   int fprintf(FILE *stream, const char *format, ...) 发送格式化输出到流 stream 中。

*/
struct S
{
    int n;
    float score;
    char arr[10];
};

 //int main()
 //{
 //    struct S s = {100, 3.14f, "bit"};
 //    FILE* pf = fopen("text.txt", "w");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //格式化的形式输出数据
 //    fprintf(pf, "%d %f %s", s.n,s.score,s.arr);
 //    //关闭文件
 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


/*
   int fscanf(FILE *stream, const char *format, ...) 从流 stream 读取格式化输入。

*/
 //int main()
 //{
 //    struct S s = {0};
 //    FILE* pf = fopen("text.txt", "r");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //格式化的形式输入数据
 //    fscanf(pf, "%d %f %s", &(s.n),&(s.score),s.arr);
 //    printf("%d %f %s", s.n,s.score,s.arr);

 //    //关闭文件
 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


//标准输入、输出流
// int main()
// {
//     struct S s = {0};
//     fscanf(stdin, "%d %f %s", &(s.n),&(s.score),s.arr);
//     fprintf(stdout, "%d %.3f %s", s.n,s.score,s.arr);
//     return 0;
// }

/*
    scanf/printf 是针对标准输入流/标准输出流的格式化输入/输出语句
    fscanf/fprintf 是针对所有输入流/所有输出流的输入/输出语句
    sscanf/sprintf sscanf是从字符串中读取格式化的数据
                   sprintf是把格式化数据输出成(存储到)字符串
*/


 //int main()
 //{
 //    struct S s = {100, 3.14f, "abcdef"};
 //    struct S tmp = {0};
 //    char buf[1024] = {0};
 //    //把格式化的数据转换成字符串存储到buf
 //    sprintf(buf, "%d %f %s", s.n,s.score,s.arr);
 //    printf("%s\n", buf);

 //    //从buf中读取格式化的数据到tmp中
 //    sscanf(buf, "%d %f %s", &(tmp.n),&(tmp.score),tmp.arr);

 //    printf("%d %f %s\n", tmp.n,tmp.score,tmp.arr);
 //    return 0;
 //}