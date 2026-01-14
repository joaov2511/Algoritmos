#include <iostream>
#include <iomanip>

using namespace std;

struct dados//struct com as imformações dos alunos
{
	int matricula;//numero de maricula
	float prova1;//prova 1
	float prova2;//prova 2
};

int main()
{
	dados aluno[10];
	int i=0;//variavel controle da struct
	
	cout<<"Digite o seu numero de matricula:"<<endl;
	cin>>aluno[i].matricula;//entrada do numero de matricula
	cout<<"Digite a nota da primeira prova:"<<endl;
	cin>>aluno[i].prova1;//entrada da prova 1
	cout<<"Digite a nota da segunda prova:"<<endl;
	cin>>aluno[i].prova2;//entada da prova 2
	
	//saida 
	cout<<"Matricula do aluno: "<<aluno[i].matricula<<endl;//saida da atricula
	cout<<fixed<<setprecision(2);//limite de 2 casa decimais
	cout<<"Nota da primeira prova: "<<aluno[i].prova1<<endl;//saida da prova 1
	cout<<"Nota da segunda prova: "<<aluno[i].prova2<<endl;//saida da prova 2
	
	return 0;
}