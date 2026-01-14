#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
 	int i; //contador
	int P; //números positivos
	float x;//numeros de entrada
	float media;//media dos valores
	float J; //auxiliar positivo da média
	
	P=0;
	J=0;
	
	for(i=0; i<6; i++)
	{
		cin>>x;
		if(x>0)
		{
			P++;
			J=J+x;
		}
	}
	media= J/P;//calculo da media
	
    cout<<fixed<<setprecision(1);
	cout<<P<<" valores positivos"<<endl;
	cout<<media<<endl;

    return 0;
}