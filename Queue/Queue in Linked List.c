#include<stdio.h>


struct node
{
    int data;
    struct node *next;
};

//Queue always follow order of O(1)

struct node *front = 0;
struct node *rear  = 0;

void EnQueue(int x)
{
    struct node * newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data =x;
    newNode ->next =0;

    if(front == 0 && rear == 0)
    {
        front = rear = newNode;
    }
    else
    {
        rear ->next = newNode;
        rear = newNode;
    }
}

void Display()
{
    struct node * temp;
    if(front == 0 && rear ==0)
    {
        printf("List is empty is queue.");
    }
    else
    {
        temp = front;
        while(temp !=0)
        {
            printf("%d   ",temp ->data);
            temp = temp ->next;
        }
    }
}

void DeQueue()
{
    struct node * temp;

    temp = front;
    if(front ==0 && rear ==0)
    {
        printf("The list is empty.");
    }
    else
    {
        printf("Dequeue element : %d",front ->data);
        front = front ->next;
        free(temp);
    }
}

void Peek()
{
    if(front ==0 && rear ==0)
    {
        printf("The list is empty.");
    }
    else
    {
        printf("Peek first  element : %d",front ->data);
    }
}



void main()
{
    EnQueue(5);
    EnQueue(0);
    EnQueue(-3);
    printf("Queue is list :");
    Display();

    printf("\n");
    DeQueue();
    printf("\n");
    Peek();

    printf("\nUpdate Queue is list :");
    Display();
}


