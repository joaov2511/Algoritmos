#include <iostream>
using namespace std;

int main()
{
	int n;
	int j=0;
	
	cin >> n;
	
	int v[n];
	for(int i=0; i<n; i++)
	{
		cin >> v[i];
		if(v[i] < 0)
		{
			v[i] = 0;
			j++;
		}
		
	}
	for(int i=0; i<n; i++)
		cout << v[i] << endl;
	cout << j << endl;
	
	return 0;
}