#include<stdio.h>
int main()
{
    FILE *input = fopen("input3.txt","r");
    FILE *output = fopen("output3.txt","w");
    int a,i;
    if(input==NULL)
    {
        printf("Sorry cannot find the file");
        return 0;
    }
    else
    {
        int n,a;
        fscanf(input,"%d",&n);
        while(n--)
        {

            fscanf(input,"%d",&a);
            if(a>=0)
            {
                for(i=a; i>=-a; i--)
                {
                    fprintf(output,"%d ",i);
                }
                fprintf(output,"\n");
            }
            else
            {
                for(i=a; i<=-a; i++)
                {
                    fprintf(output,"%d ",i);
                }
                fprintf(output,"\n");
            }
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}

