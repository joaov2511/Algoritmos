#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
	double x;
	double y;
	double gasto;
	
	cin >> x;
	cin >> y;
	
	gasto = x/y;
	
	cout << fixed << setprecision(3);
	cout << gasto << " km/l" << endl;

    return 0;
}