//1101

#include<stdio.h>
int main()
{
    int M=1,N=1,i,s=0;
    for(scanf("%d %d",&M,&N);M>0&&N>0;s=0)
    {
        if(M<N)
        {
            for(i=M;i<=N;i++)
            {
                printf("%d ",i);
                s+=i;
            }
            printf("Sum=%d\n",s);
        }
        if(M>N)
        {
            for(i=N;i<=M;i++)
            {
                printf("%d ",i);
                s+=i;
            }
            printf("Sum=%d\n",s);
        }
        scanf("%d %d",&M,&N);
    }
}
