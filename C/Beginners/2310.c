//2310

#include <stdio.h>
int main()
{
    int t,ss,sb,sa,as,ab,aa,a=0,b=0,c=0,d=0,e=0,f=0;
    char x[100];
    for(scanf("%d",&t);t!=0;t--)
    {
        scanf("%s",&x);
        scanf("%d %d %d %d %d %d",&as,&ab,&aa,&ss,&sb,&sa);
        a+=as;
        b+=ab;
        c+=aa;
        d+=ss;
        e+=sb;
        f+=sa;
    }
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",(((double)d)*100.0/a*1.0),(((double)e)*100.0/b*1.0),(((double)f)*100.0/c*1.0));
    return 0;
}
