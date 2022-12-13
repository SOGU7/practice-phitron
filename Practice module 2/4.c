#include<stdio.h>
void print(int cur,int n)
{
    if(cur<=n)
    {
        print(cur+1,n);
        printf("%d ",cur);
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
