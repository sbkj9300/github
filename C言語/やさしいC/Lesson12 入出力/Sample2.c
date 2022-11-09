#include <stdio.h>
//scanfとgets_s
int main() {
    char str1[100];
    char str2[100];

    puts("scanfでは空白は読めません。");
    scanf("%s", str1);
    printf("結果: %s", str1);

    //多分今の環境で使えない

    // puts("gets_sでは空白も読めます。");
    // gets_s(str2, 100);
    // printf("結果: %s", str2);

    int ch;
    puts("getchar(),putchar()でcontrol+Z+Enterを押すまで入力値をそのまま返します。");
    while((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}