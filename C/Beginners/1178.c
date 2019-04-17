//1178

#include<stdio.h>
int main()
{
    double N[120],X;
    int i;
    scanf("%lf",&X);
    N[0]=X;
    printf("N[0] = %.4lf\n",X);
    for(i=1;i<100;i++)
        printf("N[%d] = %.4lf\n",i,X/=2.0);
}
