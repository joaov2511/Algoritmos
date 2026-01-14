#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int n;
	int p;
	int x , y;
	bool teste[10];
	cin >> n;
	int ajd[10][10];
	cin >> x >> y;
	while(x != -1  && y != -1)
	{
		if(x != -1 && y != -1)
		{
			ajd[x][y] = 1;
			ajd[y][x] = 1;
			cin >> x >> y;
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if(ajd[i][j] == 1)
					teste[i] =	true;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		if (teste[i] != true)
		{
			cout << "Nao conexo" << endl;
			return 0;
		}
	}
	cout << "Conexo" << endl;
	return 0;
}
