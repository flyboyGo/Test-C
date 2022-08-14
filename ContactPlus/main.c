#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//�˵�
void menu()
{
    printf("*******************************\n");
    printf("******1��add     2��del********\n");
    printf("******3��search  4��modify*****\n");
    printf("******5��show    6��sort*******\n");
    printf("******7��save    0��exit*******\n");
    printf("*******************************\n");
}

int main(void) {
    int input = 0;
    //����ͨѶ¼
    struct Contact con;//con����ͨѶ¼,�������capacity������size������dataָ��
    //��ʼ��ͨѶ¼
    InitContact(&con);
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case SEARCH:
            SearchContact(&con);
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case SORT:
            SortContact(&con);
            break;
        case EXIT:
            SaveContact(&con);
            //����ͨѶ¼--�ͷŶ�̬���ٵ��ڴ�
            DestoryContact(&con);
            printf("�Ƴ�ͨѶ¼!\n");
            break;
        case SAVE:
            SaveContact(&con);
            printf("����ɹ�!\n");
            break;
        default:
            printf("�������!\n");
            break;
        }
    } while (input);

    return 0;
}
