//1079

#include<stdio.h>
int main()
{
    int N,i;
    double a,b,c;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        printf("%.1lf\n",((a*2)+(b*3)+(c*5))/(2+3+5));
    }

}
