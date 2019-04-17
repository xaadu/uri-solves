//1589

#include <stdio.h>
int main()
{
    long long int t,r1,r2;
    scanf("%lld",&t);
    while(t!=0)
    {
        t--;
        scanf("%lld %lld",&r1,&r2);
        printf("%lld\n",r1+r2);
    }
    return 0;
}
