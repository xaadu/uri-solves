//2057

#include <stdio.h>
int main()
{
    int s,t,f;
    scanf("%d %d %d",&s,&t,&f);
    printf("%d\n",(s+t+f>24)?(s+t+f)-24:(s+t+f<0)?24+(s+t+f):s+t+f);
    return 0;
}
