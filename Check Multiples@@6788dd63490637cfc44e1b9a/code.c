#include <stdio.h>

int main() {
    int nb_to_check, divisor;

    scanf("%d %d", &nb_to_check, &divisor);

    if (nb_to_check % divisor == 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }    
return 0;
}