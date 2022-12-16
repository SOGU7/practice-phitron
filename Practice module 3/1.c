#include<stdio.h>
int main()
{
    int a;
    FILE *input = fopen("input.txt","r");
    if(input == NULL)
    {
        printf("Sorry cannot find the file");
        return 0;
    }
    else
    {
    FILE *output = fopen("output.txt","w");
    while(1)
    {
        a = fgetc(input);
        if(a==EOF)
            break;
        fputc(a,output);
    }
    fclose(input);
    fclose(output);
    }
    return 0;
}
