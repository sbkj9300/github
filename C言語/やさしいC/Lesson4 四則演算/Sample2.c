#include <stdio.h>
//基本的な計算
int main(void) {
    int num1 = 3;
    int num2 = 5;
    int sum = num1 + num2;

    printf("変数num1の値は%dです。\n", num1);
    printf("変数num2の値は%dです。\n", num2);
    printf("合計sumの値は%dです。\n", sum);

    num1 = num1 + 2;

    printf("num1に2を足すと%dになります。", num1);

    return 0;
}