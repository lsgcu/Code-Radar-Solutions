#include <stdio.h>

int main() {
    int first, second;

    scanf("%d %d", &first, &second);

    if (first && second >= 0) {
        printf("Same Sign\n");
    }
    else  {
        printf("Different Sign\n");
    }
    
return 0;
}