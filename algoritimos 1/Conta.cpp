#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//variaveis
    int N;
    int i;
    float media;
    int soma;
    int p=0;
    soma=0;
    
    //repetição
    for(i=0; i<10; i++)
    {
    	//entrada
        cin>>N;
        
        //acrecimos para os positivos
        if(N>=0)
		{
			p=p+1;
		}
        //calculos
        soma+=N;
        media=(float)soma/10;
    }
    
    //saida
    cout<<"Positivos = "<<p<<endl;
	cout<<fixed<<setprecision (2);
    cout<<"Media = "<<media<<endl;
}