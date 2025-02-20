#include<stdio.h>
#include<string.h>
void reademployee(int* p_id,char* name,float* p_salary,int* p_attendance)
{
    printf("Enter id:");
    scanf("%d", &id);

    printf("Enter name:");
    scanf("%s", name);

    printf("Enter salary:");
    scanf("%f", &salary);

    printf("Enter number of days worked:");
    scanf("%d", &attendance);
}

int calculatebonus(float salary,int attendance)
{
  float bonus = 0.0f;
  if(attendance > 25)
    {
        bonus = (salary / 100.0f) * 5.0f;
    }
    else if (attendance < 10)
    {
        bonus = (-1.0f * ((salary / 100.0f) * 50.0f));       /* code */
    }
  return bonus;
}

void categorizeemployee(int attendance, float gross_salary)
{
  float gross_salary = 0.0f;
  char category[50] = "Good";
   if(attendance > 250)
    {
        strcpy(category,"Excellent");
    }
    else if(attendance < 15)
    {
        strcpy(category,"Need Improvement");
    }

}


int main()
{
    int id;
    char name[255];
    float salary;
    int attendance;
    
    //read employee

    reademployee(&id,name,&salary,&attendance);

    //process payroll
    float bonus = 0.0f;
    float gross_salary = 0.0f;
    char category[50] = "Good";
    
    //calculate bonus
    int calculatebonus(salary,attendance);

    //final salary
    gross_salary = (salary+bonus);

    //categorize employee
   void categorizeemployee(attendance,gross_salary);

  
    //display payroll details
    printf("ID:%d\n", id);
    printf("Name:%s\n", name);
    printf("Basic Salary: %.2f\n", salary);
    if(bonus > 0)
    {
        printf("Bonus: %.2f\n", bonus);
    }
    printf("\tFinal Salary: %.2f\n", gross_salary);
    printf("\tEmployee Performance Category: %s\n", category);
    
    return 0;
}
