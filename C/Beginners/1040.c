//1040

#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,med;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    med=((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf("Media: %.1lf\n",med);
    if(med>7)
        printf("Aluno aprovado.\n");
    else if(med<5)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&N1);
        printf("Nota do exame: %.1lf\n",N1);
        med=(med+N1)/2;
        if(med>=5)
            printf("Aluno aprovado.\n");
        else if(med<5)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",med);
    }

}
