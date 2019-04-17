//1070

#include<stdio.h>
int main()
{
    int X,i,j;
    scanf("%d",&X);
    for(i=X;i<=X+11;i++)
        if(i%2!=0)
            printf("%d\n",i);
}
