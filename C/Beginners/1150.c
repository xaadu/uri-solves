//1150

#include<stdio.h>
int main()
{
    int x,z,i,s=0;

    scanf("%d",&x);
    scanf("%d",&z);

    while(x>=z)
        scanf("%d",&z);

    for(i=1;s<=z;i++,x++)
        s+=x;

    printf("%d\n",i-1);
}
