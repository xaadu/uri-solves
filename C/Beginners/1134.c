//1134

#include<stdio.h>
int main()
{
    int x=0,a=0,g=0,d=0;
    while(x!=4)
    {
        scanf("%d",&x);
        (x==1)?a++:(x==2)?g++:(x==3)?d++:x;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
}
