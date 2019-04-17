//2060

#include <stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=2;i<=5;i++,c=0)
    {
        for(j=0;j<n;j++)
            if(x[j]%i==0)
                c++;
        printf("%d Multiplo(s) de %d\n",c,i);
    }
    return 0;
}
