#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(3);
    cout << (A * B) / 12 << endl;
    return 0;
}
