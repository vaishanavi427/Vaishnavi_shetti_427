//C program to compute total electricity bill
#include<stdio.h>
#include<stdlib.h>
int main()
{
int units;
float total_bill;
 printf("Enter the units\n");
  scanf("%d",&units);
  if(units<=0)
  {
      printf("Invalid units consumed\n");
      exit(0);
  }
   if(units>0&&units<=50)
    total_bill=1.5*units;
      else if(units>100&&units<=250)
       total_bill=1.5*100+(units-100)*2.3;
      else if(units>250&&units<=600)
         total_bill=1.5*100+2.3*250+(units-250)*4;
        else
            total_bill=1.5*100+2.3*150+4*350+(units-600)*1.5;
 total_bill=total_bill+100;

                 printf("Electricity bill to be payed=%f\n",total_bill);
                 return 0;
}
