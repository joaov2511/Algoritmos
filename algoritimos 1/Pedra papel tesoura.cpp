#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//variaveis
    int i;//variavel controle
    int n;//numero de casos teste
    char A[50];//jogador A
    char B[50];//jogador B
    
    //entrada
    cin >> n;
    
    //repeticao
    for (i = 0; i < n; i++)
    {
    	//opcoes de jogadas
        cin >> A;
        cin >> B;
        
        //decisao
        if (strcmp(A,"pedra") == 0 && strcmp (B,"papel") == 0)//caso pedra perde pra papel
            cout << "Jogador B" << endl;
            
        if(strcmp(A,"pedra") == 0 && strcmp(B,"tesoura") == 0)//caso pedra ganhe de tesoura
			cout << "Jogador A" << endl;
			
		if(strcmp(A,"pedra") == 0 && strcmp(B,"pedra") == 0)//caso pedra empate com pedra
			cout << "Empate" << endl;
			
		if(strcmp(A,"papel") == 0 && strcmp(B,"pedra") == 0)//caso papel ganhe de pedra
			cout << "Jogador A" << endl;
			
		if(strcmp(A,"papel") == 0 && strcmp(B,"tesoura") == 0)//caso papel perde pra tesoura
			cout << "Jogador B" << endl;
			
		if(strcmp(A,"papel") == 0 && strcmp(B,"papel") == 0)//caso papel empate com papel
			cout << "Empate" << endl;
			
		if(strcmp(A,"tesoura") == 0 && strcmp(B,"papel") == 0)//caso tesoura ganhe de papel
			cout << "Jogador A" << endl;
			
		if(strcmp(A,"tesoura") == 0 && strcmp(B,"pedra") == 0)//caso tesoura perde de pedra
			cout << "Jogador B" << endl;
			
		if(strcmp(A,"tesoura") == 0 && strcmp(B,"tesoura") == 0)//caso tesoura empate com tesoura
			cout << "Empate" << endl;
    }
    
    return 0;
}