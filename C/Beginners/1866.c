//1866

#include <stdio.h>
int main()
{
    int x,t;
    scanf("%d",&t);
    while(t!=0)
    {
        t--;
        scanf("%d",&x);
        printf("%d\n",(x%2==0)?0:1);
    }
    return 0;
}
