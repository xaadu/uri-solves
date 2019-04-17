//1074

#include<stdio.h>
int main()
{
    int N,X,i;
    scanf("%d",&N);
    if(N<10000)
    {
        for(i=1; i<=N; i++)
        {
            scanf("%d",&X);
            if(X==0)
                printf("NULL\n");
            else if(X%2!=0)
                if(X<0)
                    printf("ODD NEGATIVE\n");
                else
                    printf("ODD POSITIVE\n");
            else if(X%2==0)
                if(X<0)
                    printf("EVEN NEGATIVE\n");
                else
                    printf("EVEN POSITIVE\n");
        }
    }
}
