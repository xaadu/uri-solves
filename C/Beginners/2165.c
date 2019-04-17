//2165

#include <stdio.h>
#include <string.h>
int main()
{
    char x[600];
    gets(x);
    printf("%s\n",(strlen(x)>140)?"MUTE":"TWEET");
    return 0;
}
