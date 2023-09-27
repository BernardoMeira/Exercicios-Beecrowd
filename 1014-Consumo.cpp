#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int A;
    double B;
    cin >> A >> B;
    cout << fixed << setprecision(3);
    cout << A / B << " km/l" << endl;
    return 0;
}
