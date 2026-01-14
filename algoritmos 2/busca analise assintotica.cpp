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
	return a;	
}

int busca_seq_aluno_mat(aluno alunos[], int n, int mat){  
	   for(int i=0; i<n; i++){  //f(n)= n (linear)
		   if(mat == alunos[i].matricula){ // f(n)=1 (constante ignorada)
			   return i;
		   }
	   }
	   return -1;	
} //complexidade final da função f(n)= n

int busca_bin_aluno_mat(aluno alunos[], int n, int mat){ 
	int inicio = 0;
	int fim = n - 1;
	int meio = 0;
	//começa a repetição
	while(inicio <= fim)  //f(n)= n (linear)
	{
		meio = (inicio+fim)/2;
		if(mat == alunos[meio].matricula){  // f(n)=1 (constante ignorada)
			return meio;		
		} else {
			if(mat > alunos[meio].matricula){
				inicio = meio + 1;
			} else {
				fim = meio - 1;
			}
		}
	}
	return -1;
} //complexidade final da função f(n)= n

int busca_seq_aluno_nome(aluno alunos[], int n, string nome){ 
	   for(int i=0; i<n; i++){  //f(n)= n (linear)
		   if(nome == alunos[i].nome){  // f(n)=1 (constante ignorada)
			   return i;
		   }
	   }
	   return -1;	
} //complexidade final da função f(n)= n

int busca_seq_aluno_idade(aluno alunos[], int n, int idade){ //f(n)= n (linear)
	   int contador = 0;
	   for(int i=0; i<n; i++){
		   if( alunos[i].idade <= idade){   // f(n)=1 (constante ignorada)
			   contador++;
		   }
	   }
	   return contador;	
} //complexidade final da função f(n)= n


int main(){  

	int n;
	
	cin>>n;
	
	aluno alunos[n];

	for(int i=0;i<n;i++){   //f(n)= n (linear)
		alunos[i] = cria_aluno();
	}
	
	int mat = 6;
	int resultado = busca_seq_aluno_mat(alunos, n, mat);
	
	if(resultado != -1){   // f(n)=1 (constante ignorada)
		cout<< alunos[resultado].nome <<endl;
		cout<< alunos[resultado].matricula <<endl;
		cout<< alunos[resultado].idade <<endl;
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}
	
	string nome = "Jonas";
	resultado = busca_seq_aluno_nome(alunos, n, nome);
	
	if(resultado != -1){   // f(n)=1 (constante ignorada)
		cout<< alunos[resultado].nome <<endl;
		cout<< alunos[resultado].matricula <<endl;
		cout<< alunos[resultado].idade <<endl;
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}
	
	int idade_buscada = 15;
	
	resultado = busca_seq_aluno_idade(alunos,n,idade_buscada);
	
	cout << "Existe(m) " << resultado; 
	cout << " aluno(a)(s) com essa idade ou menor" << endl;
	
	
	mat = 6;
	resultado = busca_bin_aluno_mat(alunos, n, mat);
	
	if(resultado != -1){   // f(n)=1 (constante ignorada)
		cout<< alunos[resultado].nome <<endl;
		cout<< alunos[resultado].matricula <<endl;
		cout<< alunos[resultado].idade <<endl;
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}

	
	return 0;	
} //complexidade final da função f(n)= n