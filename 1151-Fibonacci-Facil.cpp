#include <iostream>

using namespace std;

int main() {
    int N, I, FI[46];
    FI[0] = 0;
    FI[1] = 1;
    cin >> N;
    cout << FI[0] << " " << FI[1] << " ";
    for (I = 2; I < N; I++) {
        FI[I] = FI[I - 1] + FI[I - 2];
        if (I == (N - 1)) {
            cout << FI[I];
        }
        else {
            cout << FI[I] << " ";
        }
    }
    cout << endl;
    return 0;
}