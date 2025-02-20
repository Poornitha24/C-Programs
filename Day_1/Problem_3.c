#include <stdio.h>

char get_grade(int marks) {
    if (marks >= 90 && marks <= 100)
        return 'A';
    else if (marks >= 80 && marks < 90)
        return 'B';
    else if (marks >= 70 && marks < 80)
        return 'C';
    else if (marks >= 60 && marks < 70)
        return 'D';
    else
        return 'F';
}

int main() {
    int num_students;

    // Student input
    printf("Enter number of students: ");
    scanf("%d", &num_students);

    int marks[num_students];

    // Access student marks
    printf("Enter marks: ");
    for (int i = 0; i < num_students; i++) {
        scanf("%d", &marks[i]);
    }

    // display the grades
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: Grade %c\n", i + 1, get_grade(marks[i]));
    }

    return 0;
}
