//1929

#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%c\n",((a+b>c&&b+c>a&&a+c>b)||(a+b>d&&b+d>a&&a+d>b)||(b+c>d&&b+d>c&&c+d>b)||(a+c>d&&a+d>c&&c+d>a))?'Y':'N');
    return 0;
}
