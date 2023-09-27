#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class TNumerais {
private:
    double c;
    int e;
public:
    void setce(double C, int E);
    double getc() { return c; }
    double gete() { return e; }
};

void TNumerais::setce(double C, int E) {
    c = C;
    e = E;
}

class TPolinomio {
private:
    TNumerais vet[100];
    int qtd;
public:
    void ler();
    double calcular(float X);
};

void TPolinomio::ler() {
    TNumerais N;
    int I, E;
    double C;
    cin >> qtd;
    for (I = 0; I < qtd; I++) {
        cin >> C >> E;
        N.setce(C, E);
        vet[I] = N;
    }
}

double TPolinomio::calcular(float X) {
    TNumerais N;
    double SOMA = 0.0;
    int I;
    for (I = 0; I < qtd; I++) {
        SOMA += (vet[I].getc() * pow(X, vet[I].gete()));
    }
    return SOMA;
}


int main() {
    TPolinomio p;
    float x;
    p.ler();
    cin >> x;
    cout << fixed << setprecision(2);
    cout << "p(" << x << ") = " << p.calcular(x) << endl;
    return 0;
}