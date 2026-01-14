#include <iostream>
#include <list>
using namespace std;

struct Personagem{
	int chave;
	string nome;
	string item;
	int status;
};

int hash_aux(int k,int m){
	return k % m;	
}

int hash_aux2(int k,int m){
	return 1+(k % (m-1));
}

int hash_duplo(int k,int m, int i){
	return (hash_aux(k,m)+i*hash_aux2(k,m))%m;	
}

int hash_linear(int k, int m, int i){
	return (hash_aux(k,m)+i)%m;
}

int calcular_chave(string nome_personagem){
	int chave = 0;
	for(int i=0; i<nome_personagem.size(); i++){
		chave += (int)nome_personagem[i];
	}
	return chave;
}

int inserir_personagem(Personagem tabela_hash[], Personagem valor, int m){
	int pos = -1, i = 0;
	while(i<m){
		pos = hash_linear(valor.chave, m, i);
		if(tabela_hash[pos].status != 1){
			tabela_hash[pos] = valor;
			return pos;
		}
		i++;
	}
	return -1;	
}

int buscar_personagem(Personagem tabela_hash[], int chave, int m){
	int pos, i = 0, status = 1;
	while(i<m){
		pos = hash_duplo(chave, m, i);
		status = tabela_hash[pos].status;
		if(status == 0)
			return -1;
		if(tabela_hash[pos].chave == chave && status == 1){
			return pos;
		}
		i++;
	}
	return -1;		
}

int main(){
	setlocale(LC_ALL,"");
	
	const int m = 10;
	
	Personagem tabela_hash[m];
	list<string> bolsa, fila;
	

	
	Personagem p_aux;
	
	string nome_personagem;
	string item;	
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>item;
		bolsa.push_back(item);
	}
	
	int p;
	cin>>p;
	for(int i=0;i<p;i++){
		cin.ignore();
		cin>>nome_personagem;
		fila.push_front(nome_personagem);
	}
	
	while(!fila.empty()){
		nome_personagem = fila.front();
		fila.pop_front();
		
		p_aux.nome = nome_personagem;
		p_aux.chave = calcular_chave(nome_personagem);
		p_aux.item = "Sem item";
		
		int result = buscar_personagem(tabela_hash,p_aux.chave, m);
		
		if(result != -1)
			continue;
		
		if(!bolsa.empty()){
			item = bolsa.front();
			
			p_aux.item = item;
		}
		
		result = inserir_personagem(tabela_hash, p_aux, m);

	}
	
	for(int i=0;i<m;i++){
		if(tabela_hash[i].status == 1){
			cout << tabela_hash[i].nome << "\t";
			cout << tabela_hash[i].item << "\t";
			cout << i << endl;
		}
	}
	
	
	return 0;
}