#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int z = sum(n);
    printf("%d",z);
    return 0;
}
