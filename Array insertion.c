#include<stdio.h>
int main()
{
    int a[50],size,i,pos,num;

    printf("Enter the array size :");
    scanf("%d",&size);

    if(size>50)
        printf("This is a overflow condition.");
    else
        printf("Enter array's elements :");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are :");
    for(i=0; i<size; i++)
    {
        printf("%d",a[i]);
        printf(", ");

    }

    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("Enter the new value :");
    scanf("%d",&num);

    if(pos<=0 || pos>size+1)
        printf("Invalid position.")
        else
            //insert a element
            for(i=size-1; i>=pos-1; i--)
            {
                a[i+1]=a[i];
            }
    a[pos-1]=num;
    size++;

    printf("Elements are after insertion: ");
    for(i=0; i<size; i++)
    {
        printf("%d",a[i]);
        printf(", ");
    }
    return 0;
}
