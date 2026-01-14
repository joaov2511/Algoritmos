#include <iostream>
#include <cmath>
using namespace std;

double raizQuadrada(double x, double x0, double epsilon) {
    double estimativa = (x0 + x / x0) / 2;

    if (fabs(x0 - estimativa) <= epsilon) {
        return estimativa;
    } else {
        return raizQuadrada(x, estimativa, epsilon);
    }
}

int main() {
    double x, x0, epsilon;
    cin >> x >> x0 >> epsilon;

    double resultado = raizQuadrada(x, x0, epsilon);
    
    cout << fixed;
    cout.precision(4);
    cout << resultado << endl;

    return 0;
}
