#include <iostream>
using namespace std;

class matrix
{
	int a[3][3],b;
	public:
	void displaymatrix();
};
   void matrix ::displaymatrix()
   {
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
   }
int main()
{
	matrix m;
	m.displaymatrix();
	return 0;
}