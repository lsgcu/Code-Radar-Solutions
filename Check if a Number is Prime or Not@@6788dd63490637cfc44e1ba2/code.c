#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if ((nb > 1) && (nb % 1 == 0) && (nb % nb == 0)) {
        printf("Prime\n");
    }
    else {
        printf("Not Prime\n");
    }

return 0;
}