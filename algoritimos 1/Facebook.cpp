#include <iostream>

using namespace std;
int main()
{
	//variaveis
	int N;
	int contatos[1000];
	int maior = 0;//variavel para o maior numero de contatos
	int menor = 10000;//variavel para o menor numero de contatos
	int i;//contador

	//entrada
	cin >> N;//numero de repeticoes

	//repeticao
	for(i = 0; i < N; i++)
	{
		cin >> contatos[i];//entrada com o numero de contatos
	}
	for(i = 0; i < N; i++)
	{
		if(contatos[i] < menor)//comparacao do menor numero de contatos
			menor = contatos[i];
	}
	for(i = 0; i < N; i++)
	{
		if(contatos[i] > maior)//comparacao do maior numero de contatos
			maior = contatos[i];
	}
	//saida
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;

	return 0;
}
