#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A >= B && A >= C) {
        cout << A << " eh o maior" << endl;
    }
    else if (B >= A && B >= C) {
        cout << B << " eh o maior" << endl;
    }
    else {
        cout << C << " eh o maior" << endl;
    }
    return 0;
}
