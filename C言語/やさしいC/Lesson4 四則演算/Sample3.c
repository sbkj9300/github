#include <stdio.h>
//入力値合計プログラム
int main(void) {
    int num1, num2;

    printf("num1の値を入力してください。\n");
    scanf("%d", &num1);

    printf("num2の値を入力してください。\n");
    scanf("%d", &num2);

    printf("入力された値の合計は%dです。", num1 + num2);

    return 0;
}