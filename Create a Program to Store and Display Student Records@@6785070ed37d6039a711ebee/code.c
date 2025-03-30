#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    int marks;
}

int main() {

    int N;
    struct Student students[N];
    scanf("%d %d %c %d", &N);   
    scanf("%d %s %d", &students[i].roll_number, students[i].name, &students[i].marks); 
printf("Roll Number: %d, Name: %s, Marks: %d\n", students[i].rollNumber, students[i].name, students[i].marks);
    

    return 0;
}
