#include <iostream>
#include <iomanip>

using namespace std;

 int main()
 {
 	//variaveis:
 	float quantidade;
 	int op;
 	
 	//entrada
 	cin >> quantidade;
 	cin >> op;
 	
 	//decisão
 	switch(op)
 	{
	 	
 	  case 1:
 	  	 
 	  	 cout << fixed << setprecision(2) <<"R$ " <<quantidade * 3.86 << endl;
     break;
 	   
      case 2:
 	  	cout << fixed << setprecision(2) <<"R$ " <<quantidade * 3.77 << endl;
	 break;
 	   
      case 3:
 	  	 cout <<fixed << setprecision(2) <<"R$ " << quantidade * 4.41<< endl;
 	  	 	
	 break;
 	   
      case 4:
 	  	cout << fixed << setprecision(2) <<"R$ " <<quantidade * 0.19 << endl;
 	 break;
  
     case 5:
 	  	 cout <<fixed << setprecision(2) <<"R$ " << quantidade * 5.0<< endl;
 	 break;

 	   
 	   default:
 	   	cout <<"Codigo Invalido!";
 	 break;
	 }
 	return 0;
 }