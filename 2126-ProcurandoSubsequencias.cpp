#include <iostream>
#include <string>
using namespace std;

class subsequencia {
private:
    string texto;
public:
    void setTexto(string txt);
    int Ocorrencias(string substr, int& ultimaPosicao);
};

void subsequencia::setTexto(string txt) {
    texto = txt;
}

int subsequencia::Ocorrencias(string substr, int& ultimaPosicao) {
    int pos = 0, qtd = 0, temppos = 0, achou = 0, truefalse = 1;
    while (truefalse == 1) {
        if (texto.find(substr, temppos) != string::npos) {
            pos = texto.find(substr, temppos);
            temppos = pos + 1;
            achou = 1;
            qtd++;
            ultimaPosicao = qtd;
        }
        else {
            truefalse = 0;
        }
    }
    if (achou == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    subsequencia s;
    string txt1, txt2;
    int C = 1, QTD = 0;
    while (getline(cin, txt2)) {
        getline(cin, txt1);
        s.setTexto(txt1);
        cout << "Caso #" << C << ':' << endl;
        C++;
        if (s.Ocorrencias(txt2, QTD) == 0) {
            cout << "Nao existe subsequencia" << endl;
        }
        else {
            cout << "Qtd.Subsequencias: " << QTD << endl;
            cout << "Pos: " << txt1.rfind(txt2) + 1 << endl;
        }
        cout << endl;
    }
    return 0;
}

