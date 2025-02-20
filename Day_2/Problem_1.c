#include<stdio.h>
float bill_calculate( char ward_type,int days_admitted)
{
    float amount,price;
    switch(ward_type)
    {
        case 'G':{
            price=1000.0f;
        }break;
        case 'S':{
            price=2000.0f;
        }break;
        case 'P':{
            price=5000.0f;
        }break;
    }
    amount=price*days_admitted;
    if(days_admitted>7)
    {
        amount=amount*0.95f;
    }
    return amount;
}   
int main()
{
    //Input name,ward type and days admitted
    char name[200];
    char ward_type;
    int days_admitted;

    printf("Enter the Patient name: ");
    scanf("%s",name);getchar();

    printf("Enter type of ward type(G/S/P): ");
    scanf("%c",ward_type);getchar();

    printf("Enter the number of days admitted: ");
    scanf("%d",days_admitted);

    float amount=bill_calculate(ward_type,days_admitted);

    printf("Patient Name: %s",name);
    printf("Ward Type: %c",ward_type);
    printf("Days admitted: %d",days_admitted);
    printf("Bill Amount: %.2f",amount);

    return 0;
}
