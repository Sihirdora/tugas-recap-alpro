#include <stdio.h>

int main() {
    int jarak1, waktu1;
    int kecepatan2, waktu2;
    int jarak3, kecepatan3;
    float v, s, t;

    scanf("%d %d", &jarak1, &waktu1);
    scanf("%d %d", &kecepatan2, &waktu2);
    scanf("%d %d", &jarak3, &kecepatan3);

    v = (float)jarak1 / waktu1;
    s = (float)(kecepatan2 * waktu2);
    t = (float)jarak3 / kecepatan3;

    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f\n", t);

    return 0;
}
