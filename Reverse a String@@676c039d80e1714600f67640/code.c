#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int lenght, g;

    lenght = strlen(str - 1);
    scanf("%s", str);
    for (g = lenght - 1; g >=0; g--) {
        printf("%c", str[g]);
    }
    return 0;
}