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

void delFormBeg()
{
    struct node *temp;
    temp = head;

    if(head == 0)
    {
        printf("List is empty.");
    }
    else if(head ->next == head)
    {
        head = tail = 0;
        free(temp);
    }
    else
    {
        head = head ->next;
        head ->prev = tail;
        tail ->next = head;
        free(temp);
    }
}

void delFormEnd()
{
    struct node *temp;
    temp = tail;

    if(head == 0)
    {
        printf("List is empty.");
    }
    else if(head ->next == head)
    {
        head = tail = 0;
        free(temp);
    }
    else
    {
        tail = tail ->prev ;
        tail ->next = head;
        head ->prev = tail;
        free(temp);
    }
}

void deleteAtPos()
{
    struct node *temp;
    int pos, i =1, l;

    temp = head;
    printf("Enter Position: ");
    scanf("%d",&pos);

    l = getlenght();

    if(pos<1 || pos>l)
    {
        printf("Invalid Position.");
    }
    else if(pos == 1)
    {
        delFormBeg();
    }
    else
    {
        while(i<pos)
        {
            temp = temp ->next;
            i++;
        }
        temp ->prev ->next = temp ->next;
        temp ->next ->prev = temp ->prev;

        if(temp ->next == head)
        {
            tail = temp ->prev;
            free(temp);
        }
        else
        {
            free(temp);
        }
    }
}

void main()
{
    createDoublyCircularLinkedList();
    display();
    printf("\n\n");

    delFormBeg();
    display();

    getch();
}
