//1132

#include<stdio.h>
int main()
{
    int x,y,t,i,s=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        t=x;x=y;y=t;
    }
    for(i=x;i<=y;i++)
        if(i%13!=0)
            s+=i;
    printf("%d\n",s);
}
