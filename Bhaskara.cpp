#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Eq2Grau {
private:
    double A, B, C;
public:
    void ler();
    double delta();
    int raizes();
    double raiz1();
    double raiz2();
};

void Eq2Grau::ler() {
    cin >> A >> B >> C;
}

double Eq2Grau::delta() {
    return ((B * B) - 4 * A * C);
}

int Eq2Grau::raizes() {
    if (delta() < 0 || A == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

double Eq2Grau::raiz1() {
    return (-B + sqrt(delta())) / (2 * A);
}

double Eq2Grau::raiz2() {
    return (-B - sqrt(delta())) / (2 * A);
}

int main() {
    Eq2Grau e;
    e.ler();
    if (e.raizes() == 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
        cout << fixed << setprecision(5);
        cout << "R1 = " << e.raiz1() << endl << "R2 = " << e.raiz2() << endl;
    }
    return 0;
}