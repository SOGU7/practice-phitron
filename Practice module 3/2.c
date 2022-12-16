#include<stdio.h>
int main()
{
    FILE *input = fopen("input2.txt","r");
    FILE *output = fopen("output2.txt","w");
    int a,i;
    if(input==NULL)
    {
        printf("Sorry cannot find the file");
        return 0;
    }
    else
    {
        fscanf(input,"%d",&a);

        for(i=1;i<=a;i++)
        {
            fprintf(output,"%d ",i);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
