//1113

#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    while(x!=y)
    {
        (x<y)?printf("Crescente\n"):printf("Decrescente\n");
        scanf("%d %d",&x,&y);
    }
}
