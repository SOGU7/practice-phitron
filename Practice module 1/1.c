#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int *p,*q;
    p=&x;
    q=&y;
    printf("%d",(*p+*q)/2);
    return 0;
}
