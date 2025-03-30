#include <stdio.h>

int addition(int first, int second) {
    return first + second;
}

int substraction(int first, int second) {
    return first - second;
}

int division(int first, int second) {\
    if (first == 0 || second == 0)
        printf("Error\n");
    return first / second;
}

int multiplication(int first, int second) {
    return first * second;
}

int main() {
    int first, second;
    char input_operator;

    scanf ("%d %d %c", &first, &second, &input_operator);

    if (input_operator == '+') {
        int res1 = addition(first, second);
        printf("%d\n", res1);
    }
    else if (input_operator == '/') {
        int res2 = division(first, second);
        printf("%d\n", res2);
    }
    else if (input_operator == '*') {
        int res3 = multiplication(first, second);
        printf("%d\n", res3);
    }
    else if (input_operator == '-') {
        int res4 = substraction(first, second);
        printf("%d\n", res4);
    }

return 0;
}