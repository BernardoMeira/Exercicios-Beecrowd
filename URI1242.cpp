#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class TVetInt {
private:
    int vet[100];
    int qtd;
public:
    void ler();
    void inverter();
    void listar();
};

void TVetInt::ler() {
    int I;
    cin >> qtd;
    for (I = 0; I < qtd; I++) {
        cin >> vet[I];
    }
}

void TVetInt::inverter() {
    int TEV, I, J;
    for (I = 0, J = qtd - 1; I < J; I++, J--) {
        TEV = *(vet + J);
        *(vet + J) = *(vet + I);
        *(vet + I) = TEV;
    }
}

void TVetInt::listar() {
    int I;
    for (I = 0; I <= qtd - 1; I++) {
        cout << vet[I];
        if (I != qtd - 1) {
            cout << " ";
        }
    }
}

int main() {
    TVetInt v;
    v.ler();
    v.inverter();
    v.listar();
    return 0;
}