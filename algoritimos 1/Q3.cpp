#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N;//contador
	int i;//contador
	double sal;//salario
	int nf;//numero de faltas
	double sf;//salario final
	double acre;//acrescimo

	cin >> N;
	for(i = N; i > 0; i--)
	{
		cin >> sal;
		cin >> nf;
		if(sal <= 1000)
		{
			if(nf <= 5)
			{
				acre = (sal * 10) / 100;
			}
			else if(nf >= 6 && nf <= 12)
			{
				acre = (sal * 5) / 100;
			}
			else if(nf >= 13)
			{
				acre = 0;
			}
		}
		else if(sal >= 1001 && sal <= 3000)
		{
			if(nf <= 5)
			{
				acre = (sal * 7.5) / 100;
			}
			else if(nf > 5 && nf <= 12)
			{
				acre = (sal * 4) / 100;
			}
			else if(nf >= 13)
			{
				acre = 0;
			}
		}
		else
		{
			if(nf <= 5)
			{
				acre = (sal * 3) / 100;
			}
			else if(nf >= 6)
			{
				acre = 0;
			}
		}
		sf = sal + acre;
		cout << fixed << setprecision(2);
		cout << sf << endl;
	}

	return 0;
}
