#include <iostream>

using namespace std;

int main() {
    int A, N;
    cin >> N;
    cout << N << endl;
    cout << N / 100 << " nota(s) de R$ 100,00" << endl;
    A = (N % 100);
    cout << A / 50 << " nota(s) de R$ 50,00" << endl;
    A = (A % 50);
    cout << A / 20 << " nota(s) de R$ 20,00" << endl;
    A = (A % 20);
    cout << A / 10 << " nota(s) de R$ 10,00" << endl;
    A = (A % 10);
    cout << A / 5 << " nota(s) de R$ 5,00" << endl;
    A = (A % 5);
    cout << A / 2 << " nota(s) de R$ 2,00" << endl;
    A = (A % 2);
    cout << A / 1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}