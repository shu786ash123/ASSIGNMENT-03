#include<stdio.h>
int main()
{
    int x;
    printf(" ENTER A YEAR ");
    scanf("%d",&x);
    if(x%100 == 0)
        if(x%400 == 0)
            printf(" %d is a leap year ",x);
        else
            printf(" %d is a non leap year",x);//one line code
    else
        if(x%4 == 0)
            printf(" %d is a leap year ",x);
        else
            printf(" %d is a non leap year ",x);
            return 0;                
}