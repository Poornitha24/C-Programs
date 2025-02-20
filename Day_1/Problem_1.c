#include<stdio.h>
#include<string.h>
int main()
{
    char name[250];
    int id;
    int units;
    float bill,total_bill,surcharge;
    //input customer details
    printf("Enter Customer Name:\n");
    scanf("%s",name);
    printf("Enter Customer ID:\n");
    scanf("%d",&id);
    printf("Enter total units consumed:\n");
    scanf("%d",&units);

    //calculate basebill
    if(units<=100)
    {
        bill=5*units;

    }
    else if(100<units<=300)
    {
        bill=7*(units-100)+5*100;
    }
    else if(units>300)
    {

    }
//calculate surcharge
    if(bill>1000)
    {
        surcharge=(0.05*bill);
        total_bill=surcharge+bill;
    }
    else{
        total_bill=bill;
    }
//display bill
printf("Customer Name:%s\n",name);
printf("Customer id:%d\n",id);
printf("Units consumed:%d\n",units);
printf("Base bill:%.2f\n",bill);
printf("Surcharge:%.2f\n",surcharge);
printf("Total bill:%.2f\n",total_bill);

return 0;
}
