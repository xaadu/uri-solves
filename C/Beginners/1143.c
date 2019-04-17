//1143

#include<stdio.h>
#include<math.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    if(N<0||N>1000)
        return 0;
    for(i=1;i<=N;i++)
        printf("%d %d %d\n",i,i*i,i*i*i);
}
