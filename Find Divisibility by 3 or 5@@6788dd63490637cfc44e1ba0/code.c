#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb % 3 == 0) {
        printf("Divisible by 3\n");
    }
    else if (nb % 5){
        printf("Divisible by 5\n");
    }
    else {
        printf("Divisible by both\n");
    }
return 0;
}