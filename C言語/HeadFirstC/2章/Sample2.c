#include <stdio.h>
//変数はポインタを渡す。
void go_south_east(int lat, int lon) {
    lat = lat - 1;
    lon = lon -1;
}

int main() {
    int lat = 32;
    int lon = -64;
    //引数は値をコピーして渡すだけで変数は変わらない。
    go_south_east(lat, lon);
    printf("現在のlat:%i lon:%i", lat, lon);
    return 0;
}