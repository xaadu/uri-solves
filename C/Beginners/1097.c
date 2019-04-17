//1097

#include<stdio.h>
int main()
{
    int i,j=2,k;
    for(i=1;i<10;i+=2)
    {
        k=1;
        for(j+=5;k<4;j--,k++)
            printf("I=%d J=%d\n",i,j);
    }
}
