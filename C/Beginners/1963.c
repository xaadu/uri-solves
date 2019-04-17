//1963

#include <stdio.h>
int main()
{
    double x,y,z;
    scanf("%lf %lf",&x,&y);
    z=(x-y);
    if(z<0)
        z=-z;
    z*=100.0;
    printf("%.2f%%\n",z/x);
    return 0;
}
