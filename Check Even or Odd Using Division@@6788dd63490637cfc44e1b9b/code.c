#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
return 0;
}