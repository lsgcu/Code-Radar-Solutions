#include <stdio.h>

int main() {

int radius;
float pi = 3.14, area, circumference

scanf("%d", &radius);

// formula: C/2pi where C is circumference of circle
area = pi * radius * radius;

circumference = 2 * pi * radius;

printf("Area: %f", area);

return 0;
}