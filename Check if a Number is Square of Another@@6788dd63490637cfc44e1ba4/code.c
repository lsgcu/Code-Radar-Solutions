#include <stdio.h>

int main() {
    int first, second;

    scanf("%d %d", &first, &second);

    int square = first * second;

    if (first ^ second == square) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

return 0;
}