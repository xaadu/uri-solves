//1043

#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,s;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A+B>C && B+C>A && A+C>B)
        printf("Perimetro = %.1lf\n",A+B+C);
    else
        printf("Area = %.1lf\n",0.5*(A+B)*C);
}
