//1165

#include<stdio.h>
int main()
{
    int N,X,i,j,f;
    scanf("%d",&N);
    if(N<0||N>100)
        return 0;
    for(i=1;i<=N;i++)
    {
        f=1;
        scanf("%d",&X);
        for(j=2;j<X;j++)
            if(X%j==0)
                f=0;
        (f==0)?printf("%d nao eh primo\n",X):printf("%d eh primo\n",X);
    }
}
