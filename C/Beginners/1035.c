//1035

#include<stdio.h>

int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    (B>C && D>A && (C+D)>(A+B) && C>=0 && D>=0 && A%2==0)?printf("Valores aceitos\n"):printf("Valores nao aceitos\n");
}
