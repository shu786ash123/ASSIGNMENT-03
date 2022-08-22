#include<stdio.h>
int main()
{
    float sp,cp,p,pp,l,lp;
    
    scanf("%d%d",&sp,&cp);
    printf(" %d is sp and \n %d is cp",sp,cp);
    if(sp>cp)
    {
    p = sp-cp;
    pp=100*p/cp;
    printf(" %.2f is a profit percentage",pp);
    }
    else
    {
       if(cp>sp)
       {
        l = cp-sp;
        lp = l*100/cp;
        printf(" %.2f is a loss percentage",lp);
       }
        else 
        printf(" no profit no loss");
    }   

}

