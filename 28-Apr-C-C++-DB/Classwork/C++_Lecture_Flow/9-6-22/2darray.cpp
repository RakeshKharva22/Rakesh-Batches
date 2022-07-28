#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3];
	
	cout<<"Enter Matrix 1"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Element ["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter Matrix 2"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Element ["<<i<<"]["<<j<<"] : ";
			cin>>b[i][j];
		}
	}
	
	cout<<"Result Matrix : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<"\t"<<c[i][j];			
		}
		cout<<endl;
	}
	
	return 0;
}