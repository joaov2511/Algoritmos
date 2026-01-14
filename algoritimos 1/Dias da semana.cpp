#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, m, d;
	double delta, g, f, n;
	double ds;
	
	cin >> d >> m >> a;
	
	if (m <= 2)
	{
		g = a - 1;
		f = m + 13;
	}
	else if (m > 2)
	{
		f = m + 1;
		g = a;
	}
	
	n = int (365.25*g) + int (30.6*f) - 621049 + d;
	
	if (n < 36523)
		delta = 2;
	else if (36523 <= n && n < 73048)
		delta = 1;
	else
	{
		delta = 0;
	}
	
	ds =  round(((n / 7)   - int(n / 7))*7) + delta + 1;
	
	switch(int(ds))
    {
    case 1:
        cout << "domingo";
        break;
    case 2:
        cout << "segunda-feira";
        break;
    case 3:
        cout << "terca-feira";
        break;
    case 4:
        cout << "quarta-feira";
        break;
    case 5:
        cout << "quinta-feira";
        break;
    case 6:
        cout << "sexta-feira";
        break;
    default:
        cout << "sabado";
        break;    
    
    }
	
	return 0;

}