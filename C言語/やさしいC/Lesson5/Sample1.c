#include <stdio.h>
//if文はほとんどjavaと同じ。
int main(void) {
    int res;
    printf("数字を入力してください。\n");

    scanf("%d", &res);

    if(res < 10) {
        printf("入力値は10未満です。\n");
    } else if(res == 10) {
        printf("入力値は10です。\n");
    } else {
        printf("入力値は10超過です。\n");
    }
    printf("処理を終了します。");
    return 0;
}