#include<stdio.h>
void ArrayReverese(int a[], int Start, int End);
void printArray(int a[], int n);
int main()
{
    int a[100], i,n;
     printf("\nPlease Enter the size of an array: ");
     scanf("%d",&n);
     for (i = 0; i < n; i++)
        {
            printf("enter the array elements");
     scanf("%d", &a[i]);
      }
       ArrayReverese(a, 0, n-1);
       printf("\nResult of an Reverse array is: \n");
        printArray(a, n);
        return 0;
        }
        void ArrayReverese(int a[], int Start, int End)
        {
            int Temp;
            while (Start < End)
                {
                    Temp = a[Start];
            a[Start] = a[End];
             a[End] = Temp;
             Start++;
             End--;
              }
               }
                void printArray(int a[], int n)
                {  int i;  for (i = 0; i < n; i++)
                 {
                     printf("%d ", a[i]);
                     }
                      printf("\n");
                      }

