#include<stdio.h>
#include<stdlib.h>

int main()
{
int d;
float f;
   printf("enter no. of days\n");
   scanf("%d",&d);
   if(d>0&&d<=5)
      f=d*0.5;
   else if(d>5&&d<=10)
      f=5*0.5+(d-5)*1;
   else if(d>10&&d<=30)
      f=5*0.5+5*1+(d-10)*5;
   else
     {
     printf("Your membership is cancelled\n");
     exit(0);
     }
     printf("fine to be paid=%f\n",f);
   }
