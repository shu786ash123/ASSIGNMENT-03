#include<stdio.h>
int main()
{
    int x;
    printf(" ENTER THE MONTH NUMBER : \n");
    scanf("%d",&x);
    if(x==1)
        printf(" JANUARY-31 DAYS");
    else if(x==2)
    printf(" february-28/29 days");
    else if(x==3)
    printf("march - 31  days");
    else if(x==4)
    printf(" april - 30 days");
    else if(x==5)
    printf(" may - 31 days");
    else if (x==6)
    printf("june-30 days");
    else if (x==7)
    printf("july-31 dAYS");
    else if(x==8)
    printf("august-31 days");

    else if(x==9)
    printf("september - 30 days");

    else if(x==10)
    printf("october-31 days");

    else if(x==11)
    printf("november - 30 days");

    else if(x==12)
    printf("december - 31 days");
    else
    printf("month number is not vakid");
    return 0;

}
