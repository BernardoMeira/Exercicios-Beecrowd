#include <iostream>

using namespace std;

class Ponto {
private:
    double X, Y;
public:
    void ler();
    string obterQuadrante();
    int origem();
    int eixoX();
    int eixoY();
};

void Ponto::ler() {
    cin >> X >> Y;
}

string Ponto::obterQuadrante() {
    if ((X > 0) && (Y > 0)) {
        return "Q1";
    }
    else if ((X < 0) && (Y > 0)) {
        return "Q2";
    }
    else if ((X < 0) && (Y < 0)) {
        return "Q3";
    }
    else if ((X > 0) && (Y < 0)) {
        return "Q4";
    }
}

int Ponto::origem() {
    if (X == 0 && Y == 0)
        return 1;
    else
        return 0;
}

int Ponto::eixoX() {
    if (Y == 0)
        return 1;
    else
        return 0;
}

int Ponto::eixoY() {
    if (X == 0)
        return 1;
    else
        return 0;
}

int main() {
    Ponto p;
    p.ler();
    if (p.origem() == 1) {
        cout << "Origem" << endl;
    }
    else if (p.eixoX() == 1) {
        cout << "Eixo X" << endl;
    }
    else if (p.eixoY() == 1) {
        cout << "Eixo Y" << endl;
    }
    else {
        cout << p.obterQuadrante() << endl;
    }
    return 0;
}
