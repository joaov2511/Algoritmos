#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main()
{
	//variaveis
    int N; // quantidade de pokemons
    int i; // contador
    char nome [40];
    int Q; // quantidade gasta
    int F; // força dos pokemons
    int soma=0; // soma da força
    float media=0; // media da força
    int gasto=0; // soma das pokebolas gastas
    
    //entrada
    cin>>N;
    
    //repeticao
    for(i=0; i<N; i++)
    {
        cin.ignore();
        cin.getline(nome,40);
        
        cin>>Q;
        cin>>F;
        
        gasto+=Q;
        soma+=F;
        media=(float)soma/N;
        cout<<fixed<<setprecision(2);
    }
    //saida
    cout<<"Total de Pokebolas = "<<gasto<<endl;
    cout<<"Media de forca = "<<media<<endl;
    return 0;
}