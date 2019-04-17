//1036

#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,det;
    scanf("%lf %lf %lf",&A, &B, &C);
    det=(B*B)-(4*A*C);
    if(A==0 || det<0)
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-B+sqrt(det))/(2*A),(-B-sqrt(det))/(2*A));
}
