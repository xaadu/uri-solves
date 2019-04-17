//1008

#include<stdio.h>
int main()
{
    int num,hour;
    double point;
    scanf("%d %d %lf",&num, &hour, &point);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num, hour*point);
}
