#include <iostream>
using namespace std;

int calcularAn(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        return a * calcularAn(a, n - 1);
    }
}

int main() {
    int a, n;
    cin >> a >> n;

    int resultado = calcularAn(a, n);
    
    cout << "O valor de a^n é: " << resultado << endl;

    return 0;
}
