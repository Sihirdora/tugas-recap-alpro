#include <stdio.h>
float hitung_keliling_persegi(float sisi) {
    return 4 * sisi;
}
float hitung_luas_persegi(float sisi) {
    return sisi * sisi;
}
float hitung_volume_kubus(float sisi) {
    return sisi * sisi * sisi;
}
int main() {
    float sisi;
    scanf("%f", &sisi); 

    float keliling_persegi = hitung_keliling_persegi(sisi);
    float luas_persegi = hitung_luas_persegi(sisi);
    float volume_kubus = hitung_volume_kubus(sisi);

    printf("%.2f\n", keliling_persegi);
    printf("%.2f\n", luas_persegi);
    printf("%.2f\n", volume_kubus);

    return 0;
}
