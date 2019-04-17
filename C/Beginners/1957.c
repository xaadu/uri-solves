//1957

#include <stdio.h>
#include <string.h>
int main()
{
    long long int x,i,y;
    char xx[10];
    scanf("%lld",&x);
    for(i=0; x!=0; i++,x/=16)
    {
        y=x%16;
        switch(y)
        {
        case 1:
            xx[i]='1';
            break;
        case 2:
            xx[i]='2';
            break;
        case 3:
            xx[i]='3';
            break;
        case 4:
            xx[i]='4';
            break;
        case 5:
            xx[i]='5';
            break;
        case 6:
            xx[i]='6';
            break;
        case 7:
            xx[i]='7';
            break;
        case 8:
            xx[i]='8';
            break;
        case 9:
            xx[i]='9';
            break;
        case 10:
            xx[i]='A';
            break;
        case 11:
            xx[i]='B';
            break;
        case 12:
            xx[i]='C';
            break;
        case 13:
            xx[i]='D';
            break;
        case 14:
            xx[i]='E';
            break;
        case 15:
            xx[i]='F';
            break;
        default:
            xx[i]='0';
            break;
        }
    }
    xx[i]='\0';
    for(i--;i>=0;i--)
        printf("%c",xx[i]);
    printf("\n");
    return 0;
}
