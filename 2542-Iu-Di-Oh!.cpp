#include<iostream>
#include<vector>

using namespace std;
int main() {
    int MARCOS, LEONARDO, A, C, N, M, L, I, J;
    while (cin >> N) {
        cin >> M >> L;
        vector<int>m[M];
        vector<int>l[L];
        for (I = 0; I < M; I++) {
            for (J = 0; J < N; J++) {
                cin >> C;
                m[I].push_back(C);
            }
        }
        for (I = 0; I < L; I++) {
            for (J = 0; J < N; J++) {
                cin >> C;
                l[I].push_back(C);
            }
        }
        cin >> MARCOS >> LEONARDO >> A;
        long long MS = m[MARCOS - 1][A - 1];
        long long LS = l[LEONARDO - 1][A - 1];
        if (MS > LS) {
            cout << "Marcos" << endl;
        }
        else if (MS < LS) {
            cout << "Leonardo" << endl;
        }
        else {
            cout << "Empate" << endl;
        }
    }
    return 0;
}