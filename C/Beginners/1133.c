//1133

#include<stdio.h>
int main()
{
    int x,y,t,i;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        t=x;x=y;y=t;
    }
    for(i=x+1;i<y;i++)
        if(i%5==2||i%5==3)
            printf("%d\n",i);
}
