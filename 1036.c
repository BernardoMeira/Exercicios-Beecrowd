{\rtf1\ansi\deff0{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang22\f0\fs22 #include <stdio.h>\par
#include <math.h>\par
 \par
int main() \{\par
    double A, B, C, DELTA, R1, R2;\par
    scanf("%lf%lf%lf",&A,&B,&C);\par
    if (((B*B) - 4*A*C)< 0 || A == 0)\{\par
        printf("Impossivel calcular\\n");\par
    \}\par
        else \par
        \{\par
        DELTA = (B*B - 4*A*C);\par
        R1 = (-B + sqrt(DELTA)) / (2*A);\par
        R2 = (-B - sqrt(DELTA)) / (2*A);\par
        printf("R1 = %.5lf\\nR2 = %.5lf\\n", R1,R2);\par
        \}\par
 return 0;\par
\}\par
}
 