#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaracao de variaveis
	int N;//numero de alunos
	int nota[1000];//notas dos alunos
	float media;//media das notas
	int acima=0;//acima da media
	int abaixo=0;//abaixo da media
	int i;//variavel de controle
	double soma=0;//soma das notas
	
	//entrada
	cin>>N;
	
	//repeticao
	for(i=0; i<N; i++)
	{
		cin>>nota[i];//entrada das notas
		soma+=nota[i];//soma das notas
		cout<<fixed<<setprecision(2);//limite de 2 casa decimais
	}
	media=(float)soma/N;//calculo da media
	for(i=0; i<N; i++)
	{
		if(nota[i]>media)
			acima=acima+1;//numero de notas acima da media
	}
	for(i=0; i<N; i++)
	{
		if(nota[i]<media)
			abaixo=abaixo+1;//numero de notas abaixo da media
	}
	
	//saida
	cout<<"Media da turma: "<<media<<endl;
	cout<<"Alunos com nota acima da media: "<<acima<<endl;
	cout<<"Alunos com nota abaixo da media: "<<abaixo<<endl;
	
	return 0;
}