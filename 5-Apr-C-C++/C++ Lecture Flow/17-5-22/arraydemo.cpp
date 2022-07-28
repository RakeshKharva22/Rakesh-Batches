#include <iostream>
using namespace std;

int main()
{
	int mat1[3][3], mat2[3][3],res[3][3];
	
	cout<<"Enter Matrix 1 : \n\n";
	
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Enter Element ["<<i<<"]["<<j<<"] : ";
			cin>>mat1[i][j];
		}
	}
	
	cout<<"\nEnter Matrix 2 : ";
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Enter Element ["<<i<<"]["<<j<<"] : ";
			cin>>mat2[i][j];
		}
	}
	
	
	cout<<"Result Matrix : \n";
	
		for(int i = 0;i < 3;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			res[i][j] = mat1[i][j] + mat2[i][j];
			cout<<"\t"<<res[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}