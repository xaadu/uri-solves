//1847

#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%s\n",(x-y>y-z)?":)":":(");
    return 0;
}
