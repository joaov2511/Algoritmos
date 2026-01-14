#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream arqin;
	double x;//variavel com as temperaturas
	double media;//variavel da media
	double soma=0;//variavel da soma
	double n;//numero de temperaturas
	
	cout<<fixed<<setprecision(1);//limite de 1 casa decimais
	arqin.open("temperaturas.txt", ifstream::in);
	
	while(!arqin.eof())//vai continuar ate o arquivo terminar
	{
		arqin>>x;//lendo as temperaturas
		soma=soma+x;//soma da temperaturas
		n++;//contador com numero de temperaturas
	}
	arqin.close();
	media=soma/n;//calculo da media
	
	//saida
	cout<<"Temperatura media: "<<media<<" graus"<<endl;
	
	return 0;
}