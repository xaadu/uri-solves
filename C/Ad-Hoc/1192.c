//1192

#include <stdio.h>
#include <ctype.h>
int main()
{
    char x,y,z;
    int b,a,n;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d %c %d",&b,&y,&a);
    printf("%d\n",(a==b)?(a*b):(islower(y))?(a+b):(a-b));
        n--;
    }

    return 0;
}
