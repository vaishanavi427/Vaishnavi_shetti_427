#include<stdio.h>
typedef struct student_details
{
char student_name[20];
int roll_no;
float marks;
}SD;
SD s[10];
 void read(SD s[10],int n);
 void display(SD s[10],int n);
 void max(SD s[10],int n,int m);
 void sort(SD s[10],int n);
main()
{
int n,m;
SD s[10];
printf("Enter number of students:\n");
scanf("%d",&n);
printf("Enter maximum marks\n");
scanf("%d",&m);
printf("Enter the details of the students\n");
read(s,n);
printf("\n\nDetails of students with maximum marks\n");
max(s,n,m);
printf("\n\nDetails of students according to ascending order of their roll no.s\n");
sort(s,n);

}
void read(SD s[10],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\nEnter the name of the student");
scanf("%s",s[i].student_name);
printf("\nEnter the roll number:");
scanf("%d",&s[i].roll_no);
printf("\nEnter the obtained marks ");
scanf("%f",&s[i].marks);
}}
void display(SD s[10],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Name of the student:%s\n",s[i].student_name);
printf("Roll number:%d\n",s[i].roll_no);
printf("Marks obtained:%f\n",s[i].marks);
}
}
void sort(SD s[10],int n)
{
int i,j,m,k;
SD swap;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(s[j].roll_no>s[j+1].roll_no)
{swap=s[i];
s[j]=s[j+1];
s[j+1]=swap;
}}
}
display(s,n);
}
void max(SD s[10],int n,int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].marks==m)
        {
            printf("Name of the student:%s\n",s[i].student_name);
            printf("Roll number:%d\n",s[i].roll_no);
            printf("Marks obtained:%f\n",s[i].marks);
        }
    }
}
