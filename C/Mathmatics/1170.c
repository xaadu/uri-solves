//1170

#include <stdio.h>
int main()
{
    int n,i;
    double y;
    scanf("%d",&n);
    while(n!=0)
    {
        --n;
        i=0;
        scanf("%lf",&y);
        for(; y>1; y/=2.0)
            i++;

        printf("%d dias\n",i);
    }
    return 0;
}
