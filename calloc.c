#include <stdio.h>
#include <stdlib.h>

// calloc.c 2 parametre alır
// // calloc, bellekteki boş alanı tahsis eder ve sıfırlar

int main() {
    int n, i, *isaretci, toplam = 0;
    printf("Kaç tane sayı gireceksiniz? ");
    scanf("%d", &n);

    isaretci = (int *)calloc(n, sizeof(int));
    if(isaretci == NULL) {
        printf("Bellek tahsis edilemedi.\n");
        return 1;
    }
    printf("Sayıları girin:\n");
    for(i = 0; i < n; i++) {
        printf("%d. sayıyı girin: ", i + 1);
        scanf("%d", &isaretci[i]);
    }
    for(i = 0; i < n; i++) {
        toplam += isaretci[i];
    }
    printf("Sayıların toplamı: %d\n", toplam);
    free(isaretci);

    return 0;
}