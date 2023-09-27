#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A;
    cin >> A;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << (4.0 / 3.0) * (3.14159 * A * A * A) << endl;
    return 0;
}

