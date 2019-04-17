//1848

#include <stdio.h>
#include <string.h>
#include <math.h>
int c_d(int dn)
{
    int x=0,i;
    for(i=0; dn!=0; dn/=10,i++)
        x+=((dn%10)*(pow(2,i)));
    return x;
}
int main()
{
    int dn=0,i,j,res=0;
    char x[10];
    for(i=1; i<=3;)
    {
        gets(x);
        if(strcmp(x,"caw caw")==0)
        {
            printf("%d\n",res);
            i++;
            dn=0;
            res=0;
        }
        else
        {
            for(j=0,dn=0; j<3; j++)
                if(x[j]=='*')
                    dn=(dn*10)+1;
                else
                    dn=(dn*10)+0;
            res=res+c_d(dn);
        }
    }
    return 0;
}
