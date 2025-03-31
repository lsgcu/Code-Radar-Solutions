#include <stdio.h>

int main() {

int N;

scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // partie supp
        for (int j = 1; j <= (N - i); j++) { // espaces
            printf(" ");
        }
        for (int k = 1; k <= (2*i- 1); k++) { // etoiles
            printf("*");
        }
        printf("\n");
    }
    for (int l = 1; l <= N - 1; l++) { // partie inf
        for (int m = 1; l <= (N + 1); m++) {
            printf(" ");
        }
        for (int o = 1; o <= (2*i + 1); o++) {
            printf("*");
        }
    }
    return 0;
}
