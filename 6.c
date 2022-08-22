#include<stdio.h>
int main()
{
    int x,y;
    printf(" enter two number: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    printf(" %d is greater number",x);
    else
        if(x==y)
        printf(" %d is a greater number ",x);
        else
        printf("%d is greater number",y);
        return 0;
}




   
