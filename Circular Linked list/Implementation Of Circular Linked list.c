#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail;

void create()
{
    //by maintaining head and tail
    head=0;
    struct node *newNode;
    int choice=1;
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);
        newNode->next=0;

        if(head==0)
        {
            head =tail = newNode;
        }
        else
        {
            tail ->next = newNode;
            tail = newNode;
        }
        tail ->next = head;


        printf("Do you want to enter another data (0/1) :");
        scanf("%d",&choice);
    }
}

//no need to maintain a head pointer in circular llinked list
void createByTailPointer()
{
    //by maintaining tail only
    //create a circular linked list only maintaining a tail pointer
    int choice= 1;
    struct node *newNode;
    tail = 0;
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);
        newNode->next=0;

        if(tail==0)
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode ->next = tail ->next;
            tail -> next = newNode;
            tail = newNode;
        }

        printf("Do you want to enter another data (0/1) :");
        scanf("%d",&choice);
    }
}

void createByTailPointerDisplay()
{
    //by maintaining head only
    //here the problem is I don't know where to start 'cos there is no head pointer
    printf("\n\n");
    //temp ->next = data
    //in that case always (tail -> next) is the starting node pointer
    struct node *temp;
    if(tail == 0)
    {
        printf("List is empty.");
    }
    else
    {
        temp = tail ->next;
        while (temp ->next != tail ->next)
        {
            printf("%d",temp ->data);
            temp = temp ->next;
        }


//                do
//        {
//            printf("%d",temp ->data);
//            temp = temp ->next;
//        }while(temp != temp->next)

        printf("%d",temp ->data);
    }
}



void display()
{
    //by maintaining head and tail only
    printf("\n\n");
    //temp ->next = data
    struct node *tail;
    if (head ==0 )
    {
        printf("List is empty.");
    }
    else
    {
        tail = head;
        while(tail->next != head)
        {
            printf("%d",tail->data);
            tail = tail ->next;
        }
        printf("%d",tail->data);
    }
}


void main()
{
    create();
    display();

    createByTailPointer();
    createByTailPointerDisplay();

    getch();
}

