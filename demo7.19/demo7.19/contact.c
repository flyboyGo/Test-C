#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
#include <memory.h>
#include <string.h>

//ʵ�ֺ���
//ʵ�ֳ�ʼ������
void InitContact(struct Contact* pc)
{
    memset(pc->data, 0, sizeof(pc->data));
    pc->size = 0; //����ͨѶ¼���ֻ��0��Ԫ��
}

//��Ӻ���ʵ��
void AddContact(struct Contact* pc)
{
    if (pc->size == MAX)
    {
        printf("ͨѶ¼����,�޷�����!");
    }
    else
    {
        printf("����������:>");
        scanf("%s", pc->data[pc->size].name);
        printf("����������:>");
        scanf("%d", &(pc->data[pc->size].age));
        printf("�������Ա�:>");
        scanf("%s", pc->data[pc->size].sex);
        printf("������绰:>");
        scanf("%s", pc->data[pc->size].tele);
        printf("�������ַ:>");
        scanf("%s", pc->data[pc->size].addr);

        pc->size++;
        printf("��ӳɹ�!\n");
    }
}

//��װ���Һ���,���static�ı亯����������,ֻ�ڱ��ļ���������
//static����ȫ�ֱ���,�ı�ȫ�ֱ�����������,ֻ�ڱ��ļ���������
//static���ξֲ�����,�ı�ֲ���������������,ֱ��������Ŀ����
static int FindByName(const struct Contact* pc, char name[MAX_NAME])
{
    int i = 0;
    for (i = 0; i < pc->size; i++)
    {
        if (0 == strcmp(pc->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}

//��װ����ṹ��struct PeoInfo ����ı�����ռ�ռ�Ĵ�С
static int SizeStructPerInfo()
{
    return sizeof(struct PeoInfo);
}

//ɾ������ʵ��
void DelContact(struct Contact* pc)
{
    char name[MAX_NAME];
    printf("������Ҫɾ���˵�����:>");
    scanf("%s", name);
    //1������Ҫɾ���˵�λ��
    //�ҵ���������ָ�����±�,�Ҳ�������-1
    int pos = FindByName(pc, name);

    //2��ɾ��
    if (pos == -1)
    {
        printf("δ�ҵ�ָ������!");
    }
    else
    {
        //ɾ������
        /*int j = 0;
        for (j = pos; j < pc->size - 1; j++)
        {
            pc->data[j] = pc->data[j + 1];
        }*/

        memmove(&(pc->data[pos]), &(pc->data[pos + 1]), (pc->size - pos - 1) * SizeStructPerInfo());

        pc->size--;
        printf("ɾ���ɹ�!\n");
    }
}

//���Һ���ʵ��
void SearchContact(const struct Contact* pc)
{
    char name[MAX_NAME];
    printf("������Ҫ�����˵�����:>");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf("���ҵ��˲�����!");
    }
    else
    {
        printf("%-5s\t %-11s\t %-5s\t %-5s\t %-20s\n", "����", "�绰", "�Ա�", "����", "��ַ");
        printf("%-5s\t %-11s\t %-5s\t %-5d\t %-20s\n",
            pc->data[pos].name,
            pc->data[pos].tele,
            pc->data[pos].sex,
            pc->data[pos].age,
            pc->data[pos].addr);
    }
}

//�޸ĺ���ʵ��
void ModifyContact(const struct Contact* pc)
{
    char name[MAX_NAME];
    printf("������Ҫ�޸��˵�����:>");
    scanf("%s", name);
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf("��ĵ�������������!\n");
    }
    else
    {
        printf("����������:>");
        scanf("%s", pc->data[pos].name);
        printf("����������:>");
        scanf("%d", &(pc->data[pos].age));
        printf("�������Ա�:>");
        scanf("%s", pc->data[pos].sex);
        printf("������绰:>");
        scanf("%s", pc->data[pos].tele);
        printf("�������ַ:>");
        scanf("%s", pc->data[pos].addr);

        printf("�޸ĳɹ�!\n");
    }
}

//��װ��������,���static�ı亯����������,ֻ�ڱ��ļ���������
static void SwapData(struct PeoInfo* pp, struct PeoInfo* pp2)
{
    struct PeoInfo tmp;

    tmp.age = pp->age;
    strcpy(tmp.name, pp->name);
    strcpy(tmp.addr, pp->addr);
    strcpy(tmp.sex, pp->sex);
    strcpy(tmp.tele, pp->tele);

    strcpy(pp->name, pp2->name);
    strcpy(pp->addr, pp->addr);
    strcpy(pp->sex, pp->sex);
    strcpy(pp->tele, pp->tele);
    pp->age = pp2->age;

    strcpy(pp2->name, tmp.name);
    strcpy(pp2->addr, tmp.addr);
    strcpy(pp2->sex, tmp.sex);
    strcpy(pp2->tele, tmp.tele);
    pp2->age = tmp.age;

}
//������ʵ��,����������Ϊ����ı�׼
void SortContact(struct Contact* pc)
{
    int i = 0;
    for (i = 0; i < pc->size - 1; i++)
    {
        int j = 0;
        for (j = 0; j < pc->size - 1 - i; j++)
        {
            if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
            {
                SwapData(&(pc->data[j]), &(pc->data[j + 1]));
            }
        }
    }
    printf("����ɹ�!\n");
}

//��ӡ����ʵ��
void ShowContact(const struct Contact* pc)
{
    if (pc->size == 0)
    {
        printf("ͨѶ¼Ϊ��!\n");
    }
    else
    {
        int i = 0;
        printf("%-5s\t %-11s\t %-5s\t %-5s\t %-20s\n",
            "����", "�绰", "�Ա�", "����", "��ַ");
        for (i = 0; i < pc->size; i++)
        {
            printf("%-5s\t %-11s\t %-5s\t %-5d\t %-20s\n",
                pc->data[i].name,
                pc->data[i].tele,
                pc->data[i].sex,
                pc->data[i].age,
                pc->data[i].addr);
        }
    }
}