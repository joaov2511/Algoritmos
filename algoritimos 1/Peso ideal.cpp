#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo)//funcao com calculo do peso ideal
{
	float i;//resultado do calculo
	if(sexo=='M')//caso do sexo masculino
	{
		i=(72.7*h)-58;
	}
	else if(sexo=='F')//caso do sexo feminino
	{
		i=(62.1*h)-44.7;
	}
	return i;//retornar com valor i
}
int main()
{
	float h;//variavel com a altura das pessoas
	char sexo;//variavel com o sexo das pessoas
	float pesoIdeal;//variavel com a saida do peso ideal
	
	//entrada
	cin>>h;//entrada da altura
	cin>>sexo;//entrada do sexo
	
	cout<<fixed<<setprecision(2);//limite de 2 casas decimais
	pesoIdeal=ideal(h, sexo);//pesoIdeal vai receber o valor da funcao ideal
	
	cout<<"Peso ideal = "<<pesoIdeal<<" Kg"<<endl;//saida do peso ideal
	
	return 0;
}