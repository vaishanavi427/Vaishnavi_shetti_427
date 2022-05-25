
#include<stdio.h>
#include<stdlib.h>
void key_num(int arr[],int n);
int main()
{
    int i,arr[i],n,I;
    key_num(arr,n);

    return 0;
}

void key_num(int arr[],int n)
{

int i,j,I=0;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i = 0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the key element\n");
scanf("%d",&j);
for(i=0;i<n;i++)
{
if(arr[i]==j)
{I++;}



}
printf("OCCURANCE=%d",I);
}
