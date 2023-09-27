#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <list>

using namespace std;

class Pessoa {
public:
    virtual void ler() { };
    virtual void mostrar() { };
    virtual void calculoir() { };
    virtual void mostrarconsultar() { };
    virtual char getpessoa() { return	'P'; }
    virtual int getcodigo() { }
    virtual double getir() { }
};

class Juridica : public Pessoa {
private:
    int CODIGO;
    string NOME;
    double RENDAANUAL, IR;
    int INSCRICAOMUNICIPAL, INSCRICAOESTADUAL;
    string CNPJ;
public:
    void ler();
    void mostrar();
    void calculoir();
    void mostrarconsultar();
    char getpessoa() { return	'J'; }
    int getcodigo() { return CODIGO; }
    double getir() { return IR; }
};

void Juridica::ler() {
    cin >> CODIGO;
    cin.ignore();
    getline(cin, NOME);
    cin >> RENDAANUAL;
    cin.ignore();
    getline(cin, CNPJ);
    cin >> INSCRICAOMUNICIPAL;
    cin >> INSCRICAOESTADUAL;
}

void Juridica::calculoir() {
    if(RENDAANUAL > 200000){
        IR = (0.25 * RENDAANUAL);
    }
    else {
        IR = (0.15 * RENDAANUAL);
    }
}

void Juridica::mostrar() {
    cout << right << setfill('0') << setw(5) << CODIGO << "  ";
    cout << left << setfill(' ') << setw(30) << NOME << "  ";
    cout << left << setfill(' ') << setw(1) << getpessoa() << "  ";
    cout << right << setfill(' ') << setw(20) << CNPJ << " ";
    cout << right << setprecision(2) << fixed << "R$ " << setfill(' ') << setw(9) << IR << endl;
}

void Juridica::mostrarconsultar() {
    cout << "Codigo : " << CODIGO << endl;
    cout << "Nome : " << NOME << endl;
    cout << "Renda Anual : " << RENDAANUAL << endl;
    cout << "CNPJ : " << CNPJ << endl;
    cout << "Inscr. Mun. : " << INSCRICAOMUNICIPAL << endl;
    cout << "Inscr. Est. : " << INSCRICAOESTADUAL << endl;
}

class Fisica : public Pessoa {
private:
    int CODIGO;
    string NOME;
    double RENDAANUAL, IR;
    int DEPENDENTES;
    string CPF, PROFISSAO;
public:
    void ler();
    void mostrar();
    void calculoir();
    void mostrarconsultar();
    char getpessoa() { return	'F'; }
    int getcodigo() { return CODIGO; }
    double getir() { return IR; }
};

void Fisica::ler() {
    cin >> CODIGO;
    cin.ignore();
    getline(cin, NOME);
    cin >> RENDAANUAL;
    cin.ignore();
    getline(cin, CPF);
    getline(cin, PROFISSAO);
    cin >> DEPENDENTES;
}

void Fisica::calculoir() {
    IR = (0.07 * RENDAANUAL);
}

void Fisica::mostrar() {
    cout << right << setfill('0') << setw(5) << CODIGO << "  ";
    cout << left << setfill(' ') << setw(30) << NOME << "  ";
    cout << left << setfill(' ') << setw(1) << getpessoa() << "  ";
    cout << right << setfill(' ') << setw(20) << CPF << " ";
    cout << right << setprecision(2) << fixed << "R$ " << setfill(' ') << setw(9) << IR << endl;
}

void Fisica::mostrarconsultar() {
    cout << "Codigo : " << CODIGO << endl;
    cout << "Nome : " << NOME << endl;
    cout << "Renda Anual : " << RENDAANUAL << endl;
    cout << "CPF : " << CPF << endl;
    cout << "Profissao : " << PROFISSAO << endl;
    cout << "Dependentes : " << DEPENDENTES << endl;
}

class Clientes {
private:
    Pessoa* v[100];
    int qtd;
public:
    void listar();
    void inicializar();
    void inserir(int OPCAO);
    void remover(int CDG);
    void consultar(int CDG);
    void consultarir(int CDG);
    int acharpessoa(int CDG);
};

void Clientes::inicializar() {
    qtd = 0;
}

Pessoa* criarpessoa(int OPCAO) {
    if (OPCAO == 1) {
        return new Fisica();
    }
    else {
        return new Juridica();
    }
}

void Clientes::inserir(int OPCAO) {
    v[qtd] = criarpessoa(OPCAO);
    v[qtd]->ler();
    v[qtd]->calculoir();
    qtd++;
}

void Clientes::listar() {
    int I;
    cout << "Codigo Nome                           F/J             CPF/CNPJ           IR" << endl;
    for (I = 0; I < qtd; I++) {
        v[I]->mostrar();
    }
}

int Clientes::acharpessoa(int CDG) {
    int I = 0;
    bool TRUEFALSE = false;
    while (!TRUEFALSE && I < qtd)
        if (v[I]->getcodigo() == CDG)
            TRUEFALSE = true;
        else
            I++;
    return TRUEFALSE ? I : -1;
}

void Clientes::remover(int CDG) {
    int P = acharpessoa(CDG);
    if (P > -1) {
        v[P] = v[qtd - 1];
        qtd--;
    }
}

void Clientes::consultar(int CDG) {
    int I;
    for (I = 0; I < qtd; I++) {
        if (CDG == v[I]->getcodigo()) {
            v[I]->mostrarconsultar();
        }
    }
}

void Clientes::consultarir(int CDG) {
    int I;
    for (I = 0; I < qtd; I++) {
        if (CDG == v[I]->getcodigo()) {
            cout << setprecision(2) << fixed << "R$ " << v[I]->getir() << endl;
        }
    }
}

int menu() {
    int OPCAO;
    cout << "1 - inserir pessoa fisica" << endl;
    cout << "2 - inserir pessoa juridica" << endl;
    cout << "3 - remover" << endl;
    cout << "4 - consultar" << endl;
    cout << "5 - ir" << endl;
    cout << "6 - listar" << endl;
    cout << "7 - sair" << endl;
    cout << "Entre com a sua escolha:" << endl;
    cin >> OPCAO;
    return OPCAO;
}

int main()
{
    Pessoa p;
    Clientes c;
    int CDG, TRUEFALSE = 1;
    c.inicializar();
    while (TRUEFALSE == 1) {
        switch (menu()) {
        case 1:
            c.inserir(1);
            break;
        case 2:
            c.inserir(2);
            break;
        case 3:
            cin >> CDG;
            c.remover(CDG);
            break;
        case 4:
            cin >> CDG;
            c.consultar(CDG);
            break;
        case 5:
            cin >> CDG;
            c.consultarir(CDG);
            break;
        case 6:
            c.listar();
            break;
        case 7:
            TRUEFALSE = 0;
            cout << "Programa encerrado!" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}