//2061

#include <stdio.h>
#include <string.h>
int main()
{
    int n,m;
    char x[15];
    for(scanf("%d %d",&n,&m);m!=0;m--)
    {
        fflush(stdin);
        gets(x);
        (strcmp(x,"fechou")==0)?n++:n--;
    }
    printf("%d\n",n);
    return 0;
}
