//1061
#include<stdio.h>
#include<string.h>
int main()
{
    int day_s,day_e,h_s,m_s,s_s,h_e,m_e,s_e,day,h,m,s;
    char day_1[10],day_2[10];
    scanf("%s %d",&day_1,&day_s);
    scanf("%d : %d : %d",&h_s,&m_s,&s_s);
    scanf("%s %d",&day_2,&day_e);
    scanf("%d : %d : %d",&h_e,&m_e,&s_e);

    /*if(day_e<0||day_e>30||day_s<0||day_s>30)
        return 0;
    if(day==0&&h==0&&m==0&&s<=59)
        return 0;*/

    /*if(strcmp(day_1,"Dia")!=0||strcmp(day_2,"Dia")!=0)
        return 0;
    if((day_s+day_e)>30)
        return 0;*/
    if(s_s>s_e)
    {
        s_e+=60;
        --m_e;
    }
    s=s_e-s_s;

    if(m_s>m_e)
    {
        m_e+=60;
        --h_e;
    }

    m=m_e-m_s;

    if(h_s>h_e)
    {
        h_e+=24;
        --day_e;
    }

    h=h_e-h_s;

    day=day_e-day_s;

    /*if(m<1)
        return 0;*/

    /*if(day>30)
        return 0;*/

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,h,m,s);

}
