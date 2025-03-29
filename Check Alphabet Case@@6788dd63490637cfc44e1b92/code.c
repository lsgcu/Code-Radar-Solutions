#include <stdio.h>

int main() {

    char c;

    scanf("%c", &c);

    if (toupper(c) == 0) {
        printf("Uppercase\n");
    } else {
        printf("Lowercase\n");

    return 0;
}