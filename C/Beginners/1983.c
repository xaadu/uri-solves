//1983

#include <stdio.h>
int main()
{
    long long int n,m,f2,i;
    double note,f1;
    for(scanf("%lld",&n);n!=0;n--)
    {
        scanf("%lld %lf",&m,&note);
        if(i==0)
            f1=note;
        else if(f1<note)
        {
            f1=note;
            f2=m;
        }
    }
    (f1>=8)?printf("%lld\n",f2):printf("Minimum note not reached\n");
    return 0;
}
