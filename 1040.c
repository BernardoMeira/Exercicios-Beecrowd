{\rtf1\ansi\deff0{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang22\f0\fs22 #include <stdio.h>\par
#include <math.h>\par
 \par
int main() \{\par
    float N1,N2,N3,N4,MEDIA,EXAME,EXAMEDIA;\par
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);\par
    MEDIA = (((N1*2)+(N2*3)+(N3*4)+N4) / 10);\par
    printf("Media: %.1f\\n", MEDIA);\par
    if (MEDIA >= 7.0)\{\par
        printf("Aluno aprovado.\\n");\par
    \}\par
    else if (MEDIA < 5.0)\{\par
    printf("Aluno reprovado.\\n");\par
    \}\par
    else if (MEDIA >=5 && MEDIA <=6.9)\{\par
        printf("Aluno em exame.\\n");\par
        scanf("%f", &EXAME);\par
        printf("Nota do exame: %.1f\\n", EXAME);\par
        EXAMEDIA = ((MEDIA + EXAME)/2);\par
            if (EXAMEDIA >= 5.0)\{\par
            printf("Aluno aprovado.\\n");\par
            \}\par
            else printf("Aluno reprovado.\\n");\{\par
            \}\par
        printf("Media final: %.1f\\n",EXAMEDIA);\par
    \}\par
 return 0;\par
\}\par
}
 