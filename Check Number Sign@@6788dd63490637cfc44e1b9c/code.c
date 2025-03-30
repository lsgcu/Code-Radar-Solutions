#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb > 0) {
        printf("Positive\n");
    }
    else if (nb < 0){
        printf("Negative\n");
    }
    else {
        printf("Zero\n");
    }
return 0;
}