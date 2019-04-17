//1865

#include <stdio.h>
#include <string.h>
int main()
{
    int x,t;
    char n[15];
    scanf("%d",&t);
    while(t!=0)
    {
        t--;
        scanf("%s %d",&n,&x);
        printf("%c\n",(strcmp(n,"Thor")==0)?'Y':'N');
    }
    return 0;
}
