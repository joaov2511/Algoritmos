#include <iostream>
#include <iomanip> 
using namespace std;
 
int main()
{
 	double A;
	double B;
	double C;
	double media;

	cin >> A;
	cin >> B;
	cin >> C;
	
	media = (2 * A + 3 * B + 5 * C) / (2 + 3 + 5);
	
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << media << endl;

 
    return 0;
}