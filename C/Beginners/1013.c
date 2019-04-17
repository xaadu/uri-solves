//1013

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a=((a+b)+abs(a-b))/2;
    printf("%d eh o maior\n",((a+c)+abs(a-c))/2);
}
