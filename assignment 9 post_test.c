#include<stdio.h>
 typedef struct post_test{
 char student_name[20];

 int marks;
}PT;

  void read(PT s[80],int n);
  void even_odd(PT [80],int n);
void max(PT [80],int n);

  int main()
{
 PT s[80];
 int n;
  printf("Enter the number of students\n");
  scanf("%d",&n);
  read(s,n);
  even_odd(s,n);
  max(s,n);
  return 0;

}
void read(PT s[80],int n)
{
int i;
printf("Enter student details\n");
for(i=0;i<n;i++)
{

printf("\nEnter name\n");
scanf("%s",s[i].student_name);

printf("\nEnter score\n");
scanf("%d",&s[i].marks);
}
}
/*void display(PLR p[10],int n)
{

    int i;
    printf("Enter the player details\n");
    for(i=0;i<n;i++)
    {
        printf("Player name:%s\n",p[i].player_name);
        printf("Team name:%s\n",p[i].team_name);
        printf("Average:%f\n",p[i].average);
        printf("ODI_rank:%d\n",p[i].ODI_rank);
    }
}*/
void even_odd(PT s[80],int n)
{

    int i,even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(s[i].marks%2==0)
            even++;
        else
            odd++;
    }
   printf("Number of students with even score=%d\nWith odd score=%d",even,odd);

    }


void max(PT s[80],int n)
{

    int i,no=0;
    printf("Students with 100% score are:");
    for(i=0;i<n;i++)
    {
        if(s[i].marks==10)


   printf("%s",s[i].student_name);
   no++;

    }
    printf("Number of students with 100% score:%d",no);
}




