#include<stdio.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = 0;

void Push(int n)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode ->data = n;
    newNode ->link = top;
    top = newNode;
}

void Display()
{
    struct node *temp;
    temp = top;
    if(top == 0)
    {
        printf("List is empty.");
    }
    else
    {
        while(temp !=0)
        {
            printf("%d",temp->data);
            temp = temp ->link;
            printf("\n");
        }

    }
}


void Peek()
{
    if(top == 0)
    {
        printf("List is empty.");
    }
    else
    {
        printf("Top element is  :  %d",top ->data);
    }
}

void Pop()
{
    struct node *temp;
    temp = top;
    if (top ==0)
    {
        printf("List is empty");
    }
    else
    {
        printf("%d",top ->data);
        top = top ->link;
        free(temp);
    }

}

int main()
{
    Push(2);
    Push(3);
    Push(10);
    Display();   //10   3   2
    Peek(); //top element is  10
    printf("\n");
    Pop();  // 10
    printf("\n");
    Peek();  //3
    printf("\n");
    Display();  //3    2
}
