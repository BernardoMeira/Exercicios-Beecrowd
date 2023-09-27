#include <iostream>

using namespace std;

class vetor {
private:
    int v[100];
public:
    int qtd;
    void ler();
    void ordenar();
    int obterNota(int i);
};

int compint(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

void vetor::ler() {
    int I;
    for (I = 0; I < qtd; I++) {
        cin >> v[I];
    }
}

void vetor::ordenar() {
    qsort(v, qtd, sizeof(int), compint);
}

int vetor::obterNota(int i) {
    return v[i - 1];
}

int main() {
    int I, N, pos;
    vetor v;
    while (cin >> v.qtd >> N) {
        v.ler();
        v.ordenar();
        for (I = 0; I <= N - 1; I++) {
            cin >> pos;
            cout << v.obterNota(pos) << endl;
        }
    }
    return 0;
}
