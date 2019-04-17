//1103

#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,x,y;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    while(h1!=0||h2!=0||m1!=0||m2!=0)
    {
        if(((h1*60)+m1)>((h2*60)+m2))
        {
            x=1440-((h1*60)+m1);
            y=(h2*60)+m2;
            printf("%d\n",x+y);
        }
        else
        {
            x=(h1*60)+m1;
            y=(h2*60)+m2;
            printf("%d\n",y-x);
        }
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    }
    return 0;
}
