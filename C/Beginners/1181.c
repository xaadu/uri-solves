//1181

#include <stdio.h>
int main()
{
    int i,j,l;
    char x;
    double m[12][12];
    double s=0;
    scanf("%d %c",&l,&x);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);
            if(i==l)
                s+=m[i][j];
        }
    }
    printf("%.1lf\n",(x=='S')?s:s/12.0);
    return 0;
}
