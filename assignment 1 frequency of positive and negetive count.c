/* C program to count the number of even and odd elements in an array */
#include<stdio.h>
void count(int arr[],int n);
int main()
{
    int i,arr[i],n;
    count(arr,n);
    return 0;
}

void count(int arr[],int n)
{

int pos=0,neg=0,i;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i = 0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
if(arr[i]<0)
neg++;
else
pos++;
}
printf("Positive numbers: %d\n",pos);
printf("Neative numbers: %d\n",neg);
}


