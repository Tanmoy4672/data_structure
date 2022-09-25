// create 2 stack
//Enqueue in Stack 1  & Dequeue in Stack 2
// enqueue = O(1)
//dequeue = O(n)

#include<stdio.h>
#define N 5
int Stack1[N], Stack2[N];
int top1 = -1, top2 = -1;
int count = 0;

//push 1 for stack 1
void Push1(int data)
{
    if(top1 == (N -1))
    {
        printf("Overflow");
    }
    else
    {
        top1 ++;
        Stack1[top1] = data;
    }
}

//push 2 for stack 2
void Push2(int data)
{
    if(top2 == (N -1))
    {
        printf("Overflow");
    }
    else
    {
        top1 ++;
        Stack2[top2] = data;
    }
}


void Enqueue(int n)
{
    Push1(n);
    count ++;
}

//pop1 for stack 1
int Pop1()
{
    return Stack1[top1 --];
}

//pop 2 for stack 2
int Pop2()
{
    return Stack2[top2 --];
}

void Dequeue()
{
    int i, b;
    if(top1 == -1 && top2==-1)
    {
        printf("Queue is empty.");
    }
    else
    {
        for(i = 0 ; i< count; i++)
        {
            push2(Pop1());
        }
        b = Pop2();
        printf("Dequeue element : %d",b);
        count --;
        for( i = 0; i<count ; i++)
        {
            Push1(Pop2());
        }

    }
}

void Display()
{
    int i;
    printf("\n");
    for(i = 0; i<top1; i++)
    {
        printf("%d",Stack1[i]);
    }
}

void main()
{
    Enqueue(5);
    Enqueue(2);
    Enqueue(-1);
    Dequeue();
    Enqueue(-1);
    Display();

    return 0;
}
