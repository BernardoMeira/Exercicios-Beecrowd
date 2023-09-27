#include <iostream>
#include <cmath>

using namespace std;

class Triangulo {
private:
    double A, B, C;
public:
    void ler();
    int FormaTriangulo();
    int EhRetangulo();
    string Tipo();
};

void Triangulo::ler() {
    cin >> A >> B >> C;
}

int Triangulo::FormaTriangulo() {
    if (A + C > B) {
        return 1;
    }
    else
        return 0;
}

int Triangulo::EhRetangulo() {
    if (pow(A, 2) == pow(B, 2) + pow(C, 2) || pow(B, 2) == pow(A, 2) + pow(C, 2) || pow(C, 2) == pow(A, 2) + pow(B, 2))
        return 1;
    else
        return 0;
}

string Triangulo::Tipo() {
    if ((A != B && B == C) || (A == C && A != B) || (A == B && C != B))
        return "Valido-Isoceles";
    else if (A == B && A == C)
        return "Valido-Equilatero";
    else if (A != B && B != C && A != C)
        return "Valido-Escaleno";
}

int main() {
    Triangulo t;
    t.ler();
    if (t.FormaTriangulo() == 1) {
        cout << t.Tipo() << endl;
        if (t.EhRetangulo() == 1) {
            cout << "Retangulo: S" << endl;
        }
        else {
            cout << "Retangulo: N" << endl;
        }
    }
    else {
        cout << "Invalido" << endl;
    }
    return 0;
}
