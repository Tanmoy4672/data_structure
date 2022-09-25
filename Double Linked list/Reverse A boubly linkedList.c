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


void reverseDll()
{
    struct  node *current, *nextNode;

    current = head;
    while(current !=0)
    {
        nextNode = current ->next;
        current->next = current ->prev;
        current ->prev = nextNode;
        current = nextNode;
    }
    current = head;
    head = tail;
    tail = current;

}


void main()
{
    create();
    display();

    reverseDll();
    display();

    getch();
}

