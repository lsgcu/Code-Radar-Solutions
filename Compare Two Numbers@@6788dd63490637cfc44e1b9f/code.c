#include <stdio.h>

int main() {
    int first, second;

    scanf("%d %d", &first, &second);

    if (first == second) {
        printf("Equal\n");
    }
    else if (first > second){
        printf("First\n");
    }
    else {
        printf("Second\n");
    }
return 0;
}