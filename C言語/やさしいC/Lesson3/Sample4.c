#include <stdio.h>
//標準入力　char (一文字)
int main(void) {
    char ch;

    printf("一文字入力してください。\n");

    ch = getchar();

    printf("%cが入力されました。",ch);

    return 0;
}