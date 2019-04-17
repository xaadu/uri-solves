//1914

#include <stdio.h>
#include <string.h>
int main()
{
    long long int t,i,n,m;
    char a[15],x[10],b[10],y[10];
    for(scanf("%lld",&t);t!=0;t--)
    {
        scanf("%s %s %s %s",&a,&x,&b,&y);
        scanf("%lld %lld",&n,&m);
        printf("%s\n",((n+m)%2==0)?(strcmp(x,"PAR")==0)?a:b:(strcmp(x,"IMPAR")==0)?a:b);
    }
    return 0;
}
