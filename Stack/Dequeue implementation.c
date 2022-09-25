#define N 5
#include<stdio.h>

int Deque[N];

int front = -1,Rare = -1;

void EnQueueFront(int inputNumber)
{
    if((front == 0 && Rare == N-1) || (front = Rare +1))
    {
        printf("Queue is full.");
    }
    else if(front == -1 && Rare == -1)
    {
        front = Rare = 0;
        Deque[front] = inputNumber;
    }
    else if (front == 0 )
    {
        front = N - 1;
        Deque[front] = inputNumber;
    }
    else
    {
        front --;
        Deque[front] = inputNumber;
    }
}

void EnqueueRare(int inputNumber)
{
    if((front == 0 && Rare == N-1) || (front = Rare +1))
    {
        printf("Queue is full.");
    }
    else if(front == -1 && Rare == -1)
    {
        front = Rare = 0;
        Deque[Rare] = inputNumber;
    }
    else if(Rare == N -1)
    {
        Rare = 0;
        Deque[Rare] = inputNumber;
    }
    else
    {
        Rare ++;
        Deque[Rare] = inputNumber;
    }
}

void Display()
{
    int i = front;
    while(i != Rare)
    {
        printf("%d\t",Deque[i]);
        i = (i + 1) % N;
    }
    printf("%d\t",Deque[Rare]);
}

void getFront()
{
    printf("%d",Deque[front]);
}
void getRare()
{
    printf("%d",Deque[Rare]);
}

void dequeFront()
{
    if(front == -1 && Rare == -1 )
    {
        printf("Queue is empty.");
    }
    else if(front == Rare)
    {
        front = Rare = -1;
    }
    else if(front = N -1)
    {
        printf("%d",Deque[front]);
        front = 0;
    }
    else
    {
        printf("%d",Deque[front]);
        front ++;
    }
}

void DeQueueRare()
{
     if(front == -1 && Rare == -1 )
    {
        printf("Queue is empty.");
    }
    else if(front == Rare)
    {
        front = Rare = -1;
    }
    else if(Rare == 0)
    {
        printf("%d",Deque[Rare]);
        Rare = N -1;
    }
    else
    {
        printf("%d",Deque[Rare]);
        Rare --;
    }
}

int main()
{
    EnQueueFront(2);
    EnQueueFront(5);
    EnqueueRare(-1);
    EnqueueRare(0);
    EnQueueFront(7);
    printf("\n");
    EnQueueFront(4);
    Display();
    printf("\n");
    getFront();
    printf("\n");
    getRare();

    dequeFront();
    DeQueueRare();
    dequeFront();
    return 0;
}
