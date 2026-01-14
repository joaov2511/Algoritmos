#include <iostream>

using namespace std;
int main()
{
	//variaveis
	int n, i, x, y, f=1, fat=1;

	//entrada
	cin >> n;
	if(n % 2 == 0)
	{
		if(n==0){
			cout<<"1"<<endl;
		}
		else
		{
			for(i=n; i>0; i--)
			{
				fat=fat*i;
			}
			cout<<fat<<endl;
		}

	}
	else
	{
		x = 0;
		y = 1;
		if(n == 1)
		{
			cout << "0" << endl;
		}
		else
		{
			for(i = 2; i < n; i++)
			{
				f = x + y;
				x = y;
				y = f;
			}
			cout << f << endl;
		}
	}

	return 0;
}