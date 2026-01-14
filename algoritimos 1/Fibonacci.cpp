#include <iostream>

using namespace std;

int main()
{
	//Declaração de variaveis:
 	int i;
 	int N;
 	int fibo = 0, fibo2 = 1;
 	int fibo3;
 	
 	//Entrada de dados:	
 	cin >> N;
 	
 	//Saida de dados:
       for(i = 1; i <= N; i++)
	   {
	   	 cout << fibo <<" ";
	   	 
	   	 fibo3 = fibo + fibo2;
	   	 fibo = fibo2;
	   	 fibo2 = fibo3;
	   }
	   
	return 0;
}