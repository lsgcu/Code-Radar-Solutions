#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < (len/2); i++) {
        char temp = str[i]; 
        str[i] = str[len - i - 1];
        printf("str[i]: %c", str[i]);
        str[len - i - 1] = temp;
        printf("temp: %c", temp);
    }
    printf("%s", str);
    return 0;
}