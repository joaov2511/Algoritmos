#include <iostream>

using namespace std;

int main()
{
	int i;//controle do for
	int n;//quantos competidores
	int t;//tempo que cada um gastou
	int menor;//menor tempo
	int pos;//posição do menor tempo
	
	//entrada de dados
	cin>>n;
	cin>>t;
	menor=t;
	pos=1;
	
	//repeticao
	for(i=2;i<=n; i++)
	{
		cin>>t;
		if(t<menor)
		{
			menor=t;
			pos=i;
		}
	}
	
	//saida
	cout<<pos<<endl;
	
	return 0;
}