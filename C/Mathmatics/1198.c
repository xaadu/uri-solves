//1198

#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int x,y;
    while(scanf("%lld %lld",&x,&y)==2)
    {
        if(x>y)
            x-=y;
        else
            x=y-x;
        printf("%lld\n",x);
    }
    return 0;
}
