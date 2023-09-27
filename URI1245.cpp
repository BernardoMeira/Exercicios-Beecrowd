#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class TAluno {
private:
    string aluno;
    double nota1, nota2;
public:
    void mostrar();
    void setnome(string nome);
    void setnotas(double n1, double n2);
    string getaluno() { return aluno; }
    double getnota1() { return nota1; }
    double getnota2() { return nota2; }
    double media() { return (nota1 + 2 * nota2) / 3; }
};


class TTurma {
private:
    TAluno vet[100];
    int qtd;
public:
    void ler();
    void listar();
};

void TAluno::setnome(string nome) {
    aluno = nome;
}

void TAluno::setnotas(double n1, double n2) {
    nota1 = n1;
    nota2 = n2;
}

void TTurma::ler() {
    TAluno A;
    int N, I;
    double N1, N2;
    string NOME;
    qtd = 0;
    cin >> N;
    for (I = 0; I < N; I++) {
        cin.ignore();
        getline(cin, NOME);
        cin >> N1 >> N2;
        A.setnome(NOME);
        A.setnotas(N1, N2);
        vet[qtd] = A;
        qtd++;
    }
}

void TAluno::mostrar() {
    cout << left << setfill(' ') << setw(50) << aluno;
    cout << right << setfill(' ') << setw(6) << setprecision(2) << fixed << media();
    if (media() >= 6) {
        cout << ' ' << "Aprovado" << endl;
    }
    else {
        cout << ' ' << "Reprovado" << endl;
    }
}

void TTurma::listar() {
    int I;
    for (I = 0; I < qtd; I++) {
        vet[I].mostrar();
    }
}

int main() {
    TTurma t;
    t.ler();
    t.listar();
    return 0;
}