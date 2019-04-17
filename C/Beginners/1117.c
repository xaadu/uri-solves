//1117

#include<stdio.h>
int main()
{
    double x=0,av;
    int f=0;
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
}
