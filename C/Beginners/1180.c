//1180

#include<stdio.h>
int main()
{
    int n,i,x,s,f=0;
    scanf("%d %d",&n,&s);
    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        if(s>x)
        {
            s=x;f=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",s,f);
    return 0;
}
