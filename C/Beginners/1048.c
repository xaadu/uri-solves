//1048

#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x>0&&x<=400)
    {
        y=x+(x*15/100);
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",y-x);
        printf("Em percentual: 15 %%\n");
    }
    else if(x>400&&x<=800)
    {
        y=x+(x*12/100);
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",y-x);
        printf("Em percentual: 12 %%\n");
    }
    else if(x>800&&x<=1200)
    {
        y=x+(x*10/100);
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",y-x);
        printf("Em percentual: 10 %%\n");
    }
    else if(x>1200&&x<=2000)
    {
        y=x+(x*7/100);
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",y-x);
        printf("Em percentual: 7 %%\n");
    }
    else if(x>2000)
    {
        y=x+(x*4/100);
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",y-x);
        printf("Em percentual: 4 %%\n");
    }
}
