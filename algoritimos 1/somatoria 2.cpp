#include <iostream>
#include <cmath>

using namespace std;

 int main()
 {
 	//variaveis
 	int i, j;
 	float x, soma;
 	
 	//entrada
 	  cin >> x;
   
 	//repeticao
 	for(i = 1,j = 50; i <= 50; i ++ , j--)
	 {
	 	soma += (pow(x, i)) / j;

	 }
 	
      //saida
      cout << soma;
 
 	return 0;
 	
 }