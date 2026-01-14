#include <iostream>
#include <iomanip>

using namespace std;

float media(float N1, float N2)
{
	float media;
	media=float(N1+N2)/2;
	
	return media;
}
int main()
{
	float N1,N2;
	float m;

	//lendo x e y
	cin>>N1>>N2;
	cout<<fixed<<setprecision(1);
	//calculando a media
	m=media(N1,N2);
	
	//mostrando a media
	cout << m << endl;
	return 0;
}