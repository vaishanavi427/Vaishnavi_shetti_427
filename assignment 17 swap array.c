# include<stdio.h>
int main()
{
int i,j,n,arr1[10],arr2[10],temp=0;
 printf("enter the number of array elements \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
  printf("enter the array elements \n");
  scanf("%d",&arr1[i]);
   }
   for(i=0;i<n;i++)
    {
    printf("array elements in the second array \n");
     scanf("%d",&arr2[i]);
     }
     for(i=0;i<n;i++)
      {
        temp=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
   }
    for(i=0;i<n;i++)

{
    printf("the array elementsin first array %d\n",arr1[i]);
    }
     for(i=0;i<n;i++)
     {
     printf("the array element  in second array should be %d\n",arr2[i]);
      }
      return 0;
      }
