//1467

#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
        printf("%c\n",(a!=b&&a!=c)?'A':(b!=c&&b!=a)?'B':(c!=b&&c!=a)?'C':'*');
    return 0;
}
