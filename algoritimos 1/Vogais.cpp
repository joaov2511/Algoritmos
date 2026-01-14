#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char texto[50];
    int tam;
    int i;
    int vogais=0;
    
    cin.getline(texto,50);
    tam=strlen(texto);
    
    for(i=0; i<tam; i++)
    {
        if(texto[i]=='a')
        {
            texto[i]='A';
            vogais++;
        }
        
        else if(texto[i]=='e')
        {
            texto[i]='E';
            vogais++;
        }
        
        else if(texto[i]=='i')
        {
            texto[i]='I';
            vogais++;
        }
        
        else if(texto[i]=='o')
        {
            texto[i]='O';
            vogais++;
        }
        
        else if(texto[i]=='u')
        {
            texto[i]='U';
            vogais++;
        }
    }
    
    cout<<texto<<endl;
    cout<<vogais<<endl;
    
    return 0;
}