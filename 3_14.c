#include<stdio.h>
int main()
{
    int x;
    printf(" ENTER A NUMBER: ");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
        printf(" given no. %d is divible by 3 or 7", x);
    else
        printf(" given no. %d is not divisible by 3 or 7", x);
        return 0;    
}