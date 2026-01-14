#include <iostream>

using namespace std;

int main()
{
    //variaveis
	int N;
	int div=0;//contador de divisoes
	
	//entrada
	cin>>N;
	
	//repeticao
	for(int i=0; i<=N; i++)
	{
		if(N%i==0)
			div++;
	}
	//decisao e saida
	if(div>2)
		cout<<"nao e primo"<<endl;
	else
	{
		cout<<"primo"<<endl;
	}
	
	return 0;
}