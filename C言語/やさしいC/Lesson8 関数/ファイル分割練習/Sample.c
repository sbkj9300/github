#include <stdio.h>
//ここで読み込める
#include "myfunc.h"

int main(void) {
    int num[2] = {9000, 9289};

    printf("大きい方の数字は%dです。",max(num[0], num[1]));

    return 0;
}