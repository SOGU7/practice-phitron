#include<stdio.h>
void print(int cur,int n)
{
    if(cur<=n)
    {
        printf("%d ",cur);
        print(cur+1,n);
    }
    else
        return;
}
int main()
{
    int n;
    scanf("%d",&n);
    print(1,n);
    return 0;
}
