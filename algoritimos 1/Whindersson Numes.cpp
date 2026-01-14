#include <iostream>

using namespace std;
int main()
{
	//variaveis
	int N;
	int video[1000];
	int i;//contador
	int M = 0; //mais de 10M
	int A = 0; //abaixo de 10M

	//entrada
	cin >> N;
	
	//repeticao
	for(i = 0; i < N; i++)
	{
		cin >> video[i];//entrada com o numero de visualiasacao
	}
	for(i = 0; i < N; i++)
	{
		if(video[i] > 10000000)//videos com mais de 10M
			M = M + 1;
		}
		for(i = 0; i < N; i++)
	{
		if(video[i] < 10000000)//videos com menos de 10M
			A = A + 1;
	}
	//saida
	cout << M << " video(s) com mais de 10M views" << endl;
	cout << A << " video(s) com menos de 10M views" << endl;

	return 0;
}
