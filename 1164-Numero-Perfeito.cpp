#include <iostream>

using namespace std;

int CHECK(int X) {
    int I, A, B;
    A = X / 2;
    B = 0;
    for (I = 1; I <= A; I++) {
        if (X % I == 0)
            B += I;
    }
    if (B == X)
        cout << X << " eh perfeito" << endl;
    else
        cout << X << " nao eh perfeito" << endl;
}

int main(void) {
    int I, N, NUM;
    cin >> N;
    for (I = 0; I < N; I++) {
        cin >> NUM;
        CHECK(NUM);
    }
    return 0;
}