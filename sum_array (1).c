#include<stdio.h>
#include<stdlib.h>
void sum_nxt(int arr[],int n);
int main()
{
    int i,arr[i],n;
    printf("Enter array size\n");
    scanf("%d",&n);

    sum_nxt(arr,n);
    return 0;


}


void sum_nxt(int arr[],int n)
{
int i,j,m,sum=0;

printf("Enter array elements\n");
for(i = 0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(m=0;m<n-1;m++)
{
    sum=0;
  for(j=m+1;j<n;j++)
    {
        sum+=arr[j];

    }
    printf("Sum of next %d elements=%d\n",(n-m-1),sum);
}
}

