#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//variaveis
    double N;
    double soma;
    float media;
    int i;
    soma=0;
    media=0;
    
    //repeticao
    for(i=0; i<10; i++)
    {
    	//entrada e calculo
        cin>>N;
        soma+=N;
        media=(float)soma/10;
        cout<<fixed<<setprecision(2);
    }
    //saida
    cout<<media<<endl;
}