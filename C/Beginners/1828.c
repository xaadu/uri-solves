//1828

#include <stdio.h>
#include <string.h>
int main()
{
    char x[10],y[10];
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s %s",&x,&y);
        if(strcmp(x,y)==0)
            printf("Caso #%d: De novo!\n",i);
        else if(strcmp(x,"pedra")==0)
            printf("Caso #%d: %s\n",i,(strcmp(y,"papel")==0)?"Raj trapaceou!":(strcmp(y,"tesoura")==0)?"Bazinga!":(strcmp(y,"lagarto")==0)?"Bazinga!":"Raj trapaceou!");
        else if(strcmp(x,"papel")==0)
            printf("Caso #%d: %s\n",i,(strcmp(y,"pedra")==0)?"Bazinga!":(strcmp(y,"tesoura")==0)?"Raj trapaceou!":(strcmp(y,"lagarto")==0)?"Raj trapaceou!":"Bazinga!");
            else if(strcmp(x,"tesoura")==0)
            printf("Caso #%d: %s\n",i,(strcmp(y,"papel")==0)?"Bazinga!":(strcmp(y,"pedra")==0)?"Raj trapaceou!":(strcmp(y,"lagarto")==0)?"Bazinga!":"Raj trapaceou!");
            else if(strcmp(x,"lagarto")==0)
            printf("Caso #%d: %s\n",i,(strcmp(y,"papel")==0)?"Bazinga!":(strcmp(y,"tesoura")==0)?"Raj trapaceou!":(strcmp(y,"pedra")==0)?"Raj trapaceou!":"Bazinga!");
            else if(strcmp(x,"Spock")==0)
            printf("Caso #%d: %s\n",i,(strcmp(y,"papel")==0)?"Raj trapaceou!":(strcmp(y,"tesoura")==0)?"Bazinga!":(strcmp(y,"lagarto")==0)?"Raj trapaceou!":"Bazinga!");
    }
    return 0;
}
