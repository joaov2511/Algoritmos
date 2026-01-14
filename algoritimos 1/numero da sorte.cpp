#include <iostream>
using namespace std;

struct numero
{
    int N[10];//numeros
};

int main()
{
    numero A;
    int X;//quantos numeros serao digitados
    int i;//contador
    int S=0;//soma
    
    cin>>X;
    
    for(i=0; i<X; i++)
    {
        cin>>A.N[i];
    }
    
    for(i=0; i<X; i++)
    {
        if(A.N[i]%2 == 0)
        S=S+A.N[i];
    }
    
    cout<<S<<endl;
    return 0;
}