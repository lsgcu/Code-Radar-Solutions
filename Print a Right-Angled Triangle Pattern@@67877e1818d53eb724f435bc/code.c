#include <stdio.h>

int main() {

int nb_rows;

scanf("%d", &nb_rows);

for (int i = nb_rows; i >= 1; i--) { 
    printf("\n");
    for (int j = 1; j <= i; j++) { 
        printf("* ");
    }
}

return 0;
}