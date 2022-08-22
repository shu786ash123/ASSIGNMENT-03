#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:  ");
    scanf("%d",&x);
    if(x%2)
        printf(" %d is a odd number",x);
    else
        printf(" %d is an even number ",x);
        return 0;    
}
