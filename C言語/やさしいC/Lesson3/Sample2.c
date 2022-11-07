#include <stdio.h>
//標準入力　整数
int main(void) {
    int num;
    printf("整数を入力してください。\n");

    scanf("%d", &num);

    printf("あなたが入力した値は%dです。", num);

    return 0;
}