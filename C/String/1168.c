//1168

#include <stdio.h>
int main()
{
    int x=0,t,i;
    char n[999];
    for(scanf("%d",&t); t!=0; t--,x=0)
    {
        scanf("%s",&n);
        for(i=0;n[i]!='\0';i++)
        {
            switch(n[i])
            {
            case 48:
                x+=6;
                break;
            case 49:
                x+=2;
                break;
            case 50:
                x+=5;
                break;
            case 51:
                x+=5;
                break;
            case 52:
                x+=4;
                break;
            case 53:
                x+=5;
                break;
            case 54:
                x+=6;
                break;
            case 55:
                x+=3;
                break;
            case 56:
                x+=7;
                break;
            case 57:
                x+=6;
                break;
            }
        }
        printf("%d leds\n",x);
    }
    return 0;
}
