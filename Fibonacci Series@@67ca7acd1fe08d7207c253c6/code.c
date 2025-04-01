#include <stdio.h>

int fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d", a);
    }
}

int main() {

    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 1;
    }
    fibonacciSeries(n);
    return 0;
}
