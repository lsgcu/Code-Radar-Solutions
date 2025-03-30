#include <stdio.h>

int main() {

int nb;

scanf("%d", &nb);

for (int i = nb; i >= 1, i-=1) {
    for (int j = 1; j <= i, j+=1) { // cols 
        printf("* ");
    }
} // rows

return 0;
}