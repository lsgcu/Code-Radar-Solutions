#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Partie supérieure du diamant (N lignes)
    for (int i = 1; i <= N; i++) {
        // Imprimer les espaces (N-i espaces)
        for (int j = 1; j <= N-i; j++) {
            printf(" ");
        }
        
        // Imprimer les étoiles (2*i-1 étoiles)
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Partie inférieure du diamant (N-1 lignes)
    for (int i = 1; i <= N-1; i++) {
        // Imprimer les espaces (i espaces)
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        
        // Imprimer les étoiles (2*(N-i)-1 étoiles)
        for (int j = 1; j <= 2*(N-i)-1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}