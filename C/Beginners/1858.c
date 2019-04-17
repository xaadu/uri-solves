//1858

#include <stdio.h>
int main()
{
    int n,t,i,x,f=1;
    scanf("%d %d",&n,&t);
    x=t;
    for(i=2;i<=n;i++)
    {
        scanf("%d",&t);
        if(x>t)
        {
            x=t;
            f=i;
        }
    }
    printf("%d\n",f);
    return 0;
}
