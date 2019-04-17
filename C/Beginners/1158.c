//1158

#include<stdio.h>
int main()
{
    int N,i,j,X,Y,s;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);
        s=0;
        for(j=1;j<=Y;j++)
        {
            if(X%2==0)
                X++;
            s+=X;
            X+=2;
        }
        printf("%d\n",s);
    }
}
