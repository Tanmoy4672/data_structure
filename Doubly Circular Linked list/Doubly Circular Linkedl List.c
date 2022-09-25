#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail;

void createDoublyCircularLinkedList()
{
    struct node *newNode;
    head = 0;
    int choice =1;
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d",&newNode->data);

        if(head ==0)
        {
            head = tail = newNode;
            head ->next = head;
            head ->prev = head;
        }
        else
        {
            tail ->next = newNode;
            newNode ->prev = tail;
            newNode ->next = tail;
            head ->prev = newNode;
            tail = newNode;
        }
        printf("Do you want to enter another data (0/1) :");
        scanf("%d",&choice);
    }

}

void display()
{
    struct node *temp;
    temp = head;
    if (head ==0)
    {
        printf("List is empty.");
    }
    else
    {
        while (temp != tail)
        {
            printf("%d",temp ->data);
            temp = temp ->next;
        }
        printf("%d",temp ->data);
    }

}

void main()
{
    createDoublyCircularLinkedList();
    display();

    getch();
}
