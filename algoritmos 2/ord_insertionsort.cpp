#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho) //Função para a inserção direta dos dados
{
    bool troca=true; 
    int chave, m;
    
    while(troca){
    	troca=false;
		for(m=0;m<=tamanho;m++){
			if(vetor[m+1]>vetor[m]){
				chave=vetor[m+1];
				vetor[m+1]=vetor[m];
				vetor[m]=chave;
				troca=true;
			}
		}
	}
	
	for(m=0;m<=tamanho;m++){
		cout<<vetor[m]<<" ";//saida com os dados do vetor
	} 
}

int main()
{
    int vetor[100], i = 0;
    
    
    cin >> vetor[i];//entrada com os dados do vetor
    while(vetor[i] != 0)
    {
    	i++;
        cin >> vetor[i];//entrada com os dados do vetor
    }
    insercaoDireta(vetor, i-1);

    return 0;
}