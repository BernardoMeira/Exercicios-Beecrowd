#include <iostream>
#include <iomanip>

using namespace std;

class TVet {
private:
    double vet[100];
    int qtd;
public:
    void ler();
    double maior();
    double menor();
    double mediaEx();
};

void TVet::ler() {
    int I;
    cin >> qtd;
    for (I = 0; I < qtd; I++) {
        cin >> vet[I];
    }
}

double TVet::maior() {
    int I;
    double MAIOR = vet[0];
    for (I = 1; I < qtd; I++) {
        if (MAIOR < vet[I]) {
            MAIOR = vet[I];
        }
    }
    return MAIOR;
}

double TVet::menor() {
    int I;
    double MENOR = vet[0];
    for (I = 1; I < qtd; I++) {
        if (MENOR > vet[I]) {
            MENOR = vet[I];
        }
    }
    return MENOR;
}

double TVet::mediaEx() {
    int I, J = 0;
    double SOMA = 0;
    for (I = 0; I < qtd; I++) {
        if (vet[I] != menor() && vet[I] != maior()) {
            SOMA += vet[I];
            J++;
        }
    }
    return (SOMA / J);
}

int main() {
    TVet v;
    v.ler();
    cout << fixed << setprecision(2);
    cout << "Maior:" << v.maior() << endl;
    cout << "Menor:" << v.menor() << endl;
    cout << "Media sem extremos:" << v.mediaEx() << endl;
    return 0;
}