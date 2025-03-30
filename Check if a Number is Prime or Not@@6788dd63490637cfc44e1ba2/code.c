#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb < 1) {
        printf("Not Prime\n");
    }
    else if ((nb > 1) && (nb % 1 == 0) && (nb % nb == 0)) {
        printf("Prime\n");
    }

return 0;
}