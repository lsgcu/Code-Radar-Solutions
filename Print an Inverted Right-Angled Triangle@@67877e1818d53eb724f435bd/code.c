#include <stdio.h>

int main() {

int nb;

scanf("%d", &nb);

for (int i = nb; i >= 1; i--) { 
    for (int j = 1; j <= i; j++) { 
        printf("* ");
    }
    printf("\n");
}

return 0;
}