#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�����׵ĳ�����С
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2


//��ӡ��Ϸ�˵�����
void printMenu();
//����Ϸ����
void game();

//������ʼ������
void initScene(char prop[ROWS][COLS], int row, int col, char set);
//������ӡ����
void printScene(char scene[ROWS][COLS], int row, int col);
//������
void setMine(char mine[ROWS][COLS], int row, int col, char set);
//�Ų���
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);