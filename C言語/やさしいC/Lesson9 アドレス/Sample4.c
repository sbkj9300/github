#include <stdio.h>

//引数にconstをつけると変更できなくなる。
void func(const int *pA);
//この関数は定義できない。
void func(const int *pA) {
    int b = 8;
    //この部分の変更は無効
    *pA = &b;
}