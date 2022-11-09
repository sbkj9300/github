#include <stdio.h>
//ファイル読み込み
int main() {
    FILE *fp;
    char str1[20];
    char str2[60];

    fp = fopen("test1.txt", "r");

    if(fp == NULL) {
        puts("ファイルをひらけませんでした。");
        return 1;
    }

    fgets(str1, 19, fp);
    fgets(str2, 59,fp);

    printf("%s",str1);
    printf("%s",str2);

    return 0;
    
}