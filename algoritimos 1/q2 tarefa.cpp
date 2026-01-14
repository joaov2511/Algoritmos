#include <iostream>

using namespace std;

void converte(int tempo_passado);

int main()
{
  int tempo_passado;

  cout << "quantos dias passados no periodo? ";
  cin  >> tempo_passado;

  converte(tempo_passado);

   return 0;

}

void converte(int tempo_passado)
{
   int ano = 365;
   int mes = 30;

cout << tempo_passado / ano << " anos, " << (tempo_passado % ano) / mes << " meses, " << (tempo_passado % ano) % mes << " dias\n" ;

    return ;

}