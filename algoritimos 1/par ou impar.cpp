#include <iostream>
 
using namespace std;
 
int main() 
{
    int N; //Quantidade de valores que serão lidos
    int i; //Contador
    int P; //Números
    cin>>N;
    
    for(i=0; i<N; i++)
    {
        cin>>P;
    if(P%2==0 && P>0)
    cout<<"EVEN POSITIVE"<<endl;
    
    else if (P%2==0 && P<0)
    cout<<"EVEN NEGATIVE"<<endl;
    
    else if (P%2!=0 && P>0)
    cout<<"ODD POSITIVE"<<endl;
    
    else if (P%2!=0 && P<0)
    cout<<"ODD NEGATIVE"<<endl;
    
    else if (P==0)
    cout<<"NULL"<<endl;
    }
 
    return 0;
}