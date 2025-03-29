#include <stdio.h>

int main() {

    int input;

    scanf("%d", &input);

    if ((input % 5) && (input % 11) == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible");
    }

    return 0;
}