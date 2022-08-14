#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "contact.h"

//ʵ�ֺ���
////��⵱ǰͨѶ¼����������,�����ͷ�����
static void CheckCapacity(struct Contact* pc)
{
    if (pc->capacity == 0)
    {
        //����
        struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->size + 2) * sizeof(struct PeoInfo));
        if (ptr != NULL)
        {
            pc->data = ptr;
            pc->capacity = 2;
            printf("���ݳɹ�!\n");
        }
        else
        {
            printf("����ʧ��!\n");
        }
    }
}

//�����ļ��е���Ϣ��ͨѶ¼�к�������
void LoadContact(struct Contact* pc)
{
    struct PeoInfo tmp = { 0 };
    FILE* pfRead = fopen("contact.data", "rb");
    if (pfRead == NULL)
    {
        printf("LoadContact::%s\n", strerror(errno));
        return;
    }

    //��ȡ�ļ�,��ŵ�ͨѶ¼��
    while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
    {
        CheckCapacity(pc);
        pc->data[pc->size] = tmp;
        pc->size++;
    }
    fclose(pfRead);
    pfRead = NULL;
}

//ʵ�ֳ�ʼ������
void InitContact(struct Contact* pc)
{
    pc->data = (struct PeoInfo*)malloc(DEFAULT_SIZE * sizeof(struct PeoInfo));
    if (pc->data == NULL)
    {
        return;
    }
    pc->size = 0; //����ͨѶ¼���ֻ��0��Ԫ��
    pc->capacity = DEFAULT_SIZE;

    //���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
    LoadContact(pc);
}

//��Ӻ���ʵ��
void AddContact(struct Contact* pc)
{
    //��⵱ǰͨѶ¼������
    CheckCapacity(pc);
    //��������
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
    pc->capacity--;
    printf("��ӳɹ�!\n");
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
int SizeStructPerInfo()
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
        pc->capacity++;
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
        for (j = 0; j < pc->size - 1 - i; i++)
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

//���ٺ�����ʵ��
void DestoryContact(struct Contact* pc)
{
    free(pc->data);
    pc->data = NULL;
    printf("�����ڴ�ռ�ɹ�!\n");
}

//���溯����ʵ��
void SaveContact(struct Contact* pc)
{
    FILE* pfWrite = fopen("contact.data", "wb");
    if (pfWrite == NULL)
    {
        printf("SaveContact::%s\n", strerror(errno));
        return;
    }
    //дͨѶ¼�е����ݵ��ļ���
    int i = 0;
    for (i = 0; i < pc->size; i++)
    {
        fwrite(&(pc->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
    }
    fclose(pfWrite);
    pfWrite = NULL;
}