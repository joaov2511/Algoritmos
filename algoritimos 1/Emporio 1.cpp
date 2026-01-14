#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	int cod;//codigo do produto
	double preco;//preco dos produtos
	char nome[50];//nome do cliente
	char cidade[50];//cidade do cliente
	int idade;//idade do cliente
	double pag;//valor pago pelo cliente
	double troco;//troco da compra

	//entrada
	cin >> cod >> preco;
	cin.ignore();
	cin.getline(nome, 50);
	cin.getline(cidade, 50);
	cin >> idade;
	cin >> pag;

	//switch para achar o produto
	switch(cod)
	{
		case 1:
			cout << "Queijo" << endl;
			break;
		case 2:
			cout<<"Geleia"<<endl;
			break;
		case 3:
			cout<<"Doce"<<endl;
			break;
		case 4:
			cout<<"Refrigerante"<<endl;
			break;
		case 5:
			cout<<"Sorvete"<<endl;
			break;
		case 6:
			cout<<"Presunto cru"<<endl;
			break;
		case 7:
			cout<<"Vinho"<<endl;
			break;
		default:
			cout<<"Codigo invalido"<<endl;
	}
	cout<<fixed<<setprecision(2);
	cout<<"Valor total = "<<preco<<endl;
	
	//calcular troco
	troco=pag-preco;
	if(troco<0)
		cout<<"Pagamento insuficiente"<<endl;
	else
	{
		cout<<"Troco = "<<troco<<endl;
	}

	return 0;
}
