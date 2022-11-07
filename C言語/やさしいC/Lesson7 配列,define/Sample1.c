#include <stdio.h>
//define 変数名　置換する対象で実行時に変数を全て置き換えられる。
#define NUM 5
//配列
int main(void) {
    //足りない分は0が補われる。
    int test[NUM] = {80,90,50};

    for(int i = 0;i < NUM; i++){
        printf("%d番目の数は%dです。\n", i + 1, test[i]);
    }

    return 0;

}