#include <stdio.h>

int main() {
    int first, second;

    scanf("%d %d", &first, &second);

    if (first >= second) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
return 0;
}