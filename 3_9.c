#include<stdio.h>
int main()
{
    int x,y,z;
    printf(" ENTER THREE NUMBERS:  ");
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y && y>=z )
        printf(" %d is the greater among three number",x);
    else
        if(z>=y)
            printf("%d is greater among three number",z);
        else
            printf("%d is greater among three number ",y);
            return 0;        
}