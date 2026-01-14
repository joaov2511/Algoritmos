#include<iostream>
#include<string>
using namespace std;

struct aluno {
	int matricula;
	string nome;
	int idade;
};

aluno cria_aluno(){
	aluno a;
	cin>>a.matricula;
	cin>>a.nome;
	cin>>a.idade;
	return a; // 1
}

int busca_seq_aluno_mat(aluno alunos[], int n, int mat){
	   for(int i=0; i<n; i++){ // 5
		   if(mat == alunos[i].matricula){ //4*n
			   return i; // 1*n
		   }
	   }
	   return -1;	
}

int busca_bin_aluno_mat(aluno alunos[], int n, int mat){
	int inicio = 0; // 1
	int fim = n - 1; // 2
	int meio = 0; // 1
	//começa a repetição
	
	//p = numero de vezes que o loop rodar
	while(inicio <= fim) // 3*p
	{
		meio = (inicio+fim)/2; // 3*p
		if(mat == alunos[meio].matricula){ // 4*p
			return meio; // p		
		} else {
			if(mat > alunos[meio].matricula){ // 4*p
				inicio = meio + 1; // 2*p
			} else {
				fim = meio - 1; // 2 p
			}
		}
	}
	return -1;
}

int busca_seq_aluno_nome(aluno alunos[], int n, string nome){
	   for(int i=0; i<n; i++){ // 5
		   if(nome == alunos[i].nome){ // 4*l
			   return i; // l
		   }
	   }
	   return -1;	
}

int busca_seq_aluno_idade(aluno alunos[], int n, int idade){
	   int contador = 0; // 1
	   for(int i=0; i<n; i++){ // 5
		   if( alunos[i].idade <= idade){ // 3*r
			   contador++; // 1*r ou 2*r
		   }
	   }
	   return contador;	// 1
}


int main(){

	int n;
	
	cin>>n;
	
	aluno alunos[n]; // 1

	for(int i=0;i<n;i++){ // 5
		alunos[i] = cria_aluno(); // 2
	}
	
	int mat = 6; // 1
	int resultado = busca_seq_aluno_mat(alunos, n, mat); // 4
	
	if(resultado != -1){ // 1
		cout<< alunos[resultado].nome <<endl; // 2
		cout<< alunos[resultado].matricula <<endl; // 2
		cout<< alunos[resultado].idade <<endl; // 2
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}
	
	string nome = "Jonas"; // 1
	resultado = busca_seq_aluno_nome(alunos, n, nome); // 4
	
	if(resultado != -1){ // 1
		cout<< alunos[resultado].nome <<endl; // 2
		cout<< alunos[resultado].matricula <<endl; // 2
		cout<< alunos[resultado].idade <<endl; // 2
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}
	
	int idade_buscada = 15; // 1
	
	resultado = busca_seq_aluno_idade(alunos,n,idade_buscada); // 3
	
	cout << "Existe(m) " << resultado; // 1
	cout << " aluno(a)(s) com essa idade ou menor" << endl;
	
	
	mat = 6; // 1
	resultado = busca_bin_aluno_mat(alunos, n, mat); // 3
	
	if(resultado != -1){ // 1
		cout<< alunos[resultado].nome <<endl; // 2
		cout<< alunos[resultado].matricula <<endl; // 2
		cout<< alunos[resultado].idade <<endl; // 2
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}

	
	// soma final: 56 + 18r + 6L + 19p + 6n
	
	return 0;	
}