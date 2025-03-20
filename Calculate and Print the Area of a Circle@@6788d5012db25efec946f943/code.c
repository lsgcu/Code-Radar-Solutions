#include <stdio.h>

int main() {

int number;

scanf("%i", &number);

// formula: C/2pi where C is circumference of circle
float area = (float)number / (2 * 3.14);

printf("Area: %.2f", area);

return 0;
}