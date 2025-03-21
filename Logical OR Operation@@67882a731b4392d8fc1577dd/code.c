#include <stdio.h>

int main() {

int first, second;

scanf("%d %d", &first, &second);

if (first || second > 0)
    printf("True\n");
else 
    printf("False\n");

return 0;
}