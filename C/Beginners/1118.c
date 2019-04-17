//1118

#include<stdio.h>
int main()
{
    double x,av;
    int X,f;
    again:
    X=0;x=0;av=0;f=0;
    scanf("%lf",&x);
    while(x)
    {
        if(x>=0&&x<=10)
        {
            av+=x;
            if(f==1)
                break;
            f=1;
        }
        else
        {
            printf("nota invalida\n");
        }
        scanf("%lf",&x);
    }
    printf("media = %.2lf\n",av/2.0);
    invalid:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&X);
    switch(X)
    {
    case 1:
        goto again;
    case 2:
        return 0;
    default:
        goto invalid;
    }
}
