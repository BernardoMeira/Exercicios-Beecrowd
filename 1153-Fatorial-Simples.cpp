#include <iostream>

using namespace std;

int main() {
    int N, I;
    cin >> N;
    for (I = 1; N > 1; N = N - 1) {
        I = I * N;
    }
    cout << I << endl;
    return 0;
}
