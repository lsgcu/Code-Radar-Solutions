#include <stdio.h>

int main() {

float radius;
float pi = 3.14, area;

scanf("%f", &radius);

area = pi * (radius * radius);

printf("Area: %0.2f", area);

return 0;
}