#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class TVertices {
private:
    double x, y;
public:
    void setvertices(double X, double Y);
    double getx() { return x; }
    double gety() { return y; }
};

class TPoligono {
private:
    TVertices vet[100];
    int qtd;
public:
    double perimetro();
    void ler();
};

void TVertices::setvertices(double X, double Y) {
    x = X;
    y = Y;
}

void TPoligono::ler() {
    TVertices V;
    double X, Y;
    int I;
    cin >> qtd;
    for (I = 0; I < qtd; I++) {
        cin >> X >> Y;
        V.setvertices(X, Y);
        vet[I] = V;
    }
}

double TPoligono::perimetro() {
    double PERIMETRO = 0;
    int I;
    for (I = 0; I < qtd; I++) {
        if (I != qtd - 1) {
            PERIMETRO += sqrt(pow(vet[I + 1].getx() - vet[I].getx(), 2) + pow(vet[I + 1].gety() - vet[I].gety(), 2));
        } else {
            PERIMETRO += sqrt(pow(vet[0].getx() - vet[I].getx(), 2) + pow(vet[0].gety() - vet[I].gety(), 2));
        }
    }
    return PERIMETRO;
}

int main() {
    TPoligono p;
    p.ler();
    cout << fixed << setprecision(2);
    cout << "perimetro - " << p.perimetro() << endl;
    return 0;
}