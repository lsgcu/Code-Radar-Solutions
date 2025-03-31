#include <stdio.h>

int main() {

int N;

scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < (N*2) -1 ; j++) {
            printf("%*", j);
        }
        printf("\n");
    }
    return 0;
}
