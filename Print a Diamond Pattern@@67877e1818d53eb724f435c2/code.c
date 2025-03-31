#include <stdio.h>

int main() {

int N;

scanf("%d", &N);

    // partie supp diamand
    for (int i = 1; i <= N; i++) {
        printf("i=%d", i);
        printf("N=%d", N);
        //espaces
        for (int j = 1; j <= (N - i); j++) {
            printf("j=%d", j);
            printf(" ");
        }
        //etoiles
        for (int k = 1; k <= (2*i- 1); k++) {
            printf("k=%d", k);
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
