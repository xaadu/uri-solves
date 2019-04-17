//1864

#include <stdio.h>
int main()
{
    int x,i;
    char y[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&x);
    for(i=0;i<x&&y[i]!='\0';i++)
        printf("%c",y[i]);
    printf("\n");
    return 0;
}
