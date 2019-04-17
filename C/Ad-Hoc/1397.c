//1397

#include<stdio.h>
int main()
{
    int n,a,b,x,y,i;
    while(scanf("%d",&n))
    {
        x=0;
        y=0;
        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
                x++;
            else if(a<b)
                y++;
        }
        printf("%d %d\n",x,y);
    }
}
