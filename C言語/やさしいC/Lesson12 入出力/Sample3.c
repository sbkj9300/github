#include <stdio.h>
#define DEBUG
//条件付きコンパイル
int main() {
    int i;
    int sum = 0;
    for(i = 1; i <= 5; i++) {
        //DEBUGが定義されているかどうかでコンパイルするかどうかが選ばれる。
        #ifdef DEBUG
            printf("変数sum:%d\n",sum);
        #endif
        sum = sum + i;
    }

    printf("答え:%d\n", sum);
    //組み込みマクロ
    printf("ソースファイル名: %s\n", __FILE__);
    fprintf(stderr, "作成日付 %s\n", __DATE__);
    fprintf(stderr, "作成日時 %s\n", __TIME__);

    return 0;
}