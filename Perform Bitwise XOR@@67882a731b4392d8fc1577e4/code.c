#include <stdio.h>

int main() {

int first, second;

scanf("%d %d", &first, &second);

int result = first ^ second;

printf("%d\n", result);

return 0;
}