{\rtf1\ansi\deff0{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang22\f0\fs22 #include <stdio.h>\par
#include <math.h>\par
 \par
int main() \{\par
    float X,Y;\par
    scanf("%f%f",&X,&Y);\par
    if (X == 0 && Y == 0)\{\par
        printf("Origem\\n");\par
    \} else if (X == 0)\{\par
        printf("Eixo Y\\n");\par
    \} else if (Y == 0)\{\par
        printf("Eixo X\\n");\par
    \} else if ((X > 0) && (Y > 0))\{\par
        printf("Q1\\n");\par
    \} else if ((X < 0) && (Y > 0))\{\par
        printf("Q2\\n");\par
    \} else if ((X < 0) && (Y < 0))\{\par
        printf("Q3\\n");\par
    \} else if ((X > 0) && (Y < 0))\{\par
        printf("Q4\\n");\par
    \}\par
    \par
return 0;\par
\par
\}\par
}
 