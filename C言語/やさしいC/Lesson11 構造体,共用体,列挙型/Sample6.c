#include <stdio.h>
//共用体unionは値を一つしか記憶できない。
typedef union Year{
    int ad;
    int gengo;
    char eto;
} Year;
void show(Year *year);
int main() {
    Year year;

    //いちいち全部書き変わる。
    year.ad = 2000;
    year.gengo = 12;
    year.eto = 'A';
    show(&year);
    //Aは65らしい。
    printf("%d", 'A');
    
}

void show(Year *year) {
    printf("ad : %d \n", year -> ad);
    printf("gengo : %d \n", year -> gengo);
    printf("eto : %d \n", year -> eto);
    
}
