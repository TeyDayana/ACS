#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - ???????? ??? ??????,
// ?????????????? ?????????? ?????????
//------------------------------------------------------------------------------

#include "stdio.h"
#include "shape.h"

//------------------------------------------------------------------------------
// ?????????? ????????? ?? ?????? ??????????? ???????
struct container {
    enum { max_len = 10000 }; // ???????????? ?????
    int len; // ??????? ?????
    shape* cont[max_len];
};

// ????????????? ??????????
void Init(container& c);

// ??????? ?????????? ?? ????????? (???????????? ??????)
void Clear(container& c);

// ???? ??????????? ?????????? ?? ?????????? ??????
void In(container& c, FILE *file);

// ????????? ???? ??????????? ??????????
void InRnd(container& c, int size);

// ????? ??????????? ?????????? ? ????????? ?????
void Out(container& c, FILE* file);

// ????? ????????? ?????? ??????????
void ProcessingVar23(container& c, FILE* file);

#endif
