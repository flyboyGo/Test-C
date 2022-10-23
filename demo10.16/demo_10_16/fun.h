#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>

//交互函数
void print_help(void);

//获取源文件、目标文件的文件名
void get_file_name(char* dest_file_name, char* src_file_name);

//获取源文件的 文件内容
char * read_src_file(unsigned long * file_length, char* src_file_name);

//加密函数
char* file_text_encrypt(char* src_file_text, unsigned long length, unsigned int password);

//解密函数
char* file_text_decrypt(char* src_file_text, unsigned long length, unsigned int password);

//保存函数
void save_file(char* text, unsigned long length, char* file_name);