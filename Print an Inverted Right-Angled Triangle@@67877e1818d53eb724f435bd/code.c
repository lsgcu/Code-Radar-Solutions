#include <stdio.h>

int main() {

int nb;

scanf("%d", &nb);

for (int i = nb; i >= 1; i--) { // rows
    for (int j = 1; j <= i; j++) { // cols 
        printf("*");
    }
}

return 0;
}