#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb % 3 == 0) {
        printf("Divisible by 3\n");
    }
    else if (nb % 5 == 0){
        printf("Divisible by 5\n");
    }
    else if ((nb % 3 == 0) && (nb % 5 == 0)){
        printf("Divisible by Both\n");
    }
    else {
        printf("Not Divisible\n");
    }
return 0;
}