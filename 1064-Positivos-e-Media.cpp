#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int I, P;
    double N, M = 0;
    for (I = 0; I < 6; I++) {
        cin >> N;
        if (N > 0) {
            M += N;
            P++;
        }
    }
    cout << fixed << setprecision(1);
    cout << P << " valores positivos" << endl << M / P << endl;
    return 0;
}
