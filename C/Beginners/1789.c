//1789

#include <stdio.h>
int main()
{
    int l,v,r,i,x;
    while(scanf("%d",&l)!=EOF)
    {
        scanf("%d",&v);
        r=v;
        if(v<10)
            x=1;
        else if(v>=10&&v<20)
            x=2;
        else
            x=3;
        for(i=1; i<l; i++)
        {
            scanf("%d",&v);
            if(r<v)
            {
                r=v;
                if(v<10)
                    x=1;
                else if(v>=10&&v<20)
                    x=2;
                else
                    x=3;
            }

        }
        printf("%d\n",x);
    }
    return 0;
}
