//1010
#include<stdio.h>
int main()
{
    int code1,code2;
    double num1,num2,price1,price2;
    scanf("%d %lf %lf",&code1,&num1,&price1);
    scanf("%d %lf %lf",&code2,&num2,&price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",(num1*price1)+(num2*price2));
}
