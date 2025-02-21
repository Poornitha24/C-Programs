#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student details
typedef struct {
    int rollNo;
    char name[50];
    char course[50];
    int marks;
} Student;

// Function to save student records to a file
void saveToFile(Student *students, int count) {
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d, %s, %s, %d\n", 
                students[i].rollNo, students[i].name, 
                students[i].course, students[i].marks);
    }
    fclose(fp);
    printf("Record saved in \"students.txt\"\n");
}

// Function to search for a student by Roll No
void searchStudent(Student *students, int count, int rollNo) {
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Student Found: %s, %s, Marks: %d\n", 
                   students[i].name, students[i].course, students[i].marks);
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Allocate memory for student records
    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Input student details
    // Expected format per student: rollNo, name, course, marks
    // Example input: 101, Alice, Computer Science, 85
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d, %[^,], %[^,], %d", 
              &students[i].rollNo, students[i].name, 
              students[i].course, &students[i].marks);
    }
    
    // Save records to file
    saveToFile(students, n);
    
    // Search for a student by roll number
    int searchRollNo;
    printf("Enter Roll No to search: ");
    scanf("%d", &searchRollNo);
    searchStudent(students, n, searchRollNo);
    
    free(students);
    return 0;
}
