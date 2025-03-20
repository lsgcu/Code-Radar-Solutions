#include <stdio.h>

int main() {

float number;

char input[100];
double number;
    
scanf("%s", input);
    
number = atof(input);

printf("You entered: %0.4f", number);

return 0;
}