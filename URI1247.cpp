#include <iostream>

using namespace std;

class TMatriz {
private:
    char vet[100][100];
    int N, M;
public:
    void ler();
    void transposta();
    void mostrar();
};

void TMatriz::ler() {
    int I, J;
    cin >> N >> M;
    for (I = 0; I < N; I++) {
        for (J = 0; J < M; J++) {
            cin >> vet[I][J];
        }
    }
}

void TMatriz::transposta() {
    int I, J;
    char AUX;
    for (I = 1; I < M; I++) {
        for (J = 0; J < I; J++) {
            AUX = vet[I][J];
            vet[I][J] = vet[J][I];
            vet[J][I] = AUX;
        }
    }
}

void TMatriz::mostrar() {
    int I, J;
    for (I = 0; I < M; I++) {
        for (J = 0; J < N; J++) {
            cout << vet[I][J];
        }
        cout << endl;
    }
}


int main() {
    TMatriz a;
    a.ler();
    a.transposta();
    a.mostrar();
    return 0;
}