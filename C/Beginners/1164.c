//1164

#include<stdio.h>
int main()
{
    int N,X,i,j,div;
    again:
    scanf("%d",&N);
    if(N<0)
        goto again;
    if(N<1||N>100)
        return 0;
    for(i=1;i<=N;i++)
    {
        div=0;
        scanf("%d",&X);
        for(j=1;j<X;j++)
            if(X%j==0)
                div+=j;
        (X==div)?printf("%d eh perfeito\n",X):printf("%d nao eh perfeito\n",X);
    }
}
