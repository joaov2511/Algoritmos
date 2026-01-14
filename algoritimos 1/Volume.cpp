#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//funcao pra calcular o volume
float volume(int r)
{
	float volume;
	
	volume = (4.0 / 3.0) * 3.14 * pow(r, 3);//calculo do volume
	
	return volume;
}
int main()
{
	int r;
	float v;
	
	//entrada
	cin >> r;
	
	v = volume(r);//V igual a funcao
	
	//saida
	cout<<fixed<<setprecision(2);
	cout << v << endl;
	
	return 0;
}
