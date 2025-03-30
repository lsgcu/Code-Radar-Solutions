#include <stdio.h>

int main() {
    int age, citizen_status;

    scanf("%d %d", &age, &citizen_status);

    if (age >= 18 && citizen_status == 1) {
        printf("Eligible\n");
    }
    else if (age >= 18 && citizen_status == 0) {
        printf("Eligible\n");
    }
    else if (age < 18 && citizen_status == 0){
        printf("Not Eligible\n");
    }
    

return 0;
}