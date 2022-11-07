
/*ライブラリ的なやつ*/
#include <stdio.h>

int main(void) {
    //printfで標準出力
    //"\"をmacで打つには「オプションキー」＋「¥」
    printf("Hello World!!\n");

    //%〇〇で変数的にあつかえる
    printf("%cは文字です。\n", 'A');
    printf("%dは整数です。\n", 123);
    printf("%fは小数です。\n", 10.5);    
    return 0;
}