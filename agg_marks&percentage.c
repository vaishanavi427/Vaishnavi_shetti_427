#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,agg_marks;
float percentage;
printf("enter the value of m1,m2,m3,m4,m5");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
agg_marks=m1+m2+m3+m4+m5;
percentage=(agg_marks/500.0)*100;
printf("%d\n",agg_marks);
printf("%f",percentage);
return 0;
}
