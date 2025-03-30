#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && (b == c)) {
        printf("Equilateral\n");
    }
    else if ((a + b == c) || (b + a == a) || (a + c == b))
        printf("Isoceles\n");
    
return 0;
}