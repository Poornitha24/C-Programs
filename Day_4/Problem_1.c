#include<stdio.h>
struct employee
{
    int id;
    char name[200];
    float salary;
    char department[200];
};
typedef struct employee e;
void read_employee(e emp[], int emp_count);
void display_employee(e emp[], int emp_count);
e find_highest_salary(e emp[], int emp_count);
int main() 
{
    int emp_count;
    printf("Enter number of employees:");
    scanf("%d", &emp_count);
    e emp[1000];
    read_employee(emp, emp_count);
    display_employee(emp, emp_count);
    e highest_salaried_employee = find_highest_salary(emp, emp_count);
    printf("Employee with highest salary:    %s, %.2f (%s)\n",highest_salaried_employee.name,
        highest_salaried_employee.salary,highest_salaried_employee.department);
    return 0;
}
void read_employee(e emp[], int emp_count)
{
    printf("Enter employee details(Name,ID,Salary,Department):\n");
    for(int i=0;i<emp_count;i++)
    {
       scanf("%s%d%f%s",emp[i].name,&emp[i].id,&emp[i].salary,emp[i].department);
    }
}
void display_employee(e emp[], int emp_count)
{
    printf("Employee Details: \n");
    for(int i=0;i<emp_count;i++)
    {
        printf("%s - %d - %.2f - %s\n",emp[i].name,emp[i].id,emp[i].salary,emp[i].department);
    }
}
e find_highest_salary(e emp[], int emp_count)
{
    e highest_salary=emp[0];
    for(int i=0;i<emp_count;i++)
    {
        if(emp[i].salary>highest_salary.salary)
        {
            highest_salary=emp[i];
        }
    }
    return highest_salary;
}

