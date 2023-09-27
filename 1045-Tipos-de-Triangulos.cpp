#include <iostream>
using namespace std;

class Triangulo {
private:
    double A, B, C;
public:
    void ler();
    void ordenarLados();
    int FormaTriangulo();
    string TipoPeloAngulo();
    string TipoPeloLados();
};

void Triangulo::ler() {
    cin >> A >> B >> C;
}

void Triangulo::ordenarLados() {
    double X1, X2, X3;
    X1 = A; X2 = B; X3 = C;
    if (X1 >= X2 && X1 >= X3) {
        A = X1; B = X2; C = X3;
    }
    else if (X2 >= X1 && X2 >= X3) {
        A = X2; B = X1; C = X3;
    }
    else if (X3 >= X1 && X3 >= X2) {
        A = X3; B = X1; C = X2;
    }
}

int Triangulo::FormaTriangulo() {
    if (A >= B + C) {
        return 0;
    }
    else {
        return 1;
    }
}

string Triangulo::TipoPeloAngulo() {
    if ((A * A) == (B * B) + (C * C)) {
        return "TRIANGULO RETANGULO";
    }
    else if ((A * A) > (B * B) + (C * C)) {
        return "TRIANGULO OBTUSANGULO";
    }
    else {
        return "TRIANGULO ACUTANGULO";
    }
}

string Triangulo::TipoPeloLados() {
    if (A == B && A == C && B == C) {
        return "TRIANGULO EQUILATERO";
    }
    else if (A == B || A == C || B == C) {
        return "TRIANGULO ISOSCELES";
    }
    else {
        return "nao";
    }
}

int main() {
    Triangulo t;
    t.ler();
    t.ordenarLados();
    if (t.FormaTriangulo() == 0) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
        cout << t.TipoPeloAngulo() << endl;
        if (t.TipoPeloLados() != "nao") {
            cout << t.TipoPeloLados() << endl;
        }
    }
    return 0;
}
