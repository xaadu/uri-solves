//1156

#include<stdio.h>
int main()
{
    double s=0,e,o;
    for(o=1,e=1;o<=39;o+=2,e*=2)
        s+=(o/e);
    printf("%.2lf\n",s);
}
