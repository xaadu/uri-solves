//1177

#include<stdio.h>
int main()
{
    int i=0,j,T;
    int N[1010];
    scanf("%d",&T);
    while(i<1000)
        for(j=0; j<=T-1; i++,j++)
            N[i]=j;
    for(i=0; i<1000; i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}
