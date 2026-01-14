#include<iostream>
#include<cstring>
using namespace std;

struct dado
{
    char nome[100];
    char data[20];
    char S;//sexo
};

int main()
{
    dado inf;
    
    cin.getline(inf.nome,100);
    cin.getline(inf.data,20);
    cin>>inf.S;
    
    cout<<inf.nome<<endl;
    cout<<inf.data<<endl;
    cout<<inf.S<<endl;
    
    return 0;
}