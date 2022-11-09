#include <stdio.h>
int max(int x, int y);
void show0();
void show1();
void show2();
//関数ポインタ
int main() {
    /*
    関数を指し示すポインタを定義
    返り値int、引数int2つの関数のポインタになれる
    *の部分に()が必要
    */
    int (*pMax)(int x, int y) = max;
    //こんな感じで使える。
    int a = (*pMax)(1, 4);
    int b = pMax(3, 8);
    printf("%d,%d\n", a, b);
    /*
    関数ポインタの配列も定義できる。
    これで入力値によって似たような動作をスッキリ使い分けられる。
    */
   void (*pF[3])() = {show0, show1, show2};

   //入力値のイメージ
   int num = 2;

   //こんな感じで使うnumの値で結果が変わる。
   (*pF[num])();
   pF[num]();

}

int max(int x, int y) {
    if(x < y)
        return y;
    return x;
}

void show0() {
    puts("show0");
}
void show1() {
    puts("show1");
}
void show2() {
    puts("show2");
}
