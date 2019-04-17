//1046

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=(24-a)+b;
    if(a>24)
        a-=24;
    printf("O JOGO DUROU %d HORA(S)\n",a);
}
