#include<stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void EnQueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear + 1)%N) == front)
    {
        printf("Queue is full.");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}




void DeQueue()
{
    if(front == -1 && rear == -1)
    {
        printf("List is empty.");
    }
    else if(front == rear)
    {
        printf("The dequeue element is %d",queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The dequeue element is %d",queue[front]);
        front = (front + 1) % N;
    }
}


void Display()
{
    int i = front;

    if(front == -1 && rear == -1)
    {
        printf("List is empty.");
    }
    else
    {
        while( i != rear)
        {
            printf("%d",queue[i]);
            i = (i +1 ) % N;
        }
        printf("%d",queue[rear]);
    }
}

void main()
{
    EnQueue(2);
    EnQueue(-1);
    EnQueue(5);
    EnQueue(6);
    EnQueue(7);

    Display();
    DeQueue ();
    Display();
}
