#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//concatenar o .txt e os pontos e - em CPF ; V

struct pessoas
{
	char nome[100];
	char CPF[20];
	char CEP[20];
	int horas, minutos, segundos;
	double InternetGasta;
	double InternetSobrou;
	int plano;
	double ValorTotal;

};

int main()
{
	fstream arq;
	pessoas dados[1000]; //Struct com os dados dos clientes
	char nomeArq[20]; //Nome do arquivo -> O nome é o mês
	int decisao; //Primeira decisão no switch
	int segundaDecisao; // Segunda decisão no switch
//	int codigo;
//	char separaCodigo[100];
//	char nomePlano[50];
	int c; //contador
	int linhaFile; //+var ;; linha que eu quero ler no arquivo
	char aux[100]; //+var Variável auxiliar para ajudar na leitura das linhas do arquivo
	char aux2[100]; // +var Variável auxiliar para ajudar na leitura das linhas do arquivo (Parte do CPF)
	char Nome_No_Arquivo[100]; // +var = Nome copiado do arquivo
	char CPF_No_Arquivo[100]; //+var = CPF/CNPJ copiado do arquivo
//	bool encontrado = false;

	//Digitando o mês que o operador deseja buscar (Nome do arquivo)
	cout << "Digite o Mes que deseja buscar: ";
	cin.getline(nomeArq, 20);
	strcat(nomeArq, ".txt");
	arq.open(nomeArq, ios :: in);
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

	//Decisão sobre buscar a pessoa por CPF/CPNJ ou NOME
	cout << "Se deseja procurar por NOME, digite 1" << endl;
	cout << "Se deseja procurar por CPF/CNPJ, digite 2" << endl;
	cout << "R: ";
	cin >> decisao;

	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	switch(decisao)
	{
	case 1:
		cin.ignore();
		linhaFile = 1;
		c = 1;
		//Coletando o nome
		cout << "Digite o NOME: ";
		cin.getline(dados[0].nome, 100);
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

		//Definindo o começo da busca
		while(!arq.eof())
		{
			//Fazendo a análise apenas da linha que está contida a informação NOME
			if(c == linhaFile)
			{
				linhaFile += 8;
				arq.getline(aux, 100);

				//Nesse FOR LOOP o título da informação é retirado, Exemplo-> "Nome: Matheus" -> a palavra "Nome:" é retirada
				for(int i = 0; i < 101; i++)
					Nome_No_Arquivo[i] = aux[i + 6];

				//IF onde é feita a checagem entre nome digitado e nome lido no arquivo
				if(strcmp(Nome_No_Arquivo, dados[0].nome) == 0)
				{
					//Criando o arquivo com os dados do cliente
					fstream arqCriar;
					arqCriar.open(strcat(Nome_No_Arquivo, ".txt"), ios :: out);

					//		encontrado = true; ===== VER DEPOIS]

					//Printando as informações do cliente na tela e no arquivo
					for(int i = 0; i < 9; i++)
					{
						cout << aux << endl;
						arqCriar << aux << endl;
						arq.getline(aux, 100);
					}

					//Fechando os arquivos
					arq.close();
					arqCriar.close();

					//Perguntando se deseja manter o novo arquivo com essas informações printadas
					cout << "Deseja manter o arquivo com as informacoes deste cliente ? (1 - Sim // 2 - Nao)" << endl;
					cout << "R: ";
					cin >> segundaDecisao;
					cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

					switch(segundaDecisao)
					{
					case 1:
						cout << "Arquivo Salvo" << endl;
						cout << "Encerrando Programa" << endl;
						break;

					case 2:
						remove(Nome_No_Arquivo);
						cout << "Arquivo Excluido" << endl;
						cout << "Encerrando Programa" << endl;
						break;
					}

					break; // BREAK para sair do WHILE
				}
			}
			arq.getline(aux, 100);
			c++;
		}
		break; // break do SWITCH CASE 1



		//Busca por CPF
	case 2:
		cin.ignore();
		c = 2;
		linhaFile = 2;

		//Coletando o CPF
		cout << "Digite o CPF ou CNPJ do cliente" << endl;
		cout << "R: ";
		cin.getline(dados[0].CPF, 20);
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;


		//Definindo o começo da busca
		while(!arq.eof())
		{
			//Fazendo a análise apenas da linha que está contida a informação CPF
			if(c == linhaFile)
			{
				linhaFile += 7;
				arq.getline(aux2, 100);
				arq.getline(aux, 100);


				//Nesse FOR LOOP o título da informação é retirado, Exemplo-> "CPF: 123.456.789-10" -> a palavra "CPF: " é retirada
				for(int i = 0; i < 30; i++)
					CPF_No_Arquivo[i] = aux[i + 5];

				//Nesse FOR LOOP o título da informação é retirado, Exemplo-> "Nome: Matheus" -> a palavra "Nome: " é retirada
				for(int i = 0; i < 101; i++)
					Nome_No_Arquivo[i] = aux2[i + 6];

				if(strcmp(CPF_No_Arquivo, dados[0].CPF) == 0)
				{
					//Criando o arquivo com os dados do cliente
					fstream arqCriar;
					arqCriar.open(strcat(Nome_No_Arquivo, ".txt"), ios :: out);

					//Printando as informações do cliente na tela e no arquivo
					cout << aux2 << endl;
					arqCriar << aux2 << endl;
					for(int i = 0; i < 8; i++)
					{
						cout << aux << endl;
						arqCriar << aux << endl;
						arq.getline(aux, 100);
					}

					//Fechando os arquivos
					arq.close();
					arqCriar.close();

					//Perguntando se deseja mantenha o arquivo com essas informacoes printadas
					cout << "Deseja manter o arquivo com as informacoes deste cliente ? (1 - Sim // 2 - Nao)" << endl;
					cout << "R: ";
					cin >> segundaDecisao;
					cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

					switch(segundaDecisao)
					{
					case 1:
						cout << "Arquivo Salvo" << endl;
						cout << "Encerrando Programa" << endl;
						break;

					case 2:
						remove(Nome_No_Arquivo);
						cout << "Arquivo Excluido" << endl;
						cout << "Encerrando Programa" << endl;
						break;
					}

					break;
				}
			}
			arq.getline(aux, 100);
			c++;
		}
		break; // break do switch case 2
	} //switch


	return 0;
}
