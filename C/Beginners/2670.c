//2670

#include <stdio.h>
int main()
{
    long long int a1,a2,a3;
    scanf("%lld %lld %lld",&a1,&a2,&a3);
    printf("%lld\n",(a1>a2&&a1>a3)?(a2*2)+(a3*4):(a3>a1&&a3>a2)?(a2*2)+(a1*4):(a1*2)+(a3*2));
    return 0;
}
