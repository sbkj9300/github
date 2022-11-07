#include <stdio.h>

//関数プロトタイプ宣言
int max(int x, int y);

int main(void) {
    int num[2] = {1, 3};

    printf("大きい方の数字は%dです。", max(num[0], num[1]));
}

int max(int x, int y) {
    if(x > y) {
        return x;
    } 
    return y;
}