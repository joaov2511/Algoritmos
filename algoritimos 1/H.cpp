#include <iostream>
#include <iomanip>

using namespace std;

 int main()
 {
 	//Declaração de variaveis:
 	
 	int i;
 	int N;
 	float H;
 	
 	//Entrada de dados:
 	
 	cin >> N;
 	
 	//Saida de dados:
 	
 	if(N <= 1000)
	 {
       for(i = 1; i <= N; i ++)
	   {
	   	 H = H +(1. / i);

	   }
	 
	 }
 	
       cout << fixed << setprecision(4) << H << endl;
 	
 	return 0;
 	
 }