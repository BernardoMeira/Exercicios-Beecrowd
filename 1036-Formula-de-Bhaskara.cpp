#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C;
    if (((B * B) - 4 * A * C) < 0 || A == 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
        cout << fixed << setprecision(5);
        cout << "R1 = " << (-B + sqrt(B * B - 4 * A * C)) / (2 * A) << endl << "R2 = " << (-B - sqrt(B * B - 4 * A * C)) / (2 * A) << endl;
    }
    return 0;
}