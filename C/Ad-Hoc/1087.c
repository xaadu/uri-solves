//1087

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    while(x1!=0||y1!=0||x2!=0||y2!=0)
    {
        /*if(x1<1||y1<1||x2<1||y2<1||x1>8||y1>8||x2>8||y2>8)
            break;*/
        printf("%d\n",(x1==x2&&y1==y2)?0:(x1+y1==x2+y2||x1==x2||y1==y2||abs(x1-y1)==abs(x2-y2))?1:2);
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    }
    return 0;
}
