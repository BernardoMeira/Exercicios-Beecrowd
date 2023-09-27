#include <iostream>
using namespace std;

class carta {
private:
    int qtdAtributos;
public:
    int atributos[100];
    void lerAtributos(int qtd);
    int obtervalor(int pos);
};

class cartas {
private:
    int qtdCartas;
public:
    int v[100];
    void lerCartas(int qtdCartas, int qtdAtributos);
    int obterCarta(int pos);
};

void carta::lerAtributos(int qtd) {

}

int carta::obtervalor(int pos) {

}

void cartas::lerCartas(int qtdCartas, int qtdAtributos) {
    int I, J;
    for (I = 0; I < qtdCartas; I++) {
        for (J = 0; J < qtdAtributos; J++)
            scanf("%d", &M[I][J]);
    }
}
    }
}

int cartas::obterCarta(int pos) {

}

int main() {
    carta C;
    cartas M, L;
    int Mqtd, Lqtd, qtd, M1, L1;
    while (cin >> qtd) {
        cin >> Mqtd >> Lqtd;
        M.lerCartas(Mqtd, qtd);
        L.lerCartas(Lqtd, qtd);
        //lerAtributos
        int D, E, F;
        cin >> D >> E >> F;
        L1 = L.v[E - 1][F - 1];
        M1 = M.v[D - 1][F - 1];
        if (L1 < M1) {
            printf("Marcos\n");
        }
        else if (L1 > M1) {
            printf("Leonardo\n");
        }
        else {
            printf("Empate\n");
        }
    }
    return 0;
}
