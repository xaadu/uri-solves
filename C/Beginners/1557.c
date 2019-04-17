//1557

#include <stdio.h>
int main()
{
    long long int i,j,x=1,ar[30][30],k;
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++,x*=2)
                ar[i][j]=x;
            for(j=1; j<=t-1; j++)
                x/=2;
        }
        x=ar[t-1][t-1];
        for(j=0; x!=0; j++)
            x/=10;
        switch(j)
        {
        case 1:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%1lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 2:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%2lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 3:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%3lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 4:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%4lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 5:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%5lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 6:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%6lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 7:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%7lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 8:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%8lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 9:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%9lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 10:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%10lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 11:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%11lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 12:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%12lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 13:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%13lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 14:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%14lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
            break;
        default:
            for(i=0; i<t; i++)
            {
                for(k=0; k<t; k++)
                {
                    printf("%15lld",ar[i][k]);
                    if(k!=t-1)
                        printf(" ");
                }
                printf("\n");
            }
        }
        printf("\n");
        x++;
        scanf("%d",&t);
    }
    return 0;
}
