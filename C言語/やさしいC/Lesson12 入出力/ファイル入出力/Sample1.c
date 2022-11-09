#include <stdio.h>

int main() {
    FILE *fp;
    /*開くファイルをオープンモード(wは書き込み,rは読み込みみたいな感じ。)
    ファイルがなければ作成してくれる。
    追記はa
    */
    fp = fopen("test1.txt", "w");
    
    if(fp == NULL) {
        puts("ファイルをオープンできませんでした。");
        return 1;
    } else {
        puts("ファイルをオープンしました。");
    }
    fputs("書き込み！\n", fp);
    fputs ("もう一回書き込み!", fp);
    puts("書き込みました。");

    fclose(fp);
    puts("ファイルをクローズしました。");

    return 0;

}