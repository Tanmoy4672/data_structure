#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello";
    return 0;
}

public static int minCost(int n, int a[])
{
    if(n==0)
        return 0;
    for(int i = 0; i<a.lenght ; i++)
    {
        if(n-a[i]> 0)
        {
            int subAns = minCost(n - a[i], a);
        }
    }
}
