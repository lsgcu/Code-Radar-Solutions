#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    int marks;
};

int main() {

    int N;
    scanf("%d %d %c %d", &N);
    struct Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %d", &students[i].roll_number, students[i].name, &students[i].marks);
        printf("Roll Number: %d, Name: %s, Marks: %d\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
    for 
    

    return 0;
}
