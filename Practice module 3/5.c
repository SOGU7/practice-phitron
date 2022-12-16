#include<stdio.h>
int main()
{
    FILE *input,*output;
    input = fopen("input5.txt","r");
    output = fopen("output5.txt","w");
    if(input==NULL)
    {
        fprintf(output,"Not found");
        return 0;
    }

    int n,i,j;
    fscanf(input,"%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            fprintf(output," ");
        for(j=1;j<=n;j++)
            fprintf(output,"#");
        fprintf(output,"\n");
    }
    fclose(input);
    fclose(output);
    return 0;
}


