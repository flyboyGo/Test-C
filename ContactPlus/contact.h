#define _CRT_SECURE_NO_WARNINGS 1
#define DEFAULT_SIZE 3

#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 50

//����ö��ѡ��
enum Option
{
    EXIT, //0
    ADD,  //1
    DEL,  //2
    SEARCH,//..
    MODIFY,
    SHOW,
    SORT,
    SAVE//7
};

//�û���ϸ��Ϣ�����
struct PeoInfo
{
    char name[MAX_NAME];
    int  age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
    struct PeoInfo* data;//����
    int size; //����
    int capacity;//����
};

//��������

//��ʼ����������
void InitContact(struct Contact* pc);

//��Ӻ�������
void AddContact(struct Contact* pc);

//���Һ�������
void SearchContact(const struct Contact* pc);

//�޸ĺ�������
void ModifyContact(const struct Contact* pc);

//����������
void SortContact(struct Contact* pc);

//��ӡ��������
void ShowContact(const struct Contact* pc);

//ɾ����������
void DelContact(struct Contact* pc);

//���ٺ���������
void DestoryContact(struct Contact* pc);

//���溯��������
void SaveContact(struct Contact* pc);

//�����ļ��е���Ϣ��ͨѶ¼�к�������
void LoadContact(struct Contact* pc);