#include <iostream>
using namespace std;

class carta {
private:
    int qtdAtributos;
    int atributos[100];
public:
    void lerAtributos(int qtd);
    int obtervalor(int pos);
};

class cartas {
private:
    int qtdCartas;
    int v[100];
public:
    void lerCartas(int qtdCartas, int qtdAtributos);
    int obterCarta(int pos);
};

void carta::lerAtributos(int qtd) {

}

int carta::obtervalor(int pos) {

}

void cartas::lerCartas(int qtdCartas, int qtdAtributos) {
    int I, J, A;
    for (I = 0; I < qtdAtributos; I++) {
        for (J = 0; J < qtdCartas; J++) {
            cin >> A;
            v[I] = A;
        }
    }
}

int cartas::obterCarta(int pos) {

}

int main() {
    carta C;
    cartas M, L;
    int Mqtd, Lqtd, qtd;
    while (cin >> qtd) {
        cin >> Mqtd >> Lqtd;
        M.lerCartas(Mqtd, qtd);
        L.lerCartas(Lqtd, qtd);
        //lerAtributos
        int MM, LL; cin >> MM >> LL;
        int A;
        cin >> A;
        long long s = M[MM - 1][A - 1];
        long long S = L[LL - 1][A - 1];
        if (s > S) cout << "Marcos\n";
        else if (s < S) cout << "Leonardo\n";
        else cout << "Empate\n";
    }
    return 0;
}
