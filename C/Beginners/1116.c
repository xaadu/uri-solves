//1116

#include<stdio.h>
int main()
{
    int N,x,y,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n",x/(y*1.0));
    }
}
