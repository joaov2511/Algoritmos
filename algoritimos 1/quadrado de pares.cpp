#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int N;
    int i;
    
    cin>>N;
    
    cout<<fixed<<setprecision(0);
    
    for(i=2; i<=N; i++)
    {
    	if (i%2==0)
			cout<<i<<"^2 = "<<pow(i,2)<<endl;
    }
 
    return 0;
}