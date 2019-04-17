//1098

#include<stdio.h>
int main()
{
    double i,j;
    int k;
    for(i=0,k=0; i<=2; i+=0.2,k++)
    {
        if(k==0||k==5||k==10)
        {
            for(j=1; j<=3; j++)
                printf("I=%.0lf J=%.0lf\n",i,j+i);
            continue;
        }
        for(j=1; j<=3; j++)
            printf("I=%.1lf J=%.1lf\n",i,j+i);
    }
}
