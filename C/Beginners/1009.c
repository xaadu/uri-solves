//1009

#include<stdio.h>
int main()
{
    char name[50];
    double salary,sold;
    scanf("%s %lf %lf",&name, &salary, &sold);
    printf("TOTAL = R$ %.2lf\n",(salary+(sold*15/100)));

}
