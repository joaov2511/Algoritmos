#include <iostream>
#include <string>

using namespace std;

struct Implante {
    string nome;
    string fabricante;
    int tier;
    float taxaPsicose;
};

int main() {
    int N;
    cin >> N;

    Implante *implantes = new Implante[N];

    // Preenchendo os dados dos implantes
    for (int i = 0; i < N; ++i) {
        cin.ignore(); // Limpa o buffer do cin
        getline(cin, (implantes + i)->nome);
        getline(cin, (implantes + i)->fabricante);
        cin >> (implantes + i)->tier;
        cin >> (implantes + i)->taxaPsicose;
    }

    // Calculando a soma das taxas de psicose dos implantes
    float somaTaxaPsicose = 0;
    for (int i = 0; i < N; ++i) {
        somaTaxaPsicose += (implantes + i)->taxaPsicose;
    }

    // Verificando se ultrapassou o limite de psicose
    if (somaTaxaPsicose > 60.0) {
        cout << "Alerta! Recompensa de 50000 edinhos pela cabeça do Ciberpsicopata." << endl;
    } else {
        cout << "Vamos tchum! Temos uma cidade pra conquistar!" << endl;
    }

    // Liberando a memória alocada dinamicamente
    delete[] implantes;

    return 0;
}