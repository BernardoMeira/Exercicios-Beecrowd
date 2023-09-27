#include <iostream>

using namespace std;

int CHECK(int X) {
    int I, A, B, TRUEFALSE = 0;
    A = X / 2;
    B = 0;
    for (I = 2; I <= A; I++) {
        if ((X % I == 0) && (TRUEFALSE == 0)) {
            cout << X << " nao eh primo" << endl;
            TRUEFALSE = 1;
        }
    }
    if (TRUEFALSE != 1) {
        cout << X << " eh primo" << endl;
    }
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