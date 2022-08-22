#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" ENTRE THREE SIDES OF TRIENGLE:\n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b )
        printf(" VALID TRIANGLE ");
    else
        printf(" INVALID TRIANGLE ");
        return 0;    

}