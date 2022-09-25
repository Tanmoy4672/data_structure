//FILO OR LIFO
#define N 5
int stack[N];
int top = -1;

void Push()
{
    int x;
    printf("Enter Data :");
    scanf("%d",&x);
    if(top == N - 1)
    {
        printf("Overflow");
    }
    else
    {
        top ++;
        stack[top] = x;
    }
}

void Pop()
{
    int item;
    if(top == -1)
    {
        printf("Underflow");
    }
    else
    {
        item = stack[top];
        top --;
        printf("%d",item);
    }
}

//peek or top
void Peek()
{
    if(top == -1)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("%d",stack[top]);
    }
}

void Display()
{
    for(int i = top; i >= 0; i --)
    {
        printf("%d",stack[i]);
    }
}

void main()
{
//    int con;
//    printf("Enter implementation :\n 1. Push \n 2. Pop \n 3.Peek \n 4.Display \n");
//    scanf("%d",&con);
//    switch(con)
//    {
//    case '1' :
    Push(0);
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Display();
    printf("\n");
//        break;
//    case '2' :
    Pop();
    Display();
    printf("\n");
//        break;
//    case '3' :
    Peek();
    Display();
    printf("\n");
//        break;
//    case '4' :
    Display();
////        break;
//
//    }
}
