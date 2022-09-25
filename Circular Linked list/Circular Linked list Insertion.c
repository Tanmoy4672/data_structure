#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *tail;

void createByTailPointer()
{
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
    printf("\n\n");
    struct node *temp;
    // printf("%d",tail ->next ->data);
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
        // printf("%d",tail ->next ->data);
        printf("%d",temp ->data);
    }
}


void insertAtBegining()
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d",&newNode ->data);
    newNode -> next =0;

    if(tail ==0)
    {
        tail = newNode;
        tail ->next = newNode;
    }
    else
    {
        newNode ->next = tail ->next;
        tail ->next = newNode;
    }
}

void insertAtEnd()
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data :");
    scanf("%d",&newNode ->data);
    newNode -> next =0;

    if(tail==0)
    {
        tail = newNode;
        tail ->next = newNode;
    }
    else
    {
        newNode ->next = tail ->next;
        tail ->next = newNode;
        tail = newNode ;
    }
}

void insertAtPos()
{
    struct node *newNode, *temp;

    int pos, i = 1, l;
    l = getLength();
    printf("Enter Position :");
    scanf("%d",&pos);

    if(pos < 0 || pos > l)
    {
        printf ("Invalid Position.");
    }
    else if(pos ==1)
    {
        insertAtBegining();
    }
    else
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode ->data);
        newNode -> next =0;

        temp = tail ->next;
        while(i < pos -1)
        {
            temp = temp ->next;
            i++;
        }
        newNode ->next = temp ->next;
        temp ->next = newNode;
    }
}

void main()
{
    createByTailPointer();
    createByTailPointerDisplay();

    printf("\n\n");
    insertAtBegining();
    // printf("%d",tail ->next ->data);
    createByTailPointerDisplay();

    printf("\n\n");
    insertAtEnd();
    // printf("%d",tail ->next ->data);
    createByTailPointerDisplay();

   // insertAtPos();
 //   createByTailPointerDisplay();

    getch();
}
