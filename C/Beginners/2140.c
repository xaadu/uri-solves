//2140

#include <stdio.h>
int main()
{
    int x,y,m;
    for(scanf("%d %d",&x,&y); x!=0||y!=0; scanf("%d %d",&x,&y))
    {
        m=y-x;
        if(m>=100)
        {
            m-=100;
            if(m==100||m==50||m==20||m==10||m==5||m==2)
            {
                printf("possible\n");
                continue;
            }
            else
                printf("impossible\n");
        }
        else if(m>=50)
        {
            m-=50;
            if(m==50||m==20||m==10||m==5||m==2)
            {
                printf("possible\n");
                continue;
            }
            else
                printf("impossible\n");
        }
        else if(m>=20)
        {
            m-=20;
            if(m==20||m==10||m==5||m==2)
            {
                printf("possible\n");
                continue;
            }
            else
                printf("impossible\n");
        }
        else if(m>10)
        {
            m-=10;
            if(m==10||m==5||m==2)
            {
                printf("possible\n");
                continue;
            }
            else
                printf("impossible\n");
        }
        else if(m>5)
        {
            m-=5;
            if(m==5||m==2)
            {
                printf("possible\n");
                continue;
            }
            else
                printf("impossible\n");
        }
        else if(m>2)
        {
            m-=2;
            if(m==2)
            {
                printf("possible\n");
                continue;
            }
            else
                printf("impossible\n");
        }
        else
            printf("impossible\n");
    }
    return 0;
}
