#include<stdio.h>
int main()
{
    FILE *input,*output;
    input = fopen("input4.txt","r");
    output = fopen("output4.txt","w");
    if(input==NULL)
    {
        fprintf(output,"Not found");
        return 0;
    }

    int n,a,sum=0,rem;
    fscanf(input,"%d",&n);
    while(n--)
    {
        fscanf(input,"%d",&a);
        rem = a%10;
        sum+=rem;
    }
    fprintf(output,"Sum = %d",sum);
    fclose(input);
    fclose(output);
    return 0;
}

