#include <stdio.h>
//文字列をポインタで表せる。
int main(){
    char str[] = "Hello";
    char *str2 = "GoodBye";
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%p\n", str2);
    /*
    配列に別の文字列を代入はできない。
    (一文字ずつなら変えられる。)
    str[0] = 'h';
    これはエラーが出る。
    str = "Other";
    */

    /*
    ポインタに代入はできる。
    指し示す位置を変えるだけ
    */
    str2 = "OtherMsg";
    printf("%s\n", str2);
    printf("%p\n", str2);

    /*
    ポインタにscanfは使えない
    char *str;
    scanf("%s", str);
    は無理
    char str[100];
    scanf("%s", str);
    みたいに配列を用意しないといけない。
    */

    return 0;
}
