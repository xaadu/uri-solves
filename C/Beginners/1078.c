//1078

#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    if(N>1&&N<1000)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",i,N,i*N);
        }
    }
}
