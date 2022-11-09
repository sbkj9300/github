#include <stdio.h>
//typedefで略称をつけられる。
typedef struct Car
{
    int num;
    double gas;
} Car;//このCarが略称

int main() {
    //structがいらなくなった。
    Car car;
    car.num = 100;
    car.gas = 24.4;

    //コンストラクタみたいに順に代入もできる。
    Car car1 = {200, 24.4};

    /*
    構造体同士の代入も可能
    同じメンバを順に代入していく。
    */
    car = car1;


    return 0;
}
