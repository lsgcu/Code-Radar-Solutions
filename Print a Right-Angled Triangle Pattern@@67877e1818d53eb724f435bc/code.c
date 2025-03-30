#include <stdio.h>

int main() {

int nb_rows;

scanf("%d", &nb_rows);

for (int i = 1; i <= nb_rows; i++) { 
    for (int j = 1; j <= i; j++) { 
        printf("* ");
    }
    printf("\n");
}

return 0;
}
