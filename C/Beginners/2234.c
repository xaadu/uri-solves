//2234

#include <stdio.h>
int main()
{
    int m,p;
    double x;
    scanf("%d %d",&m,&p);
    if(p!=0)
    {
        x=(double)m/(double)p;
        printf("%.2lf\n",x);
    }
    return 0;
}
