//1049

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[30],b[30],c[30];
    int i;
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    /*for(i = 0; a[i]!='\0'; i++)
    {
        a[i] = tolower(a[i]);
    }
    for(i = 0; b[i]!='\0'; i++)
    {
        b[i] = tolower(b[i]);
    }
    for(i = 0; c[i]!='\0'; i++)
    {
        c[i] = tolower(c[i]);
    }*/
    if(strcmp(a,"vertebrado")==0)
    {
        if(strcmp(b,"ave")==0)
        {
            if(strcmp(c,"carnivoro")==0)
                printf("aguia\n");
            else if(strcmp(c,"onivoro")==0)
                printf("pomba\n");
        }
        else if(strcmp(b,"mamifero")==0)
        {
            if(strcmp(c,"onivoro")==0)
                printf("homem\n");
            else if(strcmp(c,"herbivoro")==0)
                printf("vaca\n");
        }

    }

    if(strcmp(a,"invertebrado")==0)
    {
        if(strcmp(b,"inseto")==0)
        {
            if(strcmp(c,"hematofago")==0)
                printf("pulga\n");
            else if(strcmp(c,"herbivoro")==0)
                printf("lagarta\n");
        }
        else if(strcmp(b,"anelideo")==0)
        {
            if(strcmp(c,"hematofago")==0)
                printf("sanguessuga\n");
            else if(strcmp(c,"onivoro")==0)
                printf("minhoca\n");
        }

    }


}
