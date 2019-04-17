//2028

#include <stdio.h>
int main()
{
    int n,i,j,k,l=0;
    while(scanf("%d",&n)!=EOF)
    {
        l++;
        if(n==0)
        {
            printf("Caso %d: 1 numero\n0\n\n",l);
            continue;
        }
        k=1;
        for(i=1; i<=n; i++)
            for(j=1; j<=i; j++)
                k++;
        printf("Caso %d: %d numeros\n0 ",l,k);
        for(i=1; i<=n; i++)
            for(j=1; j<=i; j++)
            {
                printf("%d",i);
                if(j==n)
                    continue;
                printf(" ");
            }
        printf("\n\n");
    }
}
