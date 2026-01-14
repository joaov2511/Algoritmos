#include <iostream>

using namespace std;

int main()
{
	int mat[3][3];//variavel da matriz
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>mat[i][j];//entrada dos termos da matriz
		}
	}
	if(mat[0][1]==1)//caso seja masculino
	{
		cout<<"MASCULINO"<<endl;
	}
	else//caso seja feminino
	{
		cout<<"FEMININO"<<endl;
	}
	return 0;
}