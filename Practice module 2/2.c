#include<stdio.h>
int add_digit(int a[],int n)
{
    if(n!=0)
    {
        return a[0]%10+add_digit((a+1),n-1);

    }
    else
        return 0;
}
int main()
{
    int n,z=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z = add_digit(a,n);
    printf("%d",z);
    return 0;
}
