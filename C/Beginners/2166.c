//2166

#include <stdio.h>
#include <math.h>
int main()
{
    double a,x,i;
    scanf("%lf",&a);
    x=1;
    for(i=1;i<=a;i++)
    {
        x=x+(1/(a+(1/a)));
    }
    printf("%.10lf",x);
    return 0;
}
