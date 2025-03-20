#include <stdio.h>

int main() {

int first, second, third;
int nb_index = 3;

scanf("%i" "%i" "%i", &first, &second, &third);

int average = (first+=second+=third) / nb_index;

printf("Average: %.2f\n", average);

return 0;
}