#include <iostream>

using namespace std;

int main()
{
	int s;
	int t;
	int f;
	int stf;//saida e tempo de viagem
	
	cin>>s;
	cin>>t;
	cin>>f;
	
	stf=s+t+f;
	
	if(stf>23)
	{
		stf=stf-24;
	}
	else if(stf<0)
	{
		stf=stf+24;
	}
	cout<<stf<<endl;
	
	return 0;
}