#include <stdio.h>

void pointChange(int *a, int *b);
void change(int a, int b);
//*をつけるとポインタを格納できる。
int main() {
    int a = 5;
    //*をつけるとint型のポインタを格納できる。
    int *pA;

    pA = &a;

    //aで値&aでアドレスがわかる。
    printf("変数aの値は%dです。\n", a);
    printf("変数aのアドレスは%pです。\n", &a);
    /*
    *pAでポインタが指している値、*なしでアドレスを指す。
    個人的なイメージ
    aで変数を設定しあるアドレスに格納する。
    *pAでaの位置をポインタとして指す。
    */
    printf("*pAの値は%dです。\n", *pA);
    printf("ポインタpAの値は%pです。\n", pA);

    /*
    以下実験、変数をどう変更するか。
    aにbを関数を使って代入したい。
    */
    int b = 10;
    /*
    aにbを代入する。
    関数は値渡し。
    */
    change(a, b);
    printf("現在のaの値は%dである。\n", a);

    /*
    ポインタを変える。
    これで代入できる。
    */
    pointChange(&a, &b);
    printf("現在のaの値は%dである。", a);


    return 0;
}

void change(int a, int b) {
    a = b;    
}

void pointChange(int *a, int *b) {
    *a = *b;
}
