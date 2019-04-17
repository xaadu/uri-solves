//1960

#include <stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    if(x>=1000)
        for(; x/1000!=0; x-=1000)
            printf("M");
    if(x>=900)
    {
        printf("CM");
        x-=900;
    }
    if(x>=500)
        for(; x/500!=0; x-=500)
            printf("D");
    if(x>=400)
    {
        printf("CD");
        x-=400;
    }
    if(x>=100)
        for(; x/100!=0; x-=100)
            printf("C");
    if(x>=90)
    {
        printf("XC");
        x-=90;
    }
    if(x>=50)
        for(; x/50!=0; x-=50)
            printf("L");
    if(x>=40)
    {
        printf("XL");
        x-=40;
    }
    if(x>=10)
        for(; x/10!=0; x-=10)
            printf("X");
    if(x>=9)
    {
        printf("IX");
        x-=9;
    }
    if(x>=5)
        for(; x/5!=0; x-=5)
            printf("V");
    if(x>=4)
    {
        printf("IV");
        x-=4;
    }
    if(x>=1)
        for(; x/1!=0; x-=1)
            printf("I");
    printf("\n");
    return 0;
}
