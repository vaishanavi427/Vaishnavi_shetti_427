#include<stdio.h>
#include<stdlib.h>
void class_avg(int arr[],int n);
int main()
{
    int i,arr[i],n;
    class_avg(arr,n);
    return 0;


}


void class_avg(int arr[],int n)
{
int i,total=0,average=0,below=0,above=0;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i = 0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
total+=arr[i];
average=total/10;
for(i=0;i<n;i++)
{
    if(arr[i]<average)
    below++;
    else
    above++;
    }
    }
    printf("Number of students above average=%d\n",above);
    printf("Number of students below average=%d\n",below);





}
