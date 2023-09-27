#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Produto {
private:
    string NOMEPRODUTO;
    int CODIGO;
    double PRECO;
public:
    void ler();
    void mostrar();
    string getnomeproduto() { return NOMEPRODUTO; }
    int getcodigo() { return CODIGO; }
    double getpreco() { return PRECO; }
    void setpreco(double NOVOPRECO);
};

class Cardapio {
private:
    Produto v[20];
    int qtd;
public:
    void sort();
    void listar();
    void inicializar();
    void inserir(Produto p);
    void consultar(int CDG);
    int acharproduto(int CODIGO);
    void removerproduto(int CODIGO);
    void alterarproduto(int CODIGO, double NOVOPRECO);
};

void Cardapio::inicializar() {
    qtd = 0;
}

void Cardapio::inserir(Produto p) {
    v[qtd] = p;
    qtd++;
}

void Produto::ler() {
    cin >> CODIGO;
    cin.ignore();
    getline(cin, NOMEPRODUTO);
    cin >> PRECO;
}

void Produto::mostrar() {
    cout << setfill('0') << setw(5) << CODIGO << "  ";
    cout << left << setfill(' ') << setw(29) << NOMEPRODUTO << " ";
    cout << right << setfill(' ') << setprecision(2) << fixed << "R$" << setw(6) << PRECO << endl;
}

void Cardapio::sort() {
    Produto temp;
    int I, J;
    for (I = 0; I < qtd; I++) {
        for (J = I + 1; J < qtd; J++) {
            if (v[J].getcodigo() < v[I].getcodigo()) {
                temp = v[I];
                v[I] = v[J];
                v[J] = temp;
            }
        }
    }
}

void Cardapio::listar() {
    int I;
    cout << "Codigo Nome                             Preco" << endl;
    for (I = 0; I < qtd; I++) {
        v[I].mostrar();
    }
}

void Cardapio::consultar(int CDG) {
    int I;
    double preco = 0;
    for (I = 0; I < qtd; I++) {
        if (CDG == v[I].getcodigo()) {
            preco = v[I].getpreco();
        }
    }
    cout << setprecision(2) << fixed << "R$" << setw(6) << preco << endl;
}

int Cardapio::acharproduto(int CODIGO) {
    int I = 0;
    bool TRUEFALSE = false;
    while (!TRUEFALSE && I < qtd)
        if (v[I].getcodigo() == CODIGO)
            TRUEFALSE = true;
        else
            I++;
    return TRUEFALSE ? I : -1;
}

void Cardapio::removerproduto(int CODIGO) {
    int P = acharproduto(CODIGO);
    if (P > -1) {
        v[P] = v[qtd - 1];
        qtd--;
    }
}

void Cardapio::removerproduto(int CODIGO) {
    int P = acharproduto(CODIGO);
    if (P > -1) {
        for (int I = P; I < qtd; I++)
        {
            v[I] = v[I + 1];
        }
        v[qtd - 1];
        qtd--;
    }
}

void Produto::setpreco(double NOVOPRECO) {
    PRECO = NOVOPRECO;
}

void Cardapio::alterarproduto(int CODIGO, double NOVOPRECO) {
    int I = acharproduto(CODIGO);
    if (I > -1) {
        v[I].setpreco(NOVOPRECO);
    }
}

int menu() {
    int OPCAO;
    cout << "1 - inserir" << endl;
    cout << "2 - remover" << endl;
    cout << "3 - consultar" << endl;
    cout << "4 - alterar" << endl;
    cout << "5 - listar" << endl;
    cout << "6 - sair" << endl;
    cout << "Entre com a sua escolha:" << endl;
    cin >> OPCAO;
    return OPCAO;
}


int main()
{
    Produto p;
    Cardapio c;
    int CDG = 0, TRUEFALSE = 1;
    double NOVOPRECO = 0;
    c.inicializar();
    while (TRUEFALSE == 1) {
        switch (menu()) {
        case 1:
            p.ler();
            c.inserir(p);
            break;
        case 2:
            cin >> CDG;
            c.removerproduto(CDG);
            c.sort();
            break;
        case 3:
            cin >> CDG;
            c.consultar(CDG);
            break;
        case 4:
            cin >> CDG;
            cin >> NOVOPRECO;
            c.alterarproduto(CDG, NOVOPRECO);
            break;
        case 5:
            c.listar();
            break;
        case 6:
            TRUEFALSE = 0;
            cout << "Programa encerrado!";
            break;
        default:
            break;
        }
    }
    return 0;
}