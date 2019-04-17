//1099

#include<stdio.h>
int main()
{
    int N,X,Y,s=0,i,j;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        s=0;
        scanf("%d %d",&X,&Y);
        if(X>Y)
        {
            for(j=Y+1; j<X; j++)
                if(j%2!=0)
                    s+=j;
        }
        else
        {
            for(j=X+1; j<Y; j++)
                if(j%2!=0)
                    s+=j;
        }
        printf("%d\n",s);
    }
}
