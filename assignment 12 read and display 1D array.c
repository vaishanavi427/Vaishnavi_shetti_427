#include<stdio.h>
#include<stdlib.h>
void oneD(int arr[],int n);
int main()
{
    int i,arr[i],n;
    printf("Enter array size\n");
    scanf("%d",&n);

    oneD(arr,n);
    return 0;


}


void oneD(int arr[],int n)
{
int i,j,sum=0;

printf("Enter array elements\n");
for(i = 0;i<n;i++)
{
scanf("%d",&arr[i]);
printf("\n");
printf("%d",arr[i]);
}
int max=0,m,total=0,M,ssum=0;

for(m=0;m<n;m++)
{
    while(arr[i]!=0)

    {
        M=arr[i]%10;
        if(M>max)
        max=M;
        arr[i]=arr[i]/10;
        ssum+=M;

    }
    total=total+max;
    printf("Sum of max diits=%d\n",max);
}
}
