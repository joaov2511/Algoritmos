#include <iostream>
#include <iomanip>

using namespace std;

struct dados//struct com os dados dos alunos
{
	int matricula;//variavel da matricula
	float prova1;//variavel da prova 1
	float prova2;//variavel prova 2
	float media;//variavel da media ponderada
};

int main()
{
	dados aluno[10];
	int i=0;//variavel controle da struct
	
	cout<<"Digite o seu numero de matricula:"<<endl;
	cin>>aluno[i].matricula;//entrada matricula
	cout<<"Digite a nota da primeira prova:"<<endl;
	cin>>aluno[i].prova1;//entrada prova 1
	cout<<"Digite a nota da segunda prova:"<<endl;
	cin>>aluno[i].prova2;//entrada prova 2
	
	aluno[i].media=(2*aluno[i].prova1+3*aluno[i].prova2)/5;//calculo da media ponderada
	
	cout<<"Matricula do aluno: "<<aluno[i].matricula<<endl;//saida da matricula
	cout<<fixed<<setprecision(2);//limite de 2 casas decimais
	cout<<"Nota da primeira prova: "<<aluno[i].prova1<<endl;//saida da prova1
	cout<<"Nota da segunda prova: "<<aluno[i].prova2<<endl;//saida prova 2
	cout<<"Media: "<<aluno[i].media<<endl;//saida da media ponderada
	
	return 0;
}