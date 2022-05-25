#include<stdio.h>
#include<stdlib.h>
void month(double a[],int n);
int main()
{

    int n=12,j;
     double a[j];
    month(a,n);
    return 0;


}


void month(double a[],int n)
{
   double average=0,total=0,m=0,l=0;
int i,ma=0,la=0;
printf("Enter expenditure of each month\n");

  for(i=0;i<12;i++)
{
   scanf("%lf",&a[i]);
}

for(i=0;i<12;i++)
{
    if(a[i]>m)
    {m=i-1;
    ma=a[i];}
    if(a[i]<l)
    l=a[i];
    la=i-1;
    total+=a[i];
}



  average=total/n;
  printf("Average expenditure=%lf\n",average);
  printf("Highest paid month=%d\n",m);
  printf("Lowest paid month=%d\n",l);

  }
