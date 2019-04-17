//1145

#include<stdio.h>
int main()
{
    int X,Y,i,j=0;
    scanf("%d %d",&X,&Y);
    i=1;
    while(i<=Y)
    {
        printf("%d",i);
        if(i%X==0)
            printf("\n");
        else
            printf(" ");
        i++;
    }
}
