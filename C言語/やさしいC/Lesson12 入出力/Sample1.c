#include <stdio.h>
///出力方法は色々と指定できる。
int main() {
    int i;
    //左に3文字幅
    for(i = 0; i < 5; i++) {
        printf("%3d", i);
    }
    puts("");
    //右に3文字幅
    for(i = 0; i < 5; i++) {
        printf("%-3d", i);
    }
    puts("");
    //少数第3桁まで
    double a = 3.14159265258979;
    printf("%.3lf", a);
}
