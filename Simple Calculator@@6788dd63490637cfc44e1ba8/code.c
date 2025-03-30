#include <stdio.h>

int addition(int first, int second) {
    return first + second;
}

int substraction(int first, int second) {
    return first - second;
}

int division(int first, int second, int *error_flag) {
    if (second == 0) {
        *error_flag = 1;
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
    int result, error_flag = 0;

    scanf ("%d %d %c", &first, &second, &input_operator);

    if (input_operator == '+') {
        result = addition(first, second);
    }
    else if (input_operator == '/') {
        result = division(first, second, &error_flag);
        if (&error_flag == 1) {
            printf("error\n");
            return 1;
        }
    }
    else if (input_operator == '*') {
        result = multiplication(first, second);
    }
    else if (input_operator == '-') {
        result = substraction(first, second);
    }
    else{
        printf("error\n");
        return 1;
    }

    printf("%d\n", result);

return 0;
}