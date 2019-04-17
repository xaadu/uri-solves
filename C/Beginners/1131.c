//1131

#include<stdio.h>
int main()
{
    int xx[50],k=0,n=0,x,y,inter=0,gremio=0,draw=0;
    while(n!=2)
    {
        k++;
        scanf("%d %d",&x,&y);
        (x>y)?inter++:(x<y)?gremio++:draw++;
        again:
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n!=1&&n!=2)
            goto again;
    }
    printf("%d grenais\n",k);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",draw);
    (inter>gremio)?printf("Inter venceu mais\n"):(inter<gremio)?printf("Gremio venceu mais\n"):printf("Não houve vencedor\n");
}
