#include<stdio.h>
int main()
{
    int mm,em,ssm,sm,hm;
    printf("enter the marks of five subjects out of 100 each ");
    scanf("%d%d%d%d%d",&mm,&em,&ssm,&sm,&hm);
    if(mm>=33 && em>=33 && ssm>=33 && sm>=33 && hm>=33)
        printf(" passed in examination ");
    else    
        printf(" failed in examination ");
        return 0;    
}