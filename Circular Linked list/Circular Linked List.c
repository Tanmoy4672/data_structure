#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create()
{
    head=0;
    struct node *newNode, *temp;
    int choice=1;
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);
        newNode->next=0;

        if(head==0)
        {
            head =temp = newNode;
        }
        else
        {
            temp ->next = newNode;
            temp = newNode;
        }
        temp ->next = head;


        printf("Do you want to enter another data (0/1) :");
        scanf("%d",&choice);
    }
}

void display()
{
    printf("\n\n");
    //temp ->next = data
    struct node *temp;
    if (head ==0 )
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp->next != head)
        {
            printf("%d",temp->data);
            temp = temp ->next;
        }
        printf("%d",temp->data);
    }
}


void main()
{
    create();
    display();

    getch();
}

