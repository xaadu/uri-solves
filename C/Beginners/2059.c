//2059

#include <stdio.h>
int main()
{
    int p,j1,j2,r,a;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    printf("Jogador %d ganha!\n",(r!=0||a!=0)?(r==1)?(a==1)?2:1:(r==0)?(a==1)?1:2:1:(p==1)?((j1+j2)%2==0)?1:2:((j1+j2)%2==0)?2:1);
    return 0;
}
