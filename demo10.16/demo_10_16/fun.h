#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>

//��������
void print_help(void);

//��ȡԴ�ļ���Ŀ���ļ����ļ���
void get_file_name(char* dest_file_name, char* src_file_name);

//��ȡԴ�ļ��� �ļ�����
char * read_src_file(unsigned long * file_length, char* src_file_name);

//���ܺ���
char* file_text_encrypt(char* src_file_text, unsigned long length, unsigned int password);

//���ܺ���
char* file_text_decrypt(char* src_file_text, unsigned long length, unsigned int password);

//���溯��
void save_file(char* text, unsigned long length, char* file_name);