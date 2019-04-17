//1154

#include<stdio.h>
int main()
{
    int i=1,x,s=0;
    scanf("%d",&x);
    while(x>=0)
    {
        s+=x;
        i++;
        scanf("%d",&x);
    }
    printf("%.2lf\n",s/((float)i-1));
}
