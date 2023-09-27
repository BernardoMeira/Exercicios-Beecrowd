#include <iostream>
using namespace std;

class notas {
private:
    double nota1, nota2;
public:
    void ler();
    double media();
};

void notas::ler() {
    cin >> nota1;
    while (nota1 < 0 || nota1 > 10) {
        cout << "nota invalida" << endl;
        cin >> nota1;
    }
    cin >> nota2;
    while (nota2 < 0 || nota2 > 10) {
        cout << "nota invalida" << endl;
        cin >> nota2;
    }
}

double notas::media() {
    return (nota1 + nota2) / 2;
}

int main() {
    notas n;
    n.ler();
    cout << "media = " << n.media() << endl;
    return 0;
}
