#include <stdio.h>

 //&変数でアドレスがわかる

int y;
int main(void) {
    int x = 4;

    printf("xの格納位置は%p\n", &x);
    printf("yの格納位置は%p", &y);
    return 0;
}