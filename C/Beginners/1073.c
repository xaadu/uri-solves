//1073

#include<stdio.h>
#include<math.h>
int main()
{
    int N,i;
    double power;
    scanf("%d",&N);
    for(i=2;i<=N;i+=2)
    {
        power=pow(i,2);
        printf("%d^%d = %.0lf\n",i,2,power);
    }
}
