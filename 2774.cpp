#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

class Elemento
{
private:
    string simbolo;
    int qtd;
public:
    string getSimbolo() { return simbolo; }
    int getqtd() { return qtd; }
    void inicializar(string simbolo, int qtd) { this->simbolo = simbolo; this->qtd = qtd; }
    void inicializar(string simbolo) { this->simbolo = simbolo; this->qtd = 1; }
};

class Composto
{
private:
    Elemento v[100];
    int qtd;
    void inserir(string simbolo, int count);
public:
    void atribuirFormula(string formula);//este deve desmembrar o texto e gerar os elementos
    void mostrar();
    bool contemComposto(Composto c);
};

void Composto::inserir(string simbolo, int count)
{
    v[qtd].inicializar(simbolo, count);
    qtd++;
}

void Composto::atribuirFormula(string formula)//este deve desmembrar o texto e gerar os elementos
{
    qtd = 0;
    int i, tam;
    tam = formula.length();
    i = 0;
    while (i < tam)
    {
        char letra = formula[i];
        if (isalpha(letra) && isupper(letra))
        {
            i++;
            string simbolo = "";
            simbolo += letra;
            int count = 0;
            while (i < tam && isalpha(formula[i]) && islower(formula[i]))
            {
                simbolo += formula[i];
                i++;
            }
            while (i < tam && isdigit(formula[i]))
            {
                count = count * 10 + formula[i] - '0';
                i++;
            }
            inserir(simbolo, count == 0 ? 1 : count);
        }
        else
        {
            cout << "erro na sintaxe!";
            exit(0);
        }
    }
}

bool Composto::contemComposto(Composto c)
{
    bool achou = false;
    int i = 0, j;

    while (!achou && i < qtd - c.qtd + 1)
    {
        j = 0;
        achou = true;
        while (j < c.qtd && achou)
            if (v[i + j].getSimbolo() != c.v[j].getSimbolo() || v[i + j].getqtd() != c.v[j].getqtd())
                achou = false;
            else
                j++;
        i++;
    }
    return achou;
}

void Composto::mostrar()
{
    for (int i = 0; i < qtd; i++)
        if (v[i].getqtd() != 1)
            cout << v[i].getSimbolo() << v[i].getqtd() << "-";
        else
            cout << v[i].getSimbolo() << v[i].getqtd() << "-";
    cout << endl;
}

int main()
{
    int n, i;
    string s;
    Composto c, padrao;
    padrao.atribuirFormula("H2O");
    cin >> n;
    cin.ignore();
    for (i = 0; i < n; i++)
    {
        getline(cin, s);
        c.atribuirFormula(s);
        c.mostrar();
        cout << "padrao: " << c.contemComposto(padrao) << endl;
    }

    return 0;
}