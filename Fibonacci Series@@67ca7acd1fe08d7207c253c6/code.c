#include <stdio.h>

int fibonacciSeries(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);

}

int main() {

    int n;
    scanf("%d", &n);
    
    printf("fibo:", fibonacciSeries(n));
    return 0;
}
