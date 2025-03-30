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
    scanf("%d %s %d", &students->roll_number, &students->name, &students->marks);
    printf("Roll Number: %d, Name: %s, Marks: %d\n", students->roll_number, students->name, students->marks);

    return 0;
}
