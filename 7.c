#include<stdio.h>
int main()
{
    int a , b , c , D;
    printf(" ENTER THE VALUE OF A , B AND C  ");
    scanf("%d%d%d",&a,&b,&c);
    D = b*b - 4*a*c;
    if(D>0)
       printf(" real and distinct roots ");
    else 
       if(D==0)
       printf(" real  and equal roots ");
       else
         printf(" imaginary roots ");
         return 0;   


}
