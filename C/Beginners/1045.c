//1045

#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c,x,y,z;
    scanf("%lf %lf %lf",&a,&b,&c);
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
    a=x;b=y;c=z;
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
        exit(0);
    }

    if((a*a)==((b*b)+(c*c)))
        printf("TRIANGULO RETANGULO\n");
    if((a*a)>((b*b)+(c*c)))
        printf("TRIANGULO OBTUSANGULO\n");
    if((a*a)<((b*b)+(c*c)))
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    if((a==b && b!=c)||(a==c && a!=b)||(b==c && b!=a))
        printf("TRIANGULO ISOSCELES\n");
}










