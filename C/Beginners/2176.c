//2176

#include <stdio.h>
int main()
{
    int i,c=0;
    char x[200];
    gets(x);
    for(i=0;x[i]!='\0';i++)
        if(x[i]=='1')
            c++;
    if(c%2==0)
        x[i]='0';
    else
        x[i]='1';
    x[i+1]='\0';
    puts(x);
    return 0;
}
