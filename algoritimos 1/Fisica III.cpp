#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//variaveis
	double F;
	int Q1;
	int Q2;
	int D;
	
	//lendo variaveis
	cin>>Q1;
	cin>>Q2;
	cin>>D;
	
	//calculando
	F=100*((Q1*Q2)/pow(D,2));
	
	//saida
	cout<<fixed<<setprecision(2);
	cout<<" F = "<<F<<endl;
	
	return 0;
}