//1065

#include<stdio.h>
int main()
{
    int x[5],i,j=0;
    for(i=0; i<5; i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
            ++j;
    }
    printf("%d valores pares\n",j);
}
