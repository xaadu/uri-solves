//1159

#include<stdio.h>
int main()
{
    int X,i,s;
    scanf("%d",&X);
    while(X!=0)
    {
        s=0;
        for(i=5;i>0;i--,X+=2)
        {
            if(X%2!=0)
                X++;
            s+=X;
        }
        printf("%d\n",s);
        scanf("%d",&X);
    }
}
