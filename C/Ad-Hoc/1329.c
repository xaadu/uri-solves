//1329

#include<stdio.h>
int main()
{
    int n,x,h,t;
    scanf("%d",&n);
    while(n!=0)
    {
        h=0;t=0;
        while(n!=0)
        {
            scanf("%d",&x);
            (x==0)?h++:t++;n--;
        }
        printf("Mary won %d times and John won %d times\n",h,t);
        scanf("%d",&n);
    }
}
