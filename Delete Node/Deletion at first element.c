#include<stdio.h>
int main()
{
    int a[50],size,i,pos=1;

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

    if(pos<=0 || pos>size)
        printf("Invalid element");
    else
    //shifting for delete element
    for(i=0; i<size-1; i++){
        a[i]=a[i+1];
    }
    size--;

    printf("Elements are after deletion:  \n");
    for(i=0; i<size; i++)
    {
        printf("array[%d]= %d\n",i,a[i]);
    }
    return 0;
}


