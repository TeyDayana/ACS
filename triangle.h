#ifndef __triangle__
#define __triangle__

//------------------------------------------------------------------------------
// triangle.h - �������� �������� ������������
//------------------------------------------------------------------------------

#include "stdio.h"
#include "random.h"

// �����������
struct triangle {
    int x_1, y_1; // ���������� 1�� ����
    int x_2, y_2; // ���������� 2�� ����
    int x_3, y_3; // ���������� 3�� ����
};

// ���� ���������� ������������ �� �����
void In(triangle& t, FILE *file);

// ��������� ���� ���������� ������������
void InRnd(triangle& t);

// ����� ���������� ������������ � ������������� �����
void Out(triangle& t, FILE* file);

// ���������� ��������� ������������
double Perimeter(triangle& t);

#endif //__triangle__