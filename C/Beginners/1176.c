//1176

#include<stdio.h>
int main()
{
    int i,j,T;
    long long int N[65];
    N[0]=0;
    N[1]=1;

    for(i=2;i<65;i++)
        N[i]=N[i-1]+N[i-2];

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&j);
        printf("Fib(%d) = %lld\n",j,N[j]);
    }
}
