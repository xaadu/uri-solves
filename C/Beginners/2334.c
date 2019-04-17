//2334

#include <stdio.h>
int main()
{
    long long int p;
    scanf("%lld",&p);
    while(p!=-1)
    {
        p--;
        if(p>=0)
            printf("%lld\n",p);
        else
            printf("0\n");
        scanf("%lld",&p);
    }
    return 0;
}
