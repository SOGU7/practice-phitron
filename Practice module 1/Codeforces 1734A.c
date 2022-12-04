#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    while(t--)
    {
        int c =0,tem;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    tem=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tem;
                }
            }
        }
       for(i=0;i<n;i++)
       {
           if(a[0]<a[1])
           {
               a[0]+=1;
               c++;
           }
           else if(a[2]>a[1])
           {
               a[2]-=1;
               c++;
           }
           if(a[0]==a[1]&&a[1]==a[2])
            break;
       }
        printf("%d\n",c);
    }
    return 0;
}
