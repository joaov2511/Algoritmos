#include <iostream>
using namespace std;

int main()
{
	//varaveis
    int N;
    int x;//Idades
    int maior;
    
    //entradas
    cin>>N;
    maior=0;
    
    //repetição
    do
    {
        cin>>x;
        
        if (x>0)
        {
            N--;
        }
        
        if (x>maior)
        {
            maior=x;
        }
        
    }while(N>0);
    
    //saida
    cout<<maior<<endl;
    return 0;
}