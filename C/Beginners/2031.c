//2031

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char x[15],y[15];
    for(scanf("%d",&n);n!=0;n--)
    {
        scanf("%s %s",&x,&y);
        printf("%s\n",(strcmp(x,"papel")==0&&strcmp(y,"papel")==0)?"Ambos venceram":(strcmp(x,"pedra")==0&&strcmp(y,"pedra")==0)?"Sem ganhador":(strcmp(x,"ataque")==0&&strcmp(y,"ataque")==0)?"Aniquilacao mutua":((strcmp(x,"ataque")==0&&strcmp(y,"pedra")==0)||(strcmp(x,"pedra")==0&&strcmp(y,"papel")==0)||strcmp(x,"ataque")==0&&strcmp(y,"papel")==0)?"Jogador 1 venceu":"Jogador 2 venceu");
    }
    return 0;
}
