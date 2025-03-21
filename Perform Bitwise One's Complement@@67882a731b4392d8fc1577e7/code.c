#include <stdio.h>

int main() {

    int number;

    scanf("%d %d", &number);

    int result = ~number;

    printf("%d\n", result); 
    return 0;
}