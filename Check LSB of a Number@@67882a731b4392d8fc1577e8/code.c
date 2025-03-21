#include <stdio.h>

int main() {

int number;

scanf("%d", &number);

result = number & 1;

if (result == 1)
    printf("Set\n");
else 
    printf("Not Set\n");


return 0;
}