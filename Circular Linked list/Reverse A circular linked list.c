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

void reverseCircularList()
{
    struct node *current, *prev, *nextNode;
    current = tail ->next;
    nextNode = current ->next;

    if(tail== 0)
    {
        printf("List is empty.");
    }
    else if(tail ->next == tail)
    {
        createByTailPointerDisplay();
    }
    else
    {
        while(current != tail )
        {
            prev = current;
            current = nextNode ;
            nextNode = current ->next;
            current ->next = prev;
        }
         nextNode ->next = tail;
         tail = nextNode;
    }
}

void main()
{
    createByTailPointer();
    createByTailPointerDisplay();

    reverseCircularList();
    createByTailPointerDisplay();
    getch();
}
