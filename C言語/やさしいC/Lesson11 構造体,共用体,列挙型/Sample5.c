#include <stdio.h>
//メンバにポインタを含めて構造体を数珠繋ぎできる
typedef struct Car
{
    int num;
    double gas;
    //Carのポインタをメンバにする。
    struct Car *next;
} Car;
int main() {
    Car car0 = {12, 25.5};
    Car car1 = {23, 24.4};
    Car car2 = {34, 23.3};

    //順番につなげていく
    car0.next = &car1;
    car1.next = &car2;
    car2.next = NULL;
    
    //for文で回せる
    Car *pCar;
    for(pCar = &car0; pCar != NULL; pCar = pCar -> next) {
        printf("num: %d, gas: %lf \n", pCar -> num, pCar -> gas);
    }
}