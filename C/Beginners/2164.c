//2164

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double f;
    scanf("%d",&n);
    f=((pow((1+sqrt(5))/2.0,n))-(pow((1-sqrt(5))/2.0,n)))/sqrt(5);
    printf("%.1lf\n",f);\
    return 0;
}
