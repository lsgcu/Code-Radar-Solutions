#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    int marks;
};

int main() {

    int N;
    scanf("%d", &N);
    struct Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }
    return 0;
}
