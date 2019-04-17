//1985

#include <stdio.h>
int main()
{
    double r;
    int p,q,t;
    scanf("%d",&t);
    for(r=0; t!=0; t--)
    {
        scanf("%d %d",&p,&q);
        switch(p)
        {
        case 1001:
            r+=(q*1.50);
            break;
        case 1002:
            r+=(q*2.50);
            break;
        case 1003:
            r+=(q*3.50);
            break;
        case 1004:
            r+=(q*4.50);
            break;
        case 1005:
            r+=(q*5.50);
            break;
        }
    }
    printf("%.2lf\n",r);
    return 0;
}
