#include<stdio.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode,*temp;

    head =0;
    int choice;
    int count;

    //end of 1st node

    printf("You want to continue this program(0,1)\n");
    scanf("%d",&choice);
//0 means = not continue and 1 means = not continue


//next given node
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter Data : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;

        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

        printf("You want to continue this program(0,1)\n");
        scanf("%d",&choice);
    }

    //end of node

    temp = head;

    //printing part
    printf("\n\n");
    while(temp != 0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
        count++;
    }

    reverse();
    display();

    //end of printing part
    getch();



}

void reverse()
{
      struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *preNode, *currentNode, *nextNode;
    preNode=0;
    currentNode = nextNode = head;

    while(nextNode!=0)
    {
        nextNode = nextNode->next;
        currentNode->next=preNode;
        preNode=currentNode;
        currentNode=nextNode;
    }

    head = preNode;



}


void display()
{
      //printing part
    printf("\n\n");
    while(currentNode != 0)
    {
        printf("%d  ",preNode->data);
        currentNode=currentNode->next;
        count++;
    }

}

