//1190

#include <stdio.h>
int main()
{
    int i,j,k,l;
    char x;
    double m[12][12];
    double s=0;
    scanf("%c",&x);
    for(i=0,k=11,l=0; i<12; i++,l++,k--)
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);
            if((i<=l&&j<=l)||(i<l||j<=k))
                continue;
            s+=m[i][j];
        }
    printf("%.1lf\n",(x=='S')?s:s/30.0);
    return 0;
}
