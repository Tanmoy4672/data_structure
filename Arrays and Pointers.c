#include<stdio.h>
int main()
{
    int b=10;
    int *p;
    p=&b;

    printf("%d\n",*p);
    printf("%d\n",b);
    printf("%p\n",&b);
    printf("%p",p);

    printf("\n\n\n");
    //array pointers
    int a[]= {6,2,1,5,3};
    int *q;
    q=a;

    printf("%d\n",*a);  //6
     printf("%d\n\n",*q);

    printf("%p\n",a);
    printf("%p\n",q);
    q++;

    printf("%p\n",&a);
    printf("%p\n\n",&q);

    printf("%d\n",a[2]);  //1
    printf("%d\n",2[a]);  //1
    printf("%d\n\n\n",*(a+2)); //1


    printf("%d\n",*(q+1)); //1
    printf("%d\n",1[q]);  //1
    printf("%d\n",q[1]);  //1

    return 0;
}
