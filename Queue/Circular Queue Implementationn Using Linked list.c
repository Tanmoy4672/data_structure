#include<stdio.h>

struct node
{
    int data;
    struct node * next;
};


struct node *front = 0;
struct node *rare = 0;

void EnQueue(int x)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = 0;

    if(rare==0)
    {
        front = rare = newNode;
        rare ->next = front;
    }
    else
    {
        rare ->next = newNode;
        rare = newNode;
        rare ->next = front;
    }
}


void DeQueqe()
{
    struct node *temp;
    temp = front;
    if(front ==0 && rare == 0)
    {
        printf("There is nothing in the queue.");
    }
    else if(front == rare)
    {
        //one element on the circular queue
        front = rare =0;
        free(temp);
    }
    else
    {
        front = front ->next;
        rare ->next = front;
        free(temp);
    }
}

void Peek()
{
    if(front == 0 && rare ==0)
    {
        printf("There is nothing in the queue.");
    }
    else
    {
        printf("%d",front ->data);
    }
}

void Display()
{
    struct node *temp;
    temp = front;
     if(front == 0 && rare ==0)
    {
        printf("There is nothing in the queue.");
    }
    else
    {
        while(temp ->next !=front)
        {
            printf("%d",temp->data);
            temp = temp ->next;
        }
        printf("%d",temp->data);
    }
}

void main()
{
    EnQueue(2);
    EnQueue(-1);
    EnQueue(5);
    Display();
    printf("\n");
    DeQueqe();
    printf("\n");
    Peek();
}
