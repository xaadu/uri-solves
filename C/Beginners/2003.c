//2003

#include <stdio.h>
int main()
{
    int a,b,h;
    while(scanf("%d:%d",&a,&b)!=EOF)
    {
        h=(a*60)+b;
        printf("Atraso maximo: %d\n",(h<=420)?0:h-420);
    }
    return 0;
}
