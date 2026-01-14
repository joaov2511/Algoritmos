#include <iostream>

using namespace std;

int main(){
	
	int lado1,lado2,cilindro1,cilindro2;
	
	cin>>lado1>>lado2>>cilindro1>>cilindro2;
	
	int diam1 = cilindro1*2;
	int diam2 = cilindro2*2;
	int tamTotal = diam1+diam2;
	
	int maiorCilindro = cilindro2;
	
	if(diam1>diam2){
		maiorCilindro = cilindro1;
	}
	
	if(lado1>tamTotal){
		if(maiorCilindro<lado2){
			cout<<"S"<<endl;
		}
	}else if(lado2>tamTotal){
		if(maiorCilindro<lado1){
			cout<<"S"<<endl;
		}
	}else{
		cout<<"N"<<endl;
	}
	
	return 0;
}