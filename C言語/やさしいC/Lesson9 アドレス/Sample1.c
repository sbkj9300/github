#include <stdio.h>
//&演算子でアドレスがわかる。
int main() {
    int a;
    a = 5;

    printf("変数aの値は%dです。\n", a);
    printf("変数aのアドレスは%pです。", &a);

    return 0;
}