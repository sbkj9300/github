#include <stdio.h>
//ポインタを変更する。
int main() {
    int a, b;
    int *pA;

    a = 5;
    b = 10;

    pA = &a;

    printf("変数aの値は%dです。\n", a);
    printf("ポインタpAの値は%pです。\n", pA);
    printf("*pAの値は%dです。\n", *pA);

    //ポインタを変更
    pA = &b;
    printf("変数bの値は%dです。\n", b);
    printf("ポインタpAの値は%pです。\n", pA);
    printf("*pAの値は%dです。", *pA);

    return 0;
}