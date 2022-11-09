#include <stdio.h>
/*
構造体のポインタを関数に引き渡すときはアロー関数を使う。
ちなみにポインタではなく構造体をそのまま渡すとやっぱり直渡しになる。
メンバをそれぞれコピーして引き渡される。
*/
typedef struct Car {
    int num;
    double gas;
} Car;
void show(Car *pC);

int main() {
    Car car1 = {3, 3.4};
    show(&car1);
    return 0;
}
void show(Car *pC) {
    //アロー関数
    printf("num: %d, gas: %lf", pC -> num,pC -> gas);
}
