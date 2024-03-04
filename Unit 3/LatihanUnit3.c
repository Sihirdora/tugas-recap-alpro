#include <stdio.h>

int main() {
    int jumlah_elemen;
    scanf("%d", &jumlah_elemen);
    int array[jumlah_elemen];
    for (int i = 0; i < jumlah_elemen; i++) {
        scanf("%d", &array[i]);
    }
    int total = 0;
    for (int i = 0; i < jumlah_elemen; i++) {
        total += array[i];
    }
    printf("%d\n", total);
    return 0;
}
