#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Parcourir les lignes de haut en bas
    for (int i = 1; i <= N; i++) {
        // Pour chaque ligne, imprimer les lettres de 'A' à ('A'+i-1)
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
