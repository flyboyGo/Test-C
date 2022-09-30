#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct S
{
    char name[20];
    int age;
    double score;
};

/*
*   size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
*   如果成功，该函数返回一个 size_t 对象，表示元素的总数，该对象是一个整型数据类型。
    如果该数字与 nmemb 参数不同，则会显示一个错误。
*/
 //int main()
 //{
 //    struct S s = {"李鹏飞",23,89};
 //    FILE* pf = fopen("test.txt", "wb");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //二进制的形式写文件
 //    int ret = fwrite(&s, sizeof(struct S), 1, pf);
 //    printf("%d\n", ret); // 1

 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


/*
   size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
   成功读取的元素总数会以 size_t 对象返回，size_t 对象是一个整型数据类型。
   如果总数与 nmemb 参数不同，则可能发生了一个错误或者到达了文件末尾。

*/
 //int main()
 //{
 //    struct S tmp = {0};
 //    FILE* pf = fopen("test.txt", "rb");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //二进制的形式读文件
 //    fread(&tmp, sizeof(struct S), 1, pf);
 //    printf("%s %d %.2lf\n", tmp.name,tmp.age,tmp.score);

 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


/*
*   int fseek(FILE *stream, long int offset, int whence)
*   如果成功，则该函数返回零，否则返回非零值。
*/
 //int main()
 //{
 //    FILE* pf = fopen("test.txt", "r");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //1、定位文件指针b
 //    //SEEK_CUR 文件指针的当前位置
 //    //SEEK_END 文件指针的末尾位置
 //    //SEEK_END 文件指针的起始位置
 //    //fseek(pf, 2, SEEK_CUR);
 //    fseek(pf, -2, SEEK_END);

 //    //2、读取文件
 //    int ch = fgetc(pf);
 //    printf("%c\n", ch);

 //    //3、关闭文件
 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}


//int mian()
//{
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        return 0;
//    }
//
//    fseek(pf, -2, SEEK_END);
//    int pos = ftell(pf);
//    printf("%d\n", pos);
//
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}


/*
*   void rewind(FILE *stream)
*   long int ftell(FILE *stream)
*   该函数返回位置标识符的当前值。如果发生错误，则返回 -1L，全局变量 errno 被设置为一个正值。
*/
//int main()
//{
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        return 0;
//    }
//
//    fseek(pf, -2, SEEK_END);
//    int pos = ftell(pf);
//    printf("%d\n", pos);
//
//    rewind(pf);
//    pos = ftell(pf);
//    printf("%d\n", pos);
//
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}



//int main()
//{
//    //feof(); //EOF(-1) -end of file --文件结束标志
//    //在文件读取过程中,不能用feof函数的返回值直接用来判断文件是否结束
//    //而是应用与当文件读取结束的时候,判断是否读取失败,还是遇到文件尾结束
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        return 0;
//    }
//    int ch = fgetc(pf);
//    printf("%d\n", ch);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


/*
*   void perror(const char *str) 
    把一个描述性错误消息输出到标准错误 stderr。首先输出字符串 str，后跟一个冒号，然后是一个空格。
*/
 //int main()
 //{
 //    //strerror -- 把错误码对饮的错误信息的字符串地址返回
 //    //printf("%s\n", strerror(errno));

 //    //perror
 //    FILE* pf = fopen("test2.txt", "r");
 //    if(pf == NULL)
 //    {
 //        perror("open file test2.txt");
 //        return 0;
 //    }

 //    //读文件
 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}


/*
*    int ferror(FILE *stream)
*    如果设置了与流关联的错误标识符，该函数返回一个非零值，否则返回一个零值。
*/

//int main(void)
//{
//    int c; // 注意：int，非char，要求处理EOF
//    FILE* fp = fopen("test.txt", "r");
//
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//
//    //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//    while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//    {
//        putchar(c);
//    }
//    printf("\n");
//
//    //判断是什么原因结束的
//    if (ferror(fp))
//    {
//        puts("I/O error when reading");
//    }
//    else if (feof(fp))
//    {
//        puts("End of file reached successfully");
//    }
//       
//    fclose(fp);
//    fp = NULL;
//}



//enum { SIZE = 5 };
//int main(void)
//{
//    double a[SIZE] = { 1.,2.,3.,4.,5. };
//    FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//    fwrite(a, sizeof(a[0]), SIZE, fp); // 写 double 的数组
//    fclose(fp);
//
//    double b[SIZE];
//    fp = fopen("test.bin", "rb");
//    size_t ret_code = fread(b, sizeof(a[0]), SIZE, fp); // 读 double 的数组
//
//    if (ret_code == SIZE) {
//        puts("Array read successfully, contents: ");
//        for (int n = 0; n < SIZE; ++n) printf("%.3lf ", b[n]);
//        putchar('\n');
//    }
//    else { // error handling
//        if (feof(fp))
//            printf("Error reading test.bin: unexpected end of file\n");
//        else if (ferror(fp)) {
//            perror("Error reading test.bin");
//        }
//    }
//    fclose(fp);
//}
