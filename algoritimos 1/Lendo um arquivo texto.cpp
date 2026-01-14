#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char x[50];//variavel que vai ler o arquivo
	char nomearq[100];//nome do arquivo
	ifstream arqin;//vai abrir o arquivo
	
	cin.getline(nomearq, 100);
	
	.open(nomearq, ifstream::in);
	while(!arqin.eof())//vai ler o arquivo ate terminar o arquivo
	{
		arqin.getline(x,50);//entrada com os dados escritos no arquivo
		cout<<x<<endl;//saida com com os dados do arquivo
	}
	arqin.close();//fechar o arquivo
	
	return 0;
}