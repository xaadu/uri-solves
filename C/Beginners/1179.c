//1179

#include<stdio.h>
int main()
{
    int i,j,k,n,x[50],par[99],impar[99],l,m;
    for(i=0; i<15; i++)
        scanf("%d",&x[i]);

    for(i=0,j=0,k=0; i<15; i++)
        if(x[i]%2==0)
        {
            par[j]=x[i];
            j++;
        }
        else
        {
            impar[k]=x[i];
            k++;
        }

    if(k==0)
    {
        m=0;
l1:
        if(j==0)
            return 0;
        for(i=0; i<=j; i++)
        {

            printf("par[%d] = %d\n",i,par[m]);
            m++;
            if(i==4)
            {
                j-=5;
                goto l1;
            }
        }
    }
    else if(j==0)
    {
        m=0;
l2:
        if(k==0)
            return 0;
        for(i=0; i<=k; i++)
        {

            printf("impar[%d] = %d\n",i,impar[m]);
            m++;
            if(i==4)
            {
                k-=5;
                goto l2;
            }
        }
    }
    else
    {
        if(j<5)
        {
            n=j;
            for(i=0; i<n; i++)
            {
                printf("par[%d] = %d\n",i,par[i]);
            }
        }
        else
            for(i=0; i<5; i++)
            {
                printf("par[%d] = %d\n",i,par[i]);
            }

        if(k<5)
        {
            n=k;
            for(l=0; l<n; l++)
                printf("impar[%d] = %d\n",l,impar[l]);
        }
        else
            for(l=0; l<5; l++)
                printf("impar[%d] = %d\n",l,impar[l]);
        k=k-5;
        j=j-5;
        int f=1;
        for(l=0,m=5; l<k; l++,m++)
        {

            printf("impar[%d] = %d\n",l,impar[m]);
            if(l>3&&f==1)
            {
                l=-1;
                f=2;
                k-=5;
                continue;
            }
        }
        f=1;
        for(i=0,n=5; i<j; i++,n++)
        {

            printf("par[%d] = %d\n",i,par[n]);
            if(i>3&&f==1)
            {
                i=-1;
                f=2;
                j-=5;
                continue;
            }
        }
    }
}
