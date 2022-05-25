#include<stdio.h>
void main()
{
    int n;
    //int size_of_array;
   int arr[]={900,940,950,1100,1500,1800};
   int dep[]={910,1200,1120,1130,1900,2000};
   //int n=(size_of(arr)/size_of_array[0]);
   findplatform(arr,dep,n);
}
void findplatform(int arr[],int dep[],int n)
{
    int plat_needed=1,result=0;
    int i=1,j=0;
    for(i=0;i<n;i++)
    {
        plat_needed=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j]&&arr[i]<=dep[j])
            {
                plat_needed ++;
            }
            if(result>plat_needed)
                result=plat_needed;
            printf("%d",result);
            printf("minimum number of platforms is %d",result);
        }
    }
}
