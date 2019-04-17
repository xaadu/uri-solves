//1541

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float x;
    scanf("%d",&a);
    while(a!=0)
    {
        scanf("%d %d",&b,&c);
        x=(a*b*100);
        x/=c;
        x=sqrt(x);
        printf("%d\n",(int)x);
        scanf("%d",&a);
    }
    return 0;
}
