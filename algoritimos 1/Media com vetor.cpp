#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N;
	float media;
	float soma=0;
	int x[100];
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>x[i];
		soma+=x[i];
	}
	media=soma/N;
	cout<<fixed<<setprecision(2);
	cout<<"Media: "<<media<<endl;
	cout <<"Maiores que a media: ";
	for(int i=0; i<N; i++)
	{
		if(x[i]>media)
			cout<<x[i]<<" ";
	}
	
	return 0;
}