#include <iostream>

using namespace std;

int main()
{
	//variaveis
	int h;//horas
	int t;//tempo
	int m;//minuto
	int s;//segundo
	
	//entrada
	cin>>t;
	
	//calculo
	h=t/3600;
	m=t/60-h*60;
	s=t-((m*60)+(h*3600));
	
	cout<<h<<":"<<m<<":"<<s<<endl;
	
	return 0;
}