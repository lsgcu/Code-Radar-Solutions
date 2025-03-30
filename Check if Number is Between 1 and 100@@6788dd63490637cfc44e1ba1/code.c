#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb >= 1 && nb <= 100) {
        printf("In Range\n");
    }
    else {
        printf("Out of Range\n");
    }

return 0;
}