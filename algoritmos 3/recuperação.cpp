#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Estrutura para representar um personagem
struct Personagem {
    int velocidade, resistencia; // Atributos do personagem
};

// Estrutura para representar uma casa
struct Casa {
    vector<pair<int, int> > conexoes; // Pares de destino e custo
};

// Estrutura para armazenar a resposta
struct Resposta {
    int tempo_p1, tempo_p2; // Tempo para cada personagem chegar ao destino
};

// Função para calcular o caminho mais curto usando o algoritmo de Dijkstra
Resposta shortest_path_dijkstra(const vector<Casa>& mapa, int inicio, int fim, const Personagem& p1, const Personagem& p2) {
    vector<int> distance(mapa.size(), INT_MAX); // Vetor para armazenar a distância mínima de cada casa
    vector<int> fadiga(mapa.size(), 0); // Vetor para armazenar a fadiga de cada casa
    vector<bool> intree(mapa.size(), false); // Vetor para verificar se uma casa está na árvore

    distance[inicio] = 0; // A distância do ponto de partida para si mesmo é sempre 0

    // Loop até que a casa de destino esteja na árvore
    while (!intree[fim]) {
        int u = -1;
        // Encontra a casa com a menor distância que ainda não está na árvore
        for (int i = 0; i < (int)mapa.size(); ++i) {
            if (!intree[i] && (u == -1 || distance[i] < distance[u])) {
                u = i;
            }
        }

        // Se a menor distância for infinita, então não há caminho
        if (distance[u] == INT_MAX) {
            break;
        }

        // Adiciona a casa à árvore
        intree[u] = true;

        // Atualiza a distância e a fadiga para todas as casas conectadas à casa atual
        for (size_t k = 0; k < mapa[u].conexoes.size(); ++k) {
            int v = mapa[u].conexoes[k].first, custo = mapa[u].conexoes[k].second;

            // Se a nova distância for menor que a distância atual, atualiza a distância e a fadiga
            if (distance[u] + custo < distance[v]) {
                distance[v] = distance[u] + custo;
                fadiga[v] = fadiga[u] + custo;

                // Se a fadiga exceder a resistência, ajusta para o máximo da resistência
                if (fadiga[v] > p1.resistencia) {
                    fadiga[v] = p1.resistencia;
                }
            }
        }
    }

    // Calcula o tempo de chegada ao objetivo para os dois personagens
    int tempo_p1 = distance[fim] / p1.velocidade + (distance[fim] % p1.velocidade != 0);
    int tempo_p2 = distance[fim] / p2.velocidade + (distance[fim] % p2.velocidade != 0);

    // Inicializa a estrutura resposta e retorna
    Resposta r = {tempo_p1, tempo_p2};
    return r;
}

int main() {
    Personagem p1, p2;
    int c, x, origem, destino, fadiga, objetivo;

    // Lê os atributos dos personagens
    cin >> p1.velocidade >> p1.resistencia;
    cin >> p2.velocidade >> p2.resistencia;

    // Lê o número de casas e conexões
    cin >> c >> x;

    vector<Casa> mapa(c);

    // Lê as conexões entre as casas
    for(int i = 0; i < x; i++) {
        cin >> origem >> destino >> fadiga;
        mapa[origem].conexoes.push_back(make_pair(destino, fadiga));
        mapa[destino].conexoes.push_back(make_pair(origem, fadiga));
    }

    // Lê o objetivo
    cin >> objetivo;

    // Calcula o caminho mais curto para ambos os personagens
    Resposta r = shortest_path_dijkstra(mapa, 0, objetivo, p1, p2);

    // Compara os tempos e determina o vencedor
    if (r.tempo_p1 <= r.tempo_p2) {
        cout << "Personagem 1" << endl;
    } else {
        cout << "Personagem 2" << endl;
    }

    return 0;
}