#include <stdio.h>
//標準入力 小数
int main(void) {
    double num;
    printf("小数を入力してください。\n");

    scanf("%lf", &num);
    printf("%fが入力されました。", num);

    return 0;
}