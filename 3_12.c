#include<stdio.h>
int  main()
{
    char x ;
    printf(" enter alphabet then output gives you it is in uc or lc ");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf(" given %c is in upper case ",x);
    else
        printf(" given alphabet %c is in lower case ",x);
        return 0;    
}