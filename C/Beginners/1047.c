//1047

#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a=(1440-((a*60)+b))+((c*60)+d);
    x=a/60.0;
    b=a/60;
    if(x>24)
    {
        b=a/60;
        b-=24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b,a%60);
}
