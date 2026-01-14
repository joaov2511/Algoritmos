#include <iostream>

using namespace std;

void troca(int &X, int &Y)//funcao para troca dos valores
{
    int aux = X;
    X = Y;
    Y = aux;
}

int main() 
{
	//variaveis
    int X, Y;
    
    //entrada
    cin >> X >> Y;
    
    troca (X, Y);//chamada de funcao
    
    //saida
    cout << X << endl;
    cout << Y << endl;
    
    return 0;
}