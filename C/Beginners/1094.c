//1094

#include<stdio.h>
int main()
{
    int N,i,Amount,x=0,c=0,r=0,s=0;
    char Type;

    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %c",&Amount, &Type);
        x+=Amount;
        if(Type=='C'||Type=='c')
            c+=Amount;
        else if(Type=='R'||Type=='r')
            r+=Amount;
        else if(Type=='S'||Type=='s')
            s+=Amount;
    }
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",x,c,r,s);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",(c*100.0)/(x*1.0),(r*100.0)/(x*1.0),(s*100.0)/(x*1.0));
}
