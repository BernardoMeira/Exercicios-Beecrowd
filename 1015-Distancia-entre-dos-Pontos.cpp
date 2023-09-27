#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double X1, X2, Y1, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    cout << fixed << setprecision(4);
    cout << sqrt(pow(X2 - X1, 2.0) + pow(Y2 - Y1, 2.0)) << endl;
    return 0;
}
