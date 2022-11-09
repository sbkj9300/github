#include <stdio.h>
//配列のポインタは演算できる、ポインタも配列のように使える。
double avg(int *pT);
double avg2(int *pT);
int main() {
    int test[5] = {20, 30, 40, 50, 60};
    double ans;

    ans = avg(test);
    printf("平均値は%lfです。\n", ans);

    ans = avg2(test);
    printf("平均値は%lfです。", ans);
    return 0;
}

double avg(int *pT) {
    int i;
    double sum = 0;

    for(i = 0; i < 5; i++) {
        //ポインタについて演算できる。
        sum += *(pT + i);
    }
    return sum/5;
}
double avg2(int *pT) {
    int i;
    double sum = 0;

    for(i = 0; i < 5; i++) {
        //ポインタについて演算できる。
        sum += pT[i];
    }
    return sum/5;

}