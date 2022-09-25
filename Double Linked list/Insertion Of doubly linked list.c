#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail;

void create()
{
    head=0;
    struct node *newNode,*temp;
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
            head =tail= newNode;
        }
        else
        {
            tail ->next = newNode;
            newNode ->prev = tail;
            tail = newNode;
        }
        printf("Do you want to enter another data (0/1) :");
        scanf("%d",&choice);
    }
}

void display()
{
    int count;
    struct node *tail;
    tail = head;
    //printing part
    printf("\n\n");
    while( tail != 0)
    {
        printf("%d  ",tail->data);
        tail=tail->next;
        count++;
    }
}

void insertAtBeg()
{
    struct node *newNode,*temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d",&newNode->data);
    newNode->prev=0;
    newNode->next=0;

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d",&newNode->data);
    newNode->prev=0;
    newNode->next=0;

    tail->next=newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPos()
{
    int pos;
    int i = 1;
    int length = 5;
    printf("Enter Position : ");
    scanf("%d",&pos);
    if(pos<1 && pos>length)
    {
        printf("Invalid Position.");
    }
    else if(pos==1)
    {
        insertAtBeg();
    }
    else
    {
        struct node *newNode, *nextnode, *temp;
        temp = head;
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);
        while( i < pos-1)
        {
            temp = temp ->next;
            i++;
        }
        //nextnode = temp ->next;
        newNode ->prev = temp;
        newNode ->next = temp ->next;
        temp ->next = newNode;
        newNode ->next ->prev = newNode;
    }

}

void insertAfterPos()
{
    int pos;
    int i = 1;
    int length = 5;
    printf("Enter Position : ");
    scanf("%d",&pos);
    if(pos<1 && pos>length)
    {
        printf("Invalid Position.");
    }
    else
    {
        struct node *newNode, *nextnode, *temp;
        temp = head;
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);
        while( i < pos)
        {
            temp = temp ->next;
            i++;
        }

        newNode ->prev = temp;
        newNode ->next = temp ->next;
        temp ->next = newNode;
        newNode ->next ->prev = newNode;
    }

}

void main()
{
    create();
    display();

    printf("\n");
    insertAtBeg();
    display();

    printf("\n");
    insertAtEnd();
    display();

    printf("\n");
    insertAtPos();
    display();

    printf("\n");
    insertAfterPos();
    display();

    getch();
}

