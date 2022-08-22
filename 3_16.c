#include<stdio.h>
int main()
{
    char x;
    printf(" ENTER A CHARACTER: ");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    printf(" given %c is in upper case",x);
    else if(x>='a' && x<= 'z')
    printf(" given %c is in lower case",x);
    else if(x>= '0' && x<= '9')
    printf(" given %c is number ",x);
    else 
    printf(" given %c is a special character",x);
    return 0;
         
    


}