#include<stdio.h>
int main()
{
    int x;
    printf(" ENTER A NUMBER:  ");
    scanf("%d",&x);
    if(x == 0)
        printf( " GIVEN NO. %d IS ZERO ",x);
        if(x>0)
            printf(" GIVEN NO. %d IS POSITIVE",x);
         else
         if(x<0)
            printf(" GIVEN NO. %d is NEGATIVE ",x);
      return 0;         
}