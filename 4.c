#include<stdio.h>
int main()
{
    int y,x;
    printf(" enter a number: ");
    scanf("%d",&x);
    y = x/2;
    if(x == y*2)
        printf(" %d is a even number",x);
    else    
        printf(" %d is a odd number ",x);
        return 0;    
}
