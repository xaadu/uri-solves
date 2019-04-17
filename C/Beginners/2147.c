//2147

#include <stdio.h>
int main()
{
    char x[100000];
    long long int t,c,i;
    scanf("%lld",&t);
    for(; t!=0; t--)
    {
        scanf("%s",&x);
        for(i=0; x[i]!='\0'; )
            i++;
        printf("%.2lf\n",(double)i/100.00);
    }
    return 0;
}
