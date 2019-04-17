//1984

#include <stdio.h>
int main()
{
    long long int n,f1=0,f2=0,rev,rev2;
    for(scanf("%llu",&n),rev=0; n!=0; n/=10)
    {
        rev=(rev*10)+(n%10);
        f1++;
    }
    rev2=rev;
    while(rev2!=0)
    {
        f2++;
        rev2/=10;
    }
    for(; f1>f2; f1--)
        printf("0");
    printf("%lld\n",rev);
    return 0;
}
