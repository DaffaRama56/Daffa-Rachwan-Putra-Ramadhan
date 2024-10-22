#include <stdio.h>

void kotak(int panjang, int lebar) { 
    for (int a = 0; a < lebar; a++) {
        for (int b = 0; b < panjang; b++) {
            if (a == 0 || a == lebar - 1 || b == 0 || b == panjang - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}
int main() {
    int panjang, lebar;

    printf("Masukkan panjang(10-100)=  ");
    scanf("%d", &panjang);

    printf("Masukkan lebar(5-75)=  ");
    scanf("%d", &lebar);

    if (panjang < 10 || panjang > 100) {
        printf("Panjang harus antara 10 dan 100.\n");
        return 1; 
    }
    if (lebar < 5 || lebar > 75) {
        printf("Lebar harus antara 5 dan 75.\n");
        return 1; 
    }

    kotak(panjang, lebar);
    return 0;
}
