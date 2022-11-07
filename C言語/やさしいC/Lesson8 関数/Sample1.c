#include <stdio.h>
//関数形式マクロ (引数のうち大きい方の値を返すマクロ)
//引数の型が決まっていないのでint,doubleなどなんでも入る。
//型に気をつけたいときは使わない。
#define MAX(x, y) (x > y ? x :y)

int main(void) {
    int num[3] = {10, 90, 2000};
    //MAX(x, y)が使える。
    printf("1番大きい数は%dです。", MAX(num[0], MAX(num[1], num[2])));

    return 0;
}