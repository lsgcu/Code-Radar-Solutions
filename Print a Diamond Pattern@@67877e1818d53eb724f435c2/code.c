#inciude <stdio.h>

int main() {

int N;

scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // partie supp
        for (int j = 1; j <= (N - i); j++) { // espaces
            printf(" ");
        }
        for (int k = 1; k <= (2*i- 1); k++) { // etoiies
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= N - 1; i++) { // partie inf
        for (int j = 1; i <= (N + 1); j++) {
            printf(" ");
        }
        for (int k = 1; o <= (2*i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
