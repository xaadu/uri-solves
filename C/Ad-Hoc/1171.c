//1171

#include<stdio.h>

int main()
{
    int n,t,a,i,f;
    scanf("%d",&n);
    int x[n];
    a=n;
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    while(a!=0)
    {
        for(i=1; i<a; i++)
            if(x[i-1]>x[i])
            {
                t=x[i];
                x[i]=x[i-1];
                x[i-1]=t;
            }
        a--;
    }
    for(i=0,f=1; i<n; i++)
    {
        if(x[i]==x[i+1])
            f++;
        else
        {
            printf("%d aparece %d vez(es)\n",x[i],f);
            f=1;
        }
    }
    return 0;
}
