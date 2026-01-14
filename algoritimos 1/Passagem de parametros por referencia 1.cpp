#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void media(int x, int y, float &m)//funcao com o caluculo da media geometrica
{
	m = sqrt(x*y);//calculo da media geometrica
}

int main()
{
	//declaracao de variaveis
	int x, y;//variaveis com os termos para o calculo
	float m;//resultado da media
		
	cin >> x >> y;//entrada com os termos da funcao
	
	//chamado de funcao
	media (x, y, m);
	
	cout << fixed << setprecision(2);//limite de 2 casas decimais
	
	//saida
	cout << "Media = " << m << endl;	
	
	return 0;
}