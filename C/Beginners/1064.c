//1064

#include<stdio.h>
int main()
{
    int i,j=0;
    double x[6],s=0;
    for(i=0;i<6;i++)
        scanf("%lf",&x[i]);
    for(i=0;i<6;i++)
    {
        if(x[i]>=0)
        {
            s+=x[i];
            j++;
        }
    }
    printf("%d valores positivos\n",j);
    printf("%.1lf\n",s/j);
}
