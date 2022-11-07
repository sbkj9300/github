#include <stdio.h>
//標準出力

int main(void) {
    int num = 3;

    printf("変数numの値は%dです。\n", num);

    num = 5;

    printf("変数の値を更新しました。\n");
    printf("変数numの値は%dです。", num);

    return 0;
}
