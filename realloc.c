#include <stdio.h>
#include <stdlib.h>

int main() {
    int *isaretci, i, n1, n2;
    printf("Bir boyut girin: ");
    scanf("%d", &n1);

    isaretci = (int *)malloc(n1 * sizeof(int));

    printf("ilk bellek adreslerini yazdirin:\n");
    for(i = 0; i < n1; i++) {
        isaretci[i] = i + 1;
        printf("%d ", isaretci[i]);
    }

    printf("\n\nYeni boyut girin: ");
    scanf("%d", &n2);
    isaretci = (int *)realloc(isaretci, n2 * sizeof(int));
    if (isaretci == NULL) {
        printf("Bellek tahsis edilemedi.\n");
        return 1;
    }
    printf("Yeni bellek adreslerini yazdirin:\n");
    for(i = 0; i < n2; i++) {
        if (i < n1) {
            printf("%d ", isaretci[i]);
        } else {
            isaretci[i] = i + 1;
            printf("%d ", isaretci[i]);
        }
    }
    printf("\n\n");
    printf("ilk bellek adresleri:\n");
    for(i = 0; i < n1; i++) {
        printf("%d ", isaretci[i]);
    }
    printf("\n\n");
    printf("son bellek adresleri:\n");
    for(i = n1; i < n2; i++) {
        printf("%d ", isaretci[i]);
    }
    printf("\n\n");
    free(isaretci);

    return 0;
}