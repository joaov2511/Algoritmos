#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K)//funcao de conversao de temperatura
{
    C = (5.0/9)*(F - 32);//calculo em celsius
    K = C + 273;//calculo em kelvin
}

int main() 
{
    float F, C, K;//variaveis com os tipos de temperatura
    
    cin >> F;//entrada em fahrenheit
    
    converte(F, C, K);//chamada da funcao
    
    //saida
    cout << fixed << setprecision(2);//limite de 2 casas decimais
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;
    
    return 0;
}