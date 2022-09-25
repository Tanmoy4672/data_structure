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

void insertAtBeg()
{
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data :");
    scanf("%d",&newNode ->data);

    if(head == 0)
    {
        head  = tail = newNode;
        head ->next = head;
        head ->prev = head;
    }
    else
    {
        newNode ->next = head;
        head ->prev = newNode;
        newNode ->prev = tail;
        tail ->next = newNode;
        head = newNode;
    }
}


void insertAtEnd()
{
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data :");
    scanf("%d",&newNode ->data);

    if(head == 0)
    {
        head  = tail = newNode;
        head ->next = head;
        head ->prev = head;
    }
    else
    {
        newNode ->prev = tail;
        tail->next = newNode;
        newNode ->next = head;
        head ->prev = newNode;
        tail = newNode;
    }
}

void insertAtPos()
{
    struct node * newNode, *temp;
temp = head;

    int pos, i =1, l;
    printf("Enter Position :");
    scanf("%d",&pos);

    l = getlength();

    if(pos<1 || pos>l)
    {
        printf("Invalid Position.");
    }
    else if (pos ==1)
    {
        insertAtBeg();
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :");
        scanf("%d",&newNode ->data);

        while(i<pos - 1)
        {
            temp = temp ->next;
            i++;
        }
        newNode ->prev = temp;
        newNode ->next = temp ->next;
         temp ->next ->prev = newNode;
         temp ->next = newNode;
    }
}


void main()
{
    createDoublyCircularLinkedList();
    display();

    printf("\n\n");
    insertAtBeg();
    display();

    printf("\n\n");
    insertAtEnd();
    display();

    printf("\n\n");
    insertAtPos();
    display();

    getch();
}

