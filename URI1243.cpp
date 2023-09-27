#include <iostream>

using namespace std;

class TConjunto {
private:
    int vet[100];
    int qtd;
public:
    void ler();
    void mostrar();
    void inserir(int N);
    void uniao(TConjunto A, TConjunto B);
    void intersecao(TConjunto A, TConjunto B);
    void subtracao(TConjunto A, TConjunto B);
    int estacontido(TConjunto A);
    int contem(TConjunto A);
    int pertence(int X);
};

void TConjunto::inserir(int N) {
    vet[qtd] = N;
    qtd++;
}


int TConjunto::pertence(int X) {
    int I;
    for (I = 0; I < qtd; I++) {
        if (X == vet[I]) {
            return 1;
        }
    }
    return 0;
}

void TConjunto::ler() {
    int I, J, N, qtdvet;
    qtd = 0;
    cin >> qtdvet;
    for (I = 0; I < qtdvet; I++) {
        cin >> N;
        if (I == 0) {
            inserir(N);
        }
        else {
            if (pertence(N) != 1) {
                inserir(N);
            }
        }
    }
}

void TConjunto::uniao(TConjunto A, TConjunto B) {
    int I, J;
    qtd = A.qtd;
    for (I = 0; I < A.qtd; I++) {
        vet[I] = A.vet[I];
    }
    for (I = 0; I < B.qtd; I++) {
        if (pertence(B.vet[I]) != 1) {
            inserir(B.vet[I]);
        }
    }
}

void TConjunto::mostrar() {
    int I;
    for (I = 0; I < qtd; I++) {
        cout << vet[I];
        if (I != qtd - 1 && qtd != 0) {
            cout << ' ';
        }
    }
    cout << endl;
}

void TConjunto::intersecao(TConjunto A, TConjunto B) {
    int I, J;
    qtd = 0;
    for (I = 0; I < A.qtd; I++) {
        if (B.pertence(A.vet[I]) == 1) {
            inserir(A.vet[I]);
        }
    }
}

void TConjunto::subtracao(TConjunto A, TConjunto B) {
    int I, J;
    qtd = 0;
    for (I = 0; I < A.qtd; I++) {
        if (B.pertence(A.vet[I]) != 1) {
            inserir(A.vet[I]);
        }
    }
}

int TConjunto::estacontido(TConjunto A) {
    int I, J, CONTIDO = 0;
    for (I = 0; I < qtd; I++) {
        for (J = 0; J < A.qtd; J++) {
            if (vet[I] == A.vet[J]) {
                CONTIDO++;
            }
        }
    }
    if (CONTIDO == qtd) {
        return 1;
    }
    else {
        return 0;
    }
}

int TConjunto::contem(TConjunto A) {
    int I, J, CONTIDO = 0;
    for (I = 0; I < A.qtd; I++) {
        for (J = 0; J < qtd; J++) {
            if (A.vet[I] == vet[J]) {
                CONTIDO++;
            }
        }
    }
    if (CONTIDO == A.qtd) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    TConjunto a, b, c, d, e;
    int x;
    a.ler();
    b.ler();
    c.uniao(a, b);
    cout << "a UNIAO b = ";
    c.mostrar();
    d.intersecao(a, b);
    cout << "a INTERSECAO b = ";
    d.mostrar();
    cout << "d esta contido em a: " << (d.estacontido(a) ? "sim" : "nao") << endl;
    cout << "a contem d: " << (a.contem(d) ? "sim" : "nao") << endl;
    cout << "c esta contido em a: " << (c.estacontido(a) ? "sim" : "nao") << endl;
    cout << "c contem a: " << (c.contem(a) ? "sim" : "nao") << endl;
    cout << "c contem b: " << (c.contem(b) ? "sim" : "nao") << endl;
    cout << "a contem b: " << (a.contem(b) ? "sim" : "nao") << endl;
    cout << "a esta contido em b: " << (a.estacontido(b) ? "sim" : "nao") << endl;
    cout << "a - b = ";
    e.subtracao(a, b);
    e.mostrar();
    cin >> x;
    while (x > 0) {
        cout << x << " pertence ao conjunto A: " << (a.pertence(x) ? "sim" : "nao") << endl;
        cin >> x;
    }
    return 0;
}