#include <stdio.h>

int addition(int first, int second) {
    return first + second;
}

int substraction(int first, int second) {
    return first - second;
}

int division(int first, int second) {
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
        int result = addition(first, second);
        printf("%d\n", result);
    }
    else if (input_operator == '/') {
        int result = division(first, second);
        printf("%d\n", result);
    }
    else if (input_operator == '*') {
        int result = multiplication(first, second);
        printf("%d\n", result);
    }
    else if (input_operator == '-') {
        int result = substraction(first, second);
        printf("%d\n", result);
    }

return 0;
}