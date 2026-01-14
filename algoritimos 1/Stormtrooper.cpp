#include <iostream>
#include <iomanip>

using namespace std;

struct dados//struct com os dados dos stormtroopers
{
	float IM;//variavel do indice de maldade
	float FA;//variavel da forca de abate
	float GA;//variavel do grau de aptidao
	int id;//variavel de identificacao
};
int main()
{
	dados trooper[10];
	int i=0;//variavel controle da struct
	float melhor;//variavel com o valor do melhor gra de aptidao
	int melhorid;//variavel com o id do melhor grau de aptidao
	
	cin>>trooper[i].id;//entrada com o id 
	
	while(trooper[i].id !=0)//vai se repetir ate que o id seja diferente de 0
	{
		cin>>trooper[i].IM;//entrada de indice de maldade
		cin>>trooper[i].FA;//entrada da forca de abete
		trooper[i].GA=(trooper[i].IM+trooper[i].FA)/2;//calculo do grau de aptidao
		i++;
		cin>>trooper[i].id;//entrada com o id
	}
	melhor=trooper[i].GA;//melhor grau de aptidao
	
	for(int j=0; j<i; j++)
	{
		if(melhor<trooper[j].GA)
		{
			melhor=trooper[j].GA;//melhor grau de aptidao
			melhorid=trooper[j].id;//melhor id
		}
	}
	cout<<"Stormtrooper escolhido: "<<melhorid<<endl;//saida do melhor id
	cout<<fixed<<setprecision(2);//limite de 2 casas decimais
	cout<<"GA= "<<melhor<<endl;//saida do melhor grau de aptidao
	
	return 0;
}