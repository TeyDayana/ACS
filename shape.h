#ifndef __shape__
#define __shape__

//------------------------------------------------------------------------------
// shape.h - �������� �������� ���������� �������������� ������
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

//------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ������
struct shape {
    // �������� ������ ��� ������ �� �����
    enum key { RECTANGLE, TRIANGLE, CIRCLE };
    enum color { RED, ORANGE, YELLOW, GREEN, CYAN, BLUE, PURPLE, NONE };
    key k; // �����
    color col;
    // ������������ ������������
    union { // ���������� ���������� ����������
        rectangle r;
        triangle t;
        circle c;
    };
};

// ���� ���������� ������
shape* In(FILE *file, int k);

// ��������� ���� ����� �� �����
shape::color Color(int n);

// ��������� ���� ���������� ������
shape* InRnd();

// ����� ���������� ������
void Out(shape& s, FILE* file);

// ������ ����� � ����
void ColorPrint(shape::color color, FILE* file);

// ���������� ��������� ���������� ������
double Perimeter(shape& s);

#endif
