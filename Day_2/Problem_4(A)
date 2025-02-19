
#include <stdio.h>
#include <string.h>

void checkInsuranceEligibility(int age, char preExistingCondition[], int salary) {
    if (age >= 18 && age <= 60 && strcmp(preExistingCondition, "no") == 0 && salary >= 25000) {
        printf("Eligible for Medical Insurance\n");
    } else {
        printf("Not Eligible for Medical Insurance\n");
    }
}

int main() {
    int age, salary;
    char preExistingCondition[10];

    // Taking input from user
    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Any Pre-existing Condition? (yes/no): ");
    scanf("%s", preExistingCondition);

    printf("Enter Monthly Salary: ");
    scanf("%d", &salary);

    // Checking eligibility
    checkInsuranceEligibility(age, preExistingCondition, salary);

    return 0;
}
