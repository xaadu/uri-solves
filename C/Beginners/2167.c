//2167

#include <stdio.h>
int main()
{
    int n,f,i;
    scanf("%d",&n);
    int r[n];
    for(i=0,f=0; i<n; i++)
    {
        scanf("%d",&r[i]);
        if(i==0)
            continue;
        if(r[i]<r[i-1]&&f==0)
            f=i+1;
    }
    printf("%d\n",f);
    return 0;
}
