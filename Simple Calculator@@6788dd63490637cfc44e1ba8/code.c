#include <stdio.h>

int addition(int first, int second) {
    return first + second;
}

int substraction(int first, int second) {
    return first - second;
}

int division(int first, int second) {\
    if (second == 0) {
        printf("error\n");
        return 0;
    }
    return first / second;
}

int multiplication(int first, int second) {
    return first * second;
}

int main() {
    int first, second;
    char input_operator;
    int result;

    scanf ("%d %d %c", &first, &second, &input_operator);

    if (input_operator == '+') {
        result = addition(first, second);
    }
    else if (input_operator == '/') {
        result = division(first, second);
    }
    else if (input_operator == '*') {
        result = multiplication(first, second);
    }
    else if (input_operator == '-') {
        result = substraction(first, second);
    }

    printf("%d\n", result);

return 0;
}