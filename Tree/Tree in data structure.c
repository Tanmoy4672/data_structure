#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};


struct node *Create()
{
    int x;
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : [-1 for no node]\n");
    scanf("%d",&x);
    if(x == -1)
    {
        return 0;
    }
    else
    {
        newNode ->data = x;
        printf("\nEnter left child of %d",x);
        newNode -> left = Create();
        printf("\nEnter right child of %d",x);
        newNode -> right = Create();
        return newNode;
    }
};

int main()
{
    struct node *root;
    root =0;
    root = Create();
    return 0;
}
