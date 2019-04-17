//1146

#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    while(X!=0)
    {
        for(i=1;i<=X;i++)
        {
            printf("%d",i);
            if(i!=X)
            {
                printf(" ");
                continue;
            }
            printf("\n");
        }
        scanf("%d",&X);
    }
}
