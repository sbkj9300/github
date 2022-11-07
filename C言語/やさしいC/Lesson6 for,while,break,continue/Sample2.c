#include <stdio.h>
//while文
int main(void) {
    int num;
    int ans = 1;
    printf("入力された整数の階乗を計算します。\n");
    scanf("%d", &num);

    while(num > 0){
        ans = ans * num;
        num --;
    }

    printf("答えは%dです。", ans);
}