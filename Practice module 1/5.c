#include<stdio.h>
int find_sum(int a[],int n)
{
    int i,sum=0,rem;
    for(i=0;i<n;i++)
    {
            rem = a[i]%10;
            if(rem==0)
                sum+=a[i];

    }
    return sum;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = find_sum(a,n);
    printf("%d",sum);
    return 0;
}
