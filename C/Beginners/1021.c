//1021

#include<stdio.h>
int main()
{
    double N;
    int x;
    scanf("%lf",&N);
    x=(int)N;
    N-=x;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", x/100);
    x%=100;
    printf("%d nota(s) de R$ 50.00\n", x/50);
    x%=50;
    printf("%d nota(s) de R$ 20.00\n", x/20);
    x%=20;
    printf("%d nota(s) de R$ 10.00\n", x/10);
    x%=10;
    printf("%d nota(s) de R$ 5.00\n", x/5);
    x%=5;
    printf("%d nota(s) de R$ 2.00\n",x/2);
    x%=2;
    printf("MOEDAS:\n");
    x=(x*100)+(N*100);
    printf("%d moeda(s) de R$ 1.00\n",x/100);
    x%=100;
    printf("%d moeda(s) de R$ 0.50\n",x/50);
    x%=50;
    printf("%d moeda(s) de R$ 0.25\n",x/25);
    x%=25;
    printf("%d moeda(s) de R$ 0.10\n",x/10);
    x%=10;
    printf("%d moeda(s) de R$ 0.05\n",x/5);
    x%=5;
    printf("%d moeda(s) de R$ 0.01\n",x/1);
}
