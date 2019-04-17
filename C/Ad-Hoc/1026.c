//1026

#include<stdio.h>
int main()
{
    unsigned long long int x,y;
    while(scanf("%lld %lld",&x,&y)==2)
        printf("%lld\n",x^y);
    return 0;
}
