#include<stdio.h>
void alter_case(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]%2==0)
            s[i]=s[i]-32;
    }
    printf("%s",s);
}
int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strlen(s)-1]='\0';
    alter_case(s);
    return 0;
}
