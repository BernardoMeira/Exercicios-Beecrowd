#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int I, N;
    double QUAN, C = 0, S = 0, R = 0, TOTAL;
    char T;
    cin >> N;
    for (I = 0; I < N; I++) {
        cin >> QUAN >> T;
        TOTAL += QUAN;
        if (T == 'C') {
            C += QUAN;
        }
        else if (T == 'S') {
            S += QUAN;
        }
        else if (T == 'R') {
            R += QUAN;
        }
    }
    cout << fixed << setprecision(0);
    cout << "Total: " << TOTAL << " cobaias" << endl;
    cout << "Total de coelhos: " << C << endl;
    cout << "Total de ratos: " << R << endl;
    cout << "Total de sapos: " << S << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (100 * C / TOTAL) << " %" << endl;
    cout << "Percentual de ratos: " << (100 * R / TOTAL) << " %" << endl;
    cout << "Percentual de sapos: " << (100 * S / TOTAL) << " %" << endl;
    return 0;
}