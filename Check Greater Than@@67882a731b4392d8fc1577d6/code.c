#include <stdio.h>
#include <stdbool.h>

int main() {

int first, second;

scanf("%d %d", &first, &second);

if (first > second) {
    printf("True\n");
} else {
    printf("False\n");
}

return 0;
}