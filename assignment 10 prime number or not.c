#include <stdio.h>
#include <stdlib.h>
void prime_num(int n, int a[])
;int main()
{
    int  a[100],i, n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("enter the elements\n");
    scanf("%d",&a[i]);
     }
      printf("the entered array is\n");
      for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
      }
      prime_num(n, a);
      return 0;
      }
      void prime_num(int n,int a[])
      {
          int i, j;
          for(i=0;i<n;i++)
            {for(j=2;j<a[i];j++)
            {
                if((a[i]%j)==0)
                break;
          }
  if(j == a[i])
    {
        printf("the found prime no is at %d position and the number is %d\n",i,a[i]);
  }  }}

