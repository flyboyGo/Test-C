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
*   ����ɹ����ú�������һ�� size_t ���󣬱�ʾԪ�ص��������ö�����һ�������������͡�
    ����������� nmemb ������ͬ�������ʾһ������
*/
 //int main()
 //{
 //    struct S s = {"������",23,89};
 //    FILE* pf = fopen("test.txt", "wb");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //�����Ƶ���ʽд�ļ�
 //    int ret = fwrite(&s, sizeof(struct S), 1, pf);
 //    printf("%d\n", ret); // 1

 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


/*
   size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
   �ɹ���ȡ��Ԫ���������� size_t ���󷵻أ�size_t ������һ�������������͡�
   ��������� nmemb ������ͬ������ܷ�����һ��������ߵ������ļ�ĩβ��

*/
 //int main()
 //{
 //    struct S tmp = {0};
 //    FILE* pf = fopen("test.txt", "rb");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //�����Ƶ���ʽ���ļ�
 //    fread(&tmp, sizeof(struct S), 1, pf);
 //    printf("%s %d %.2lf\n", tmp.name,tmp.age,tmp.score);

 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


/*
*   int fseek(FILE *stream, long int offset, int whence)
*   ����ɹ�����ú��������㣬���򷵻ط���ֵ��
*/
 //int main()
 //{
 //    FILE* pf = fopen("test.txt", "r");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //1����λ�ļ�ָ��b
 //    //SEEK_CUR �ļ�ָ��ĵ�ǰλ��
 //    //SEEK_END �ļ�ָ���ĩβλ��
 //    //SEEK_END �ļ�ָ�����ʼλ��
 //    //fseek(pf, 2, SEEK_CUR);
 //    fseek(pf, -2, SEEK_END);

 //    //2����ȡ�ļ�
 //    int ch = fgetc(pf);
 //    printf("%c\n", ch);

 //    //3���ر��ļ�
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
*   �ú�������λ�ñ�ʶ���ĵ�ǰֵ��������������򷵻� -1L��ȫ�ֱ��� errno ������Ϊһ����ֵ��
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
//    //feof(); //EOF(-1) -end of file --�ļ�������־
//    //���ļ���ȡ������,������feof�����ķ���ֱֵ�������ж��ļ��Ƿ����
//    //����Ӧ���뵱�ļ���ȡ������ʱ��,�ж��Ƿ��ȡʧ��,���������ļ�β����
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
    ��һ�������Դ�����Ϣ�������׼���� stderr����������ַ��� str�����һ��ð�ţ�Ȼ����һ���ո�
*/
 //int main()
 //{
 //    //strerror -- �Ѵ���������Ĵ�����Ϣ���ַ�����ַ����
 //    //printf("%s\n", strerror(errno));

 //    //perror
 //    FILE* pf = fopen("test2.txt", "r");
 //    if(pf == NULL)
 //    {
 //        perror("open file test2.txt");
 //        return 0;
 //    }

 //    //���ļ�
 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}


/*
*    int ferror(FILE *stream)
*    ������������������Ĵ����ʶ�����ú�������һ������ֵ�����򷵻�һ����ֵ��
*/

//int main(void)
//{
//    int c; // ע�⣺int����char��Ҫ����EOF
//    FILE* fp = fopen("test.txt", "r");
//
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//
//    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//    {
//        putchar(c);
//    }
//    printf("\n");
//
//    //�ж���ʲôԭ�������
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
//    FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//    fwrite(a, sizeof(a[0]), SIZE, fp); // д double ������
//    fclose(fp);
//
//    double b[SIZE];
//    fp = fopen("test.bin", "rb");
//    size_t ret_code = fread(b, sizeof(a[0]), SIZE, fp); // �� double ������
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
