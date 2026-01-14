#include <iostream>
#include <cmath>

using namespace std;

float calcVersor(float &x, float &y, float &z);

int main()
{
   float x;//Variavel para a abcsissa
   float y;//Variavel para a ordenada
   float z;//Variavel para a cota

   cout << "Digite os componentes do vetor(x, y, z): ";
   cin >> x;
   cin >> y;
   cin >> z;

   cout << calcVersor(x, y, z);

    return 0;

}
float calcVersor(float &x, float &y, float &z)
{

    float modulo = 0;

    modulo = sqrt(pow(x, 2)+ pow(y, 2) + pow(z, 2));

    cout << "versor: (" << x / modulo << ", " << y / modulo << ", " << z / modulo << ")" << endl;


    return 0.0;

}