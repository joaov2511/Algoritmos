#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream arqin; //handle para leitura do arquivo
	double x;//var aux para leitura do arquivo

	//Abrindo o arquivo para leitura
	arqin.open("dados.txt", ifstream::in);

	//Lendo os dados do arquivo
	while(!arqin.eof())
	{
		arqin >> x;
		cout << x << endl;
	}

	//Fechando o arquivo
	arqin.close();

	return 0;
}
