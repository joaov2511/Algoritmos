#include <iostream>
#include <cmath>

using namespace std;

 int main()
 {
 	
 	//variaveis
 	int i;
 	float x, soma;
 	
 	//entrada
 	  cin >> x;
 	
	   //repeticao
 	for(i = 1; i <= 10; i ++)
	 {
	 	soma += pow(x, i);
	 }
 	
      //saida
      cout << soma;
 
 	return 0;
 	
 }