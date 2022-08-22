#include<stdio.h>
int main()
{
    int x;
    printf("ENTER A NUMBER:  ");
    scanf("%d",&x);
    if(x>0)
        printf(" GIVEN NUMBER %d IS A POSITIVE NUMBER",x);
    else
        printf(" GIVEN NUMBER %d IS A NON POSITIVE",x);
        return 0;
}
