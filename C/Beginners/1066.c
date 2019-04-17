//1066

#include<stdio.h>
int main()
{
    int x[5],i,e=0,o=0,p=0,n=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
            ++e;
        if(x[i]%2!=0)
            ++o;
        if(x[i]>0)
            ++p;
        if(x[i]<0)
            ++n;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);
}
