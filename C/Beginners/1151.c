//1151

#include<stdio.h>
int main()
{
    int x=0,y=1,z,i,j,xx;
    scanf("%d",&xx);
    for(i=1;i<=xx;i++)
    {
        printf("%d",x);
        z=x+y;
        y=x;
        x=z;
        if(i!=xx)
            printf(" ");
    }
    printf("\n");
}
