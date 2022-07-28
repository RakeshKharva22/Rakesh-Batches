#include <iostream>

using namespace std;

class MatAdd{
	public:
		int a[10][10], b[10][10], c[10][10], i, j, k, l;
		void input()
		{
			cout<<"Enter the number of rows : ";
		    cin>>i;
		    cout<<"Enter the number of columns : ";
		    cin>>j;
		    cout<<"\nEnter elements in 1st matrix : "<<endl;
		    for(k=0;k<i;k++)
		    {
			    for(l=0;l<i;l++)
			    {
		 		    cout<<"Enter the value for ["<<k<<"]["<<l<<"] : ";
				    cin>>a[k][l];
			    }
		    }
		    cout<<"\nEnter the value in 2nd matrix : "<<endl;
		    for(k=0;k<j;k++)
		    {
			    for(l=0;l<j;l++)
			    {
				    cout<<"Enter the value for ["<<k<<"]["<<l<<"] : ";
				    cin>>b[k][l];
			    }
		    }
		}
		void display()
		{
			cout<<"\nThe 1st matrix : "<<endl;
			for(k=0;k<i;k++)
			{
				for(l=0;l<j;l++)
				{
					cout<<a[k][l]<<"\t";
				}
				cout<<endl;
			}
			cout<<"\nThe 2nd matrix : "<<endl;
			for(k=0;k<i;k++)
			{
				for(l=0;l<j;l++)
				{
					cout<<b[k][l]<<"\t";
				}
				cout<<endl;
			}
		}
		void addtion()
		{
			for(k=0;k<i;k++)
			{
				for(l=0;l<j;l++)
				{
					c[k][l] = a[k][l] + b[k][l];
				}
			}
		}
		void displayAddtion()
		{
			cout<<"\nAddition of two matrix is : "<<endl;
			for(k=0;k<i;k++)
			{
				for(l=0;l<j;l++)
				{
					cout<<c[k][l]<<"\t";
				}
				cout<<endl;
			}
		}
};
int main()
{
	MatAdd m;
	m.input();
	m.display();
	m.addtion();
	m.displayAddtion();
	return 0;
}