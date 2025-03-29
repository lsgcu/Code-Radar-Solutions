#include <stdio.h>
#include <ctype.h>

int main() {

    char c;

    scanf("%c", &c);

    if (toupper(c) ==0) {
        printf("Uppercase\n");
    }
    if  (tolower(c) == 0) {
        printf("Lowercase\n");
    }

    return 0;
}