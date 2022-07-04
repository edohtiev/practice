/*
* @file main.cpp
* @author ������ �. �. ��. 515-�
* @date 7 ����� 2022
* @brief ˳��� ��������
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

int intersection_check(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
void result_output(int intersection_check);

void main()
{
    setlocale(LC_ALL, "rus");
    int x1, y1, x2, y2, x3, y3, x4, y4;
    //�������� ������
    printf("������� ���������� ������ ����� ������� ������� (x1;y1)\n");
    scanf_s("%i %i", &x1, &y1);
    printf("������� ���������� ������ ����� ������� ������� (x2;y2)\n");
    scanf_s("%i %i", &x2, &y2);
    printf("������� ���������� ������ ����� ������� ������� (x3;y3)\n");
    scanf_s("%i %i", &x3, &y3);
    printf("������� ���������� ������ ����� ������� ������� (x4;y4)\n");
    scanf_s("%i %i", &x4, &y4);
    result_output(intersection_check(x1, y1, x2, y2, x3, y3, x4, y4));
}