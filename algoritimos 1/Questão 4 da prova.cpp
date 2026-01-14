#include <iostream>

using namespace std;
int main()
{
	int N;
	int i;
	
	cin>>N;
	for(i=1; i<=N; i++)
	{
		if(i%2!=0)
			cout<<i<<endl;
	}
	
	return 0;
}