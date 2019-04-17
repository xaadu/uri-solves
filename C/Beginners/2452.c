//2152

#include <stdio.h>
int main()
{
    int h,m,o,t;
    for(scanf("%d",&t);t!=0;t--)
    {
        scanf("%d %d %d",&h,&m,&o);
        printf("%02d:%02d - A porta %s!\n",h,m,(o==1)?"abriu":"fechou");
    }
    return 0;
}
