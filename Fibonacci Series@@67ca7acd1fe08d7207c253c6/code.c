#include <stdio.h>

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
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
