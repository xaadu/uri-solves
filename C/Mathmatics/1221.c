//1221

#include <stdio.h>
int main()
{
    int n,x,f,i;
    scanf("%d",&n);
    while(n!=0)
    {
        n--;
        f=0;
        scanf("%d",&x);
        x/=2;
        for(i=2; i<x; i++)
            if(x%i==0)
            {
                f=1;
                break;
            }
        printf("%s\n",(f==1)?"Not Prime":"Prime");
    }
    return 0;
}
