#include<stdio.h>

//implementing queue by FIFO  - Order of  O(n)

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void Enque(int x)
{

    if(rear == N-1)
    {
        printf("Overflow");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear ++;
        queue[rear] = x;
    }

}


void Dequeue()
{
    if(front == -1 || rear == -1)
    {
        printf("List is empty.");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Dequeue data from queue :  %d",queue[front]);
        front ++;
    }

}

void display()
{

    if(front == -1 || front == -1)
    {
        printf("Queue is empty.");
    }
    else
    {
        for(int i = front ; i < rear +1; i ++)
        {
            printf("%d ",queue[i]);
        }
    }
}

void Peek()
{
    if(front == -1 || front == -1)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("%d",queue[front]);
    }
}

void main()
{
    Enque(2);
    Enque(5);
    Enque(-1);

    printf("Display all queue: "); // 2 5 -1
    display();
    printf("\nPeeking Queue Elements : ");  //2
    Peek();

    printf("\n");
    Dequeue();     //2
    printf("\nPeeking Queue Elements : ");  //5
    Peek();

    printf("\nDisplay all queue: ");   //5 -1
    display();


}

