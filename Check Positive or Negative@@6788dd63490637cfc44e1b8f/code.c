#include <stdio.h>

int main() {

    int input;

    scanf("%d", &input);

    if (input < 0) {
        printf("Negative\n");
    } else if (input == 0) {
        printf("Zero\n");
    } else {
        printf("Positive\n");
    }

    return 0;
}