#include<stdio.h>
#include<stdlib.h>
void tax(int n);
int main()
{

    int n;
    printf("Enter number of tax payers\n");
    scanf("%d",&n);
    tax(n);
    return 0;


}


void tax(int n)
{
   double tax_coll=0,average=0,total=0;
int i,m=0,l=0;
printf("Enter tax amount\n");

  for(i = 0;i<n;i++)
{
   scanf("%lf",&tax_coll);
}

for(i=0;i<n;i++)
{
    if(tax_coll<50000)
        printf("Not valid\n");
  else if(tax_coll>=50000&&tax_coll<150000)
  l++;
  else if(tax_coll>=150000&&tax_coll<=250000)
    printf("Not valid\n");
  else if(tax_coll>250000)
  m++;
  else printf("Not valid\n");
   total=total+tax_coll;
  }


  average=total/n;
  printf("Average tax paid=%lf\n",average);
  printf("Tax payers above 250000=%d\n",m);
  printf("Tax payers between 50000 and 150000=%d\n",l);

  }
