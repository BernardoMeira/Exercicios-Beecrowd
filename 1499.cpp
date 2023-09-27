#include <iostream>
#include <iomanip>
#include <string>
#include <list>

using namespace std;

class Contato {
private:
    string NOME, EMAIL, TELEFONE;
public:
    void ler();
    void mostrar();
    string getemail() { return EMAIL; }
};

class Agenda {
private:
    list<Contato> lista;
public:
    void listar();
    void inserir(Contato c);
    void remover(string email);
};

void Agenda::inserir(Contato c) {
    lista.push_back(c);
}

void Contato::ler() {
    cin.ignore();
    getline(cin, NOME);
    getline(cin, EMAIL);
    getline(cin, TELEFONE);
}

void Contato::mostrar() {
    cout << left <<setfill(' ') << setw(28) << NOME << "  ";
    cout << left << setfill(' ') << setw(30) << EMAIL << " ";
    cout << right << setfill(' ') << setw(19) << TELEFONE << endl;
}

void Agenda::listar() {
    int I;
    cout << "Nome                          Email                                     Telefone" << endl;
    for (auto I : lista) {
        I.mostrar();
    }
}

void Agenda::remover(string email) {
    lista.remove_if([email](const Contato& c) {
        return ((Contato)c).getemail() == email; });
}

int menu() {
    int OPCAO;
    cout << "1 - inserir" << endl;
    cout << "2 - remover" << endl;
    cout << "3 - listar" << endl;
    cout << "4 - sair" << endl;
    cout << "Entre com a sua escolha:" << endl;
    cin >> OPCAO;
    return OPCAO;
}

int main()
{
    Contato c;
    Agenda a;
    int TRUEFALSE = 1;
    string AUX;
    while (TRUEFALSE == 1) {
        switch (menu()) {
        case 1:
            c.ler();
            a.inserir(c);
            break;
        case 2:
            cin.ignore();
            getline(cin, AUX);
            a.remover(AUX);
            break;
        case 3:
            a.listar();
            break;
        case 4:
            TRUEFALSE = 0;
            cout << "Programa encerrado!" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}