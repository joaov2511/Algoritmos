#include <iostream>
 
using namespace std;
 
int main()
{
 
    int X;
    int Y;
    int Z;
    
    cin>>X;
    cin>>Y;
    cin>>Z;
    
    if (X>Y && Y>Z)
    {
        cout<<Z<<endl;
        cout<<Y<<endl;
        cout<<X<<endl;
    }
    else if (X>Z && Z>Y)
    {
        cout<<Y<<endl;
        cout<<Z<<endl;
        cout<<X<<endl;
    }
    else if (Y>X && X>Z)
	{
		cout<<Z<<endl;
		cout<<X<<endl;
		cout<<Y<<endl;
	}
    else if (Y>Z && Z>X)
	{
		cout<<X<<endl;
		cout<<Z<<endl;
		cout<<Y<<endl;
	}
    else if (Z>X && X>Y)
	{
		cout<<Y<<endl;
		cout<<X<<endl;
		cout<<Z<<endl;
	}
    else if (Z>Y && Y>X)
	{
		cout<<X<<endl;
		cout<<Y<<endl;
		cout<<Z<<endl;
	}
		cout<<""<<endl;
    	cout<<X<<endl;
        cout<<Y<<endl;
        cout<<Z<<endl;
 
    return 0;
}