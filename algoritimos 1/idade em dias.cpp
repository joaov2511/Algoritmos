#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main()
{
 	int N;
	int anos;
	int meses;
	int dias;

	cin >> N;
	
	anos=N/365;
	meses=(N%365)/30;
	dias=(N%365)%30;
	
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;

    return 0;
}