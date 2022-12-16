#include<stdio.h>
int main()
{
    FILE *input = fopen("input6.txt","r");
    FILE *log = fopen("output6.txt","a");
    if(input==NULL)
    {
        printf("Sorry the file is not here");
        return 0;
    }
    else
    {
        int year;
        fscanf(input,"%d",&year);
       if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
            {
                fprintf(log,"%d-->YES\n",year);
            }
        else
        {
            fprintf(log,"%d-->NO\n",year);
        }
    }
    fclose(input);
    fclose(log);
    return 0;
}
