#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(value)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}

bool isfullbinarytree(struct node *root)
{
    if(root==NULL)
        return true;
    if(root->left==NULL &&root->right==NULL)
        return true;
    if((root->left)&&(root->right))
        return (isfullbinarytree(root->left)&&isfullbinaytree(root->right));
    return false;
}

int main()
{
    struct node *root=NULL;
   root->left=createnode(2);
   root->right=createnode(3);
   root->right->left=createnode(4);
   root->right->right=createnode(5);
   if(isfullbinarytree(root))
    printf("the binary tree is fullbinarytree");
   else
    printf("the binary tree is not a full binary tree");
}
