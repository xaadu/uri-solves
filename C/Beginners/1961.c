//1961

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p,n,f,i;
    scanf("%d %d",&p,&n);
    int ar[n];
    for(i=0,f=1;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(abs(ar[i]-ar[i-1])>p&&i!=0)
            f=0;
    }
    printf("%s\n",(f==1)?"YOU WIN":"GAME OVER");
    return 0;
}
