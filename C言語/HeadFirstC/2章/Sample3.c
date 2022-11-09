#include <stdio.h>

//*で参照して変更できる。&でアドレスを渡す。
void go_south_east(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon -1;
}
int main() {
    int lat = 32;
    int lon = -34;

    go_south_east(&lat, &lon);

    printf("lat:%i lon:%i", lat, lon);
    return 0;
}