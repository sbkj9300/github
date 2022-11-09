#include <stdio.h>
//バイナリファイルに書き込む。
int main() {
    FILE *fp;
    int test[5] = {20, 30, 40, 50, 60};
    int ans[5];
    int i;
    //バイナリファイルに書き込み
    fp = fopen("test1.bin", "wb");
    for(i = 0; i < 5; i++) {
        //引数はそれぞれ書き込む要素へのポインタ、書き込むデータサイズ、書き込む個数、書き込む対象　
        fwrite(&test[i], sizeof(int), 1, fp);
    }
    fclose(fp);
    //バイナリファイル読み込み
    fp = fopen("test1.bin", "rb");
    for(i = 0; i < 5; i++) {
        fread(&ans[i], sizeof(int), 1, fp);
    }
    for(i = 0; i < 5; i++) {
        printf("%d\n", ans[i]);
    }

    return 1;
}