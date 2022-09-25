#include<stdio.h>
int main()
{
    int a[50],size,i,pos,num;

    printf("Enter the array size :");
    scanf("%d",&size);

    if(size>50)
        printf("This is a overflow condition.");
    else
        printf("Enter array's elements : \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are : \n");
    for(i=0; i<size; i++)
    {
        printf("array[%d]= %d\n",i,a[i]);
    }

    if(size<0)
        printf("Invalid element");
    else
        printf("\nEnter the new value :");
    scanf("%d",&num);

    //insert a element in first of array
    for(i=size-1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=num;
    size++;

    printf("Elements are after insertion:  \n");
    for(i=0; i<size; i++)
    {
        printf("array[%d]= %d\n",i,a[i]);

    }
    return 0;
}
