//1153

#include<stdio.h>
int fact(int);
int s=1;
int main()
{
    int x;
    scanf("%d",&x);
    if(x>0&&x<13)
        printf("%d\n",fact(x));
}
int fact(int x)
{
    if(x==1)
        return s;
    s*=x;
    return fact(x-1);
}
