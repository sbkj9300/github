#include <stdio.h>
//文字列は配列を用いて表す。とてもめんどくさそう。

int main(void) {
    //Helloを格納する。
    char str1[6];
    str1[0] = 'H';
    str1[1] = 'e';
    str1[2] = 'l';
    str1[3] = 'l';
    str1[4] = 'o';
    //最後にNULL文字\0をいれないといけない。
    str1[5] = '\0';
    //出力は一気にできる。
    printf("%s\n", str1);

    //別方法やっぱり\0のために配列の数は考えないといけない
    char str2[6] = "Hello";
    printf("%s", str2);

    //代入はできない。(以下はエラー)
    //str1 = "Hello";

    return 0;
}