//1051

#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(x>=0&&x<=2000)
        printf("Isento\n");
    else if(x>2000&&x<=3000)
        printf("R$ %.2lf\n",(x-2000)*(8/100.0));
    else if(x>3000&&x<=4500)
        printf("R$ %.2lf\n",((x-3000)*(18/100.0))+80);
    else if(x>4500)
        printf("R$ %.2lf\n",((x-4500)*(28/100.0))+80+270);
}
