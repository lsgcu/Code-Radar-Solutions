#include <stdio.h>

int main() {

int N;

scanf("%d", &N);

    // partie supp diamand
    for (int i = 1; i <= N; i++) {
        printf("i=",i);
        printf("N=", N);
        //espaces
        for (int j = 1; j <= (N - i); j++) {
            prinf("j=", j);
            printf(" ");
        }
        //etoiles
        for (int k = 1; k <= (2*i- 1); k++) {
            printf("k=", k);
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
