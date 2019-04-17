//1080

#include<stdio.h>
int main()
{
    unsigned int x[100],i,f,n;
    f=0;
    scanf("%d",&x[0]);
    n=x[0];
    for(i=1;i<100;i++)
    {
        scanf("%d",&x[i]);
        if(n<x[i])
        {
            n=x[i];
            f=i+1;
        }
    }
    printf("%d\n%d\n",n,f);
}
