#include <stdio.h>

//メンバをビットフィールドにすると利用するメモリが減る

typedef struct Car1
{
    int num;
    double gas;
    //unsigned intは4バイトだが: 3で指定しておくと3ビットしか使わない。
    unsigned int tire : 3;
    unsigned int roof : 1;
    unsigned int color : 4;
} Car1 ;
//ビットフィールドなし
typedef struct Car2
{
    int num;
    double gas;
    unsigned int tire;
    unsigned int roof;
    unsigned int color;
} Car2 ;

int main() {
    //使ってるメモリの量が違う。
    printf("Car1のサイズ: %lu Car2のサイズ: %lu", sizeof(Car1), sizeof(Car2));
}
