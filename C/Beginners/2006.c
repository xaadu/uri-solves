//2006

#include <stdio.h>
int main()
{
    int t,a,b,c,d,e,i=0;
    scanf("%d %d %d %d %d %d",&t,&a,&b,&c,&d,&e);
    if(t==a)
        i++;
    if(t==b)
        i++;
    if(t==c)
        i++;
    if(t==d)
        i++;
    if(t==e)
        i++;
    printf("%d\n",i);
}
