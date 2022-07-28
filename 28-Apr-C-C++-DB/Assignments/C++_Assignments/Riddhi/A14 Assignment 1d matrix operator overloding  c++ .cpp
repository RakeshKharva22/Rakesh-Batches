#include <iostream>
using namespace std;

class matrix
{
	public:
		int a[3][3];
	
	void accept();
	void show();
	void operator +(matrix r);
};

void matrix :: accept()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
}

void matrix :: show()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"   "<<a[i][j];
		}
	}
}

void matrix ::operator +(matrix r)
{
	long mat[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			mat[i][j] = a[i][j] + r.a[i][j];
		}
	}
	
	cout<<"\nAddition of two matrix :"<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"  "<<mat[i][j];
		}
	}
	
}
int main()
{
	matrix m,p;
	cout<<"\nEnter matrix 1 :"<<endl;
	m.accept();
	
	cout<<"\nMatrix 1 are :"<<endl;
	m.show();
	
	cout<<"\nEnter matrix 2 :"<<endl;
	p.accept();
	
	cout<<"\nMatrix 2 are :"<<endl;
	p.show();
	m+p;
	
	
	return 0;
}