#include <iostream>
#include <vector>

using namespace std;

string canhao_destruicao(int N, vector<pair<int, int>> projeteis, int K, int R) {
    // Matriz para armazenar o dano máximo com capacidade de carga até K
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    // Preenche a matriz dp usando programação dinâmica
    for (int i = 1; i <= N; i++) {
        int poder = projeteis[i - 1].first;
        int peso = projeteis[i - 1].second;
        for (int j = 0; j <= K; j++) {
            // Se não usarmos o projétil atual
            dp[i][j] = dp[i - 1][j];
            // Se usarmos o projétil atual e ele cabe na capacidade restante
            if (j >= peso) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - peso] + poder);
            }
        }
    }

    // O dano máximo causado com a capacidade de carga K
    int dano_maximo = dp[N][K];

    // Verifica se o dano máximo é suficiente para completar a missão
    if (dano_maximo >= R) {
        return "Missao completada com sucesso";
    } else {
        return "Falha na missao";
    }
}

int main() {
    int num_casos;
    cin >> num_casos;

    while (num_casos--) {
        // Lê o número de projéteis disponíveis
        int N;
        cin >> N;

        // Lê os projéteis disponíveis
        vector<pair<int, int>> projeteis(N);
        for (int i = 0; i < N; i++) {
            cin >> projeteis[i].first >> projeteis[i].second;
        }

        // Lê a capacidade de carga do canhão
        int K;
        cin >> K;

        // Lê a resistência do castelo
        int R;
        cin >> R;

        // Verifica o resultado da missão e imprime a mensagem apropriada
        cout << canhao_destruicao(N, projeteis, K, R) << endl;
    }

    return 0;
}
