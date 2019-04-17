//1435

#include<stdio.h>
int main()
{
    int i,j,x,n;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2!=0)
        {
            x=(n/2)+1;
            for(i=1; i<=x; i++)
            {
                for(j=1; j<=i; j++)
                    printf("%3d ",j);
                for(j=1; j<=x-i; j++)
                    printf("%3d ",i);
                for(j=1; j<=n-x-i; j++)
                    printf("%3d ",i);
                for(j=i; j>=1; j--)
                {
                    if(j==x)
                        continue;
                    printf("%3d",j);
                    if(j!=1)
                        printf(" ");
                }
                printf("\n");
            }
            for(i=n-x; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                    printf("%3d ",j);
                for(j=1; j<=x-i; j++)
                    printf("%3d ",i);
                for(j=1; j<=n-x-i; j++)
                    printf("%3d ",i);
                for(j=i; j>=1; j--)
                {
                    if(j==x)
                        continue;
                    printf("%3d",j);
                    if(j!=1)
                        printf(" ");
                }
                printf("\n");
            }
        }
        else
        {
            x=n/2;
            for(i=1; i<=x; i++)
            {
                for(j=1; j<=i; j++)
                    printf("%3d ",j);
                for(j=1; j<=x-i; j++)
                    printf("%3d ",i);
                for(j=1; j<=x-i; j++)
                    printf("%3d ",i);
                for(j=i; j>=1; j--)
                {
                    printf("%3d",j);
                    if(j!=1)
                        printf(" ");
                }

                printf("\n");
            }
            for(i=n-x; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                    printf("%3d ",j);
                for(j=1; j<=x-i; j++)
                    printf("%3d ",i);
                for(j=1; j<=x-i; j++)
                    printf("%3d ",i);
                for(j=i; j>=1; j--)
                {
                    printf("%3d",j);
                    if(j!=1)
                        printf(" ");
                }

                printf("\n");
            }
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}
