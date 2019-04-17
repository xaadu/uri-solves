//1042

#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        x=a;
        if(b<c)
        {
            z=b;
            y=c;
        }
        else
        {
            z=c;
            y=b;
        }
    }
    else if(b>c&&b>a)
    {
        x=b;
        if(a<c)
        {
            z=a;
            y=c;
        }
        else
        {
            z=c;
            y=a;
        }
    }
    else
    {
        x=c;
        if(a<b)
        {
            z=a;
            y=b;
        }
        else
        {
            z=b;
            y=a;
        }
    }
    printf("%d\n%d\n%d\n",z,y,x);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
