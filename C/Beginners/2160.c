//2160

#include <stdio.h>
int main()
{
    int l,i=0;
    char x[600];
    gets(x);
    while(x[i]!='\0')
        i++;
    printf("%s\n",(i>80)?"NO":"YES");
    return 0;
}
