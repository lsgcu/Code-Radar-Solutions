#include <stdio.h>

int main() {

    int shift, number;

    scanf("%d %d", &number, &shift);

    int result = shift >> number;

    printf("%d\n", result); 
    return 0;
}