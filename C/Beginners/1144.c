//1144

#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    if(N<1||N>1000)
        return 0;
    for(i=1;i<=N;i++)
        printf("%d %d %d\n%d %d %d\n",i,i*i,i*i*i,i,(i*i)+1,(i*i*i)+1);
}
