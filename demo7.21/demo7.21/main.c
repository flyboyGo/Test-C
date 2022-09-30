#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf); //�����Ƶ���ʽд�뵽�ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <string.h>
#include <errno.h>

/*
    FILE *fopen(const char *filename, const char *mode)
    �ú�������һ�� FILE ָ�롣���򷵻� NULL��������ȫ�ֱ��� errno ����ʶ����


    int fclose(FILE *stream) 
    ������ɹ��رգ���÷��������㡣���ʧ�ܣ��򷵻� EOF��
*/
//�ļ��Ĵ���ر�
//int main()
//{
//	//���ļ�tes.txt
//	//.. ��ʾ��һ��·��
//	// . ��ʾ��ǰ·��
//	//fopen("D:\\VisualStudioWorkPlace\\demo7.21\\demo7.21\\test.txt", "r");//����·��
//
//	FILE* pf = fopen("test.txt", "r"); //���·��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//�򿪳ɹ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


/*
   int fgetc(FILE *stream) ��ָ������ stream ��ȡ��һ���ַ���һ���޷����ַ���������λ�ñ�ʶ����ǰ�ƶ���
   �ú������޷��� char ǿ��ת��Ϊ int ����ʽ���ض�ȡ���ַ�����������ļ�ĩβ�����������򷵻� EOF��

   int fputc(int char, FILE *stream) �Ѳ��� char ָ�����ַ���һ���޷����ַ���д�뵽ָ������ stream �У�����λ�ñ�ʶ����ǰ�ƶ���
   ���û�з��������򷵻ر�д����ַ���������������򷵻� EOF�������ô����ʶ����
*/

//�ļ���˳���д
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//�ر��ļ�
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
//	//���ļ�
//	while ((c = fgetc(pfWrite)) != EOF)
//	{
//		fputc(c,stdout);
//	}
//	printf("\n");
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//�Ӽ�������
//�������Ļ
//���̡���Ļ�����ⲿ�豸

//���� -- ��׼�����豸 -- stdin
//��Ļ -- ��׼����豸 -- stdout
//��һ������Ĭ�ϴ򿪵��������豸

//stdin  FILE*
//stdout FILE*
//stderr FILE*


//��׼���롢�������ʹ��
// int main()
// {
// 	char ch = fgetc(stdin);
// 	fputc(ch, stdout);
// 	return 0;
// }


// int main()
// {
//     //���ļ�
//     FILE* pf = fopen("test.txt", "w");
//     if(pf == NULL)
//     {
//         printf("%s\n", strerror(errno));
//         return 0;
//     }

//     //д�ļ�
//     fputc('c', pf);
//     fputc('o', pf);
//     fputc('o', pf);
//     fputc('l', pf);

//     //�ر��ļ�
//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////
/*
   char* fgets(char *str, int n, FILE *stream) ��ָ������ stream ��ȡһ�У��������洢�� str ��ָ����ַ����ڡ�
   ����ȡ (n-1) ���ַ�ʱ�����߶�ȡ�����з�ʱ�����ߵ����ļ�ĩβʱ������ֹͣ�����������������
   ����ɹ����ú���������ͬ�� str ��������������ļ�ĩβ����û�ж�ȡ���κ��ַ���str �����ݱ��ֲ��䣬������һ����ָ�롣
   ����������󣬷���һ����ָ��
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

 //    //���ļ�
 //    fgets(buf, 1024, pf);
 //    //printf("%s", buf);
 //    puts(buf);//�Դ�\n

 //    fgets(buf, 1024, pf);
 //    //printf("%s", buf);
 //    puts(buf);//�Դ�\n

 //    //�ر��ļ�
 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}

/*
   int fputs(const char *str, FILE *stream) ���ַ���д�뵽ָ������ stream �У������������ַ���
   �ú�������һ���Ǹ�ֵ��������������򷵻� EOF��
*/
 //int main()
 //{
 //    char buf[1024] = {0};

 //    FILE* pf = fopen("test.txt", "w");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //д�ļ�
 //    fputs("hello\n", pf);
 //    fputs("world\n", pf);

 //    fclose(pf);
 //    pf = NULL;

 //    return 0;
 //}

// int main()
// {
//     //�Ӽ��̶�ȡһ���ı���Ϣ
//     char buf[1024] = {0};
//     //fgets(buf, 1024, stdin); //�ӱ�׼��������ȡ
//     //fputs(buf, stdout);//�������׼�����

//     //�ȼ�
//     gets(buf);
//     puts(buf);
//     return 0;
// }


/*
   int fprintf(FILE *stream, const char *format, ...) ���͸�ʽ��������� stream �С�

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

 //    //��ʽ������ʽ�������
 //    fprintf(pf, "%d %f %s", s.n,s.score,s.arr);
 //    //�ر��ļ�
 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


/*
   int fscanf(FILE *stream, const char *format, ...) ���� stream ��ȡ��ʽ�����롣

*/
 //int main()
 //{
 //    struct S s = {0};
 //    FILE* pf = fopen("text.txt", "r");
 //    if(pf == NULL)
 //    {
 //        return 0;
 //    }

 //    //��ʽ������ʽ��������
 //    fscanf(pf, "%d %f %s", &(s.n),&(s.score),s.arr);
 //    printf("%d %f %s", s.n,s.score,s.arr);

 //    //�ر��ļ�
 //    fclose(pf);
 //    pf = NULL;
 //    return 0;
 //}


//��׼���롢�����
// int main()
// {
//     struct S s = {0};
//     fscanf(stdin, "%d %f %s", &(s.n),&(s.score),s.arr);
//     fprintf(stdout, "%d %.3f %s", s.n,s.score,s.arr);
//     return 0;
// }

/*
    scanf/printf ����Ա�׼������/��׼������ĸ�ʽ������/������
    fscanf/fprintf ���������������/���������������/������
    sscanf/sprintf sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
                   sprintf�ǰѸ�ʽ�����������(�洢��)�ַ���
*/


 //int main()
 //{
 //    struct S s = {100, 3.14f, "abcdef"};
 //    struct S tmp = {0};
 //    char buf[1024] = {0};
 //    //�Ѹ�ʽ��������ת�����ַ����洢��buf
 //    sprintf(buf, "%d %f %s", s.n,s.score,s.arr);
 //    printf("%s\n", buf);

 //    //��buf�ж�ȡ��ʽ�������ݵ�tmp��
 //    sscanf(buf, "%d %f %s", &(tmp.n),&(tmp.score),tmp.arr);

 //    printf("%d %f %s\n", tmp.n,tmp.score,tmp.arr);
 //    return 0;
 //}