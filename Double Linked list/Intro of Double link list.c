#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *newNode;

void create()
{
    head=0;
     struct node *temp;
    int choice=1;
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);
        newNode->prev=0;
        newNode->next=0;

        if(head==0)
        {
            head =temp= newNode;
        }
        else
        {
            temp ->next = newNode;
            newNode ->prev = temp;
            temp = newNode;
        }
        printf("Do you want to enter another data (0/1) :");
        scanf("%d",&choice);
    }
}

void display()
{
    int count;
    struct node *temp;
    temp = head;
    //printing part
    printf("\n\n");
    while( temp!= 0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
        count++;
    }
}

void main()
{
    create();
    display();
    getch();
}

