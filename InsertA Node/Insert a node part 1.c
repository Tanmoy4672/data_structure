#include<stdio.h>

int main()
{

}

void insertAtBeginning()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *head, *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter Data you want to insert: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

    //you have to right one insert first

}

void insertAtEnd()
{
    struct node
    {
        int item;
        struct node* next;
    };
    struct node *head, *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter Data you want to insert: ");
    scanf("%d",&newnode->item);
    newnode->next=0;
    temp=head;

    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next = newnode;

}

void insertAfterAGivenLocation()
{
    int pos,i = 1;
    struct node
    {
        int item;
        struct node* next;
    };
    struct node *head, *newnode,*temp;
    //newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter Data you want to insert: ");
    scanf("%d",&pos);

    if(pos>count)
    {
        printf("Invalid Position.")
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->next=item);
        //always we should insert right side link
         newnode->next = temp->next;
         temp->next= newnode;
    }

}
