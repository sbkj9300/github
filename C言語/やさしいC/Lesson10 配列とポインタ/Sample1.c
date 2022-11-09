#include <stdio.h>
//配列名は先頭要素のポインタとして機能する。
int main() {
    int test[5] = {80, 60, 55, 22, 75};

    printf("test[0]の値は%dです。\n", test[0]);
    printf("test[0]のアドレスは%pです。\n", &test[0]);
    printf("test[0]の値は%dです。\n", test[1]);
    printf("test[0]のアドレスは%pです。\n", &test[1]);

    //配列名自体が先頭要素のポインタになっている。
    printf("testが指すアドレスは%pです。\n", test);
    printf("testの指す値は%dです。\n", *test);

    return 0;
}