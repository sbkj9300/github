#include <stdio.h>
//switch文　これもjavaと同じ
int main(void) {
    int res;
    printf("整数を入力してください。\n");
    scanf("%d", &res);

    switch(res) {
        case 1:
            printf("入力値は1です。\n");
            break;
        case 2:
            printf("入力値は2です。\n");
            break;
        default:
            printf("入力値は1,2ではありません。\n");
            break;
    }
    return 0;
}