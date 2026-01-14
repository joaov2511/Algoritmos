#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int buscaBinaria(string ilhas[], string valor, int inicio, int fim) {
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (ilhas[meio] == valor) {
            return meio; // Elemento encontrado
        } else if (ilhas[meio] < valor) {
            inicio = meio + 1; // Busca na metade superior
        } else {
            fim = meio - 1; // Busca na metade inferior
        }
    }
    return -1; // Elemento não encontrado
}

int main(){
    setlocale(LC_ALL, "Portuguese");//Para poder usar acentuação
    string ilhas[8];//variavel
    string valor;//variavel
    int pista;//variavel
    for(int i = 0; i < 7; i++){//repetição
        getline(cin >> ws, ilhas[i]);//entrada de dado para string com espaço
    }
    getline(cin >> ws, valor);//entrada de dado para string com espaço
    pista = buscaBinaria(ilhas, valor, 0, 6);
    cout << "Índice da pista encontrada: " << pista << endl;
}