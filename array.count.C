O#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Read(int A[10],int n);
void print(int A[10],int n);
void OEsum(int A[10],int n);
void OEpos(int A[10],int n);
 int main()
    {
     int n,A[10];
     printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
     if(n<=0)
     {
         printf("Elements should be more than 0.\n");
     exit (0);
     }
    Read(A,n);
     print(A,n);
     OEsum(A,n);
     OEpos(A,n);

    }
    void Read(int A[10],int n)
    {printf("Enter the elements\n");
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
    }
void print(int A[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}
void OEsum(int A[10],int n)
{
        int i,osum=0,esum=0,ec=0,oc=0;
        for(i=0;i<n;i++)
            {
            if(A[i]%2==0)
            {esum=esum+A[i];
            ec++;
            }
            else
            {osum=osum+A[i];
            oc++;
            }
            }
            printf("\nSum of even numbers=%d\nEven count=%d\n",esum,ec);
            printf("\nSum of odd numbers=%d\nOdd count=%d\n",osum,oc);
    }
void OEpos(int A[10],int n)
{
        int i,opsum=0,epsum=0;
        for(i=0;i<n;i++)
            {
            if(i%2==0)
            epsum=epsum+A[i];
            else
            opsum=opsum+A[i];

            }
            printf("\nSum of even position numbers=%d\n",epsum);
            printf("\nSum of odd position numbers=%d\n",opsum);
    }

