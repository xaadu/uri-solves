//1184

#include <stdio.h>
int main()
{
    int i,j,k;
    char x;
    double m[12][12];
    double s=0;
    scanf("%c",&x);
    for(i=0,k=0; i<12; i++,k++)
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);
            if(i>=k&&j>=k)
                continue;
            s+=m[i][j];
        }
    printf("%.1lf\n",(x=='S')?s:s/66.0);
    return 0;
}
