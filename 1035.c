{\rtf1\ansi\deff0{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang22\f0\fs22 #include <stdio.h>\par
 \par
int main() \{\par
    int A, B, C, D;\par
    scanf("%d%d%d%d",&A,&B,&C,&D);\par
        if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0))\{\par
        printf("Valores aceitos\\n");\par
        \}else\par
        printf("Valores nao aceitos\\n");\par
    return 0;\par
\}\par
}
 