#include<stdio.h>>

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


void delFromBeg()
{
    struct node *temp;

    if(head==0)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        head = head ->next;
        head ->prev = 0;

        //free function will be delete the node
        free(temp);
    }
}

void delFromEnd()
{
    struct node *temp;
    if (tail==0)
    {
        printf("List is empty.");
    }
    else
    {
        temp = tail;
        tail ->prev ->next = 0;     //time complexity 0(1)
        tail = tail ->prev;

        free(temp);
    }
}

void delFromPos()
{
    int pos, i = 1;
    struct node *temp;
    temp = head;
    printf("Enter the position :");
    scanf("%d",&pos);

    while(i<pos)
    {
        temp = temp ->next;
        i ++;
    }
    temp ->prev ->next = temp ->next;
    temp ->next ->prev = temp ->prev;

    free(temp);

}

void main()
{
    create();
    display();

    delFromBeg();
    display();

    delFromEnd();
    display();

    delFromPos();
    display();
}
