#include<stdio.h>
#include<stdlib.h>

struct fruit

{
    int data;
    struct fruit* next;

};

struct fruit*getnode(int d);

struct fruit* insert(struct fruit* head, int data);

void apple(struct fruit* head);

void main()

{

    struct fruit* head = NULL;

    int n, a;

    scanf("%d", &n);

    for(int i=0; i<n; i++)

    {

        scanf("%d", &a);

        head = insert(head,a);

    }

    apple(head);

}



struct fruit*getnode(int d)

{

    struct fruit*n =malloc(sizeof(struct fruit));

    n->data = d;

    n->next = NULL;

    return n;

}



struct fruit* insert(struct fruit* head, int data)

{

    struct fruit* temp = getnode(data);

    if(head==NULL)

        return temp;

    struct fruit* cur = head;

    while(cur->next != NULL)

        cur = cur->next;

    cur->next = temp;

    return head;

}



void apple(struct fruit* head)

{

    struct fruit* cur = head;

    int sum = 0;

    while(cur!=NULL)

    {

        if(cur->next==NULL)

        {

            if(cur->data%2==0||cur->data%5==0)

            {

                printf("%d ", cur->data);

                sum =sum+cur->data;

            }

            break;

        }

        if((cur->data%2==0||cur->data%5==0) && cur->next->data%3==0)

        {

            printf("%d ", cur->data);

            sum =sum+cur->data;

        }

        cur = cur->next;

    }

    printf("\n%d", sum);

}
