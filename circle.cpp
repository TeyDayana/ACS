//------------------------------------------------------------------------------
// circle.cpp - �������� ��������� ��� ������ � ������
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include "stdio.h"
#include "math.h"
#include "circle.h"

//------------------------------------------------------------------------------
// ���� ���������� ����� �� ������
void In(circle& c, FILE* file) {
    fscanf(file, "%d", &c.x_c);
    fscanf(file, "%d", &c.y_c);
    fscanf(file, "%d", &c.r);
}

// ��������� ���� ���������� �����
void InRnd(circle& c) {
    c.x_c = Random();
    c.y_c = Random();
    c.r = Random();
}

//------------------------------------------------------------------------------
// ����� ���������� ����� � �����
void Out(circle& c, FILE* file) {
    fprintf(file, "It is Circle. Center: x = %d, y = %d. Radius: r = %d. Perimeter = %f. Color: ",
        c.x_c, c.y_c, c.r, Perimeter(c));
}

//------------------------------------------------------------------------------
// ���������� ����� �����
double Perimeter(circle& c) {
    return 2 * M_PI * c.r;
}