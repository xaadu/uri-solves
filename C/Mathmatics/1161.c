//1161

#include <stdio.h>
long long int fact(long long int x)
{
    int i;
    long long int r=1;
    for(i=1;i<=x;i++)
        r*=i;
    return r;
}
int main()
{
    long long int m,n;
    while(scanf("%lld %lld",&m,&n)==2)
        printf("%lld\n",fact(m)+fact(n));
    return 0;
}
