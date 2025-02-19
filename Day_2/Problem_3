#include<stdio.h>
#include<stdlib.h>
void inputMarks(int* marks, int n) {
    printf("Enter marks:");
    for(int I = 0; I < n; I++) {
        scanf("%d", &marks[I]);
    }
}

float calculateAverage(int *marks, int n) {
    float average;
    int sum = 0;
    for(int I = 0; I < n; I++) {
        sum += marks[I];
    }
    average = (float)sum / (float)n;
    return average;
}

int main() {
    int n;
    printf("Enter number of students:");
    scanf("%d", &n);

    int *marks= (int* )mallac(sizeof(int)*n)//int marks[1000];
    inputMarks(marks, n);
    float average = calculateAverage(marks, n);
    printf("Average marks:%.2f\n", average);
    free(marks);
    return 0;
}
