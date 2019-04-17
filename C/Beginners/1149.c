//1149

#include<stdio.h>
int main()
{
    int a,n,s=0,i;
    scanf("%d %d",&a,&n);
    while(n<=0)
        scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=a;
        a++;
    }
    printf("%d\n",s);
}
