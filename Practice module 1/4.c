#include<stdio.h>
#define pi 3.1416
float find_area(int r)
{
    return pi*r*r;
}
int main()
{
    int r;
    scanf("%d",&r);
    float area = find_area(r);
    printf(" Area = %.2f",area);
    return 0;
}
