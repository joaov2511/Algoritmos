#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;
	
	cin>>x>>y;
	while(x!=y)
	{
		if(x<y)
			cout<<"Crescente"<<endl;
		else
			cout<<"Decrescente"<<endl;
		cin>>x>>y;
	}
}
