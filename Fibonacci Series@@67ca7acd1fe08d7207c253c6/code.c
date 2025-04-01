#include <stdio.h>

int fibonacciSeries(int n) {
    if (n <= 1) {
        return n;
    }
    printf("%d:", fibonacciSeries(n-1));
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);

}

int main() {

    int n;
    scanf("%d", &n);
    
    fibonacciSeries(n);
    return 0;
}