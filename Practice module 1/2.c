#include<stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before bubblesort = \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
    printf("After Bubble sort = \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
