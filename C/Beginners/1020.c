//1020

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",x/365,(x%365)/30,((x%365)%30));
}
