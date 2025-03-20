#include <stdio.h>

int main() {

int radius;
float pi = 3.14, area;

scanf("%d", &radius);

area = pi * radius * radius;

printf("Area: %0.2f", area);

return 0;
}