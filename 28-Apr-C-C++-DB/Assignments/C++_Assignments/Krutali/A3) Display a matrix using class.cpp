#include <iostream>

using namespace std;

class Matrix{
	public:
	    int mat[3][3], i, j;
	    void input()
	    {
	    	cout<<"Enter matrix elements : "<<endl;
	    	for(i=0;i<=2;i++)
	    	{
	    		for(j=0;j<=2;j++)
	    		{
	    			cout<<"Enter element ["<<i<<"]["<<j<<"] ";
	    			cin>>mat[i][j];
				}
			}
		}
		void show()
		{
			cout<<"Matrix is : "<<endl;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					cout<<mat[i][j]<<" ";
				}
				cout<<endl;
		    }
		}
};
int main()
{
	Matrix m1;
	m1.input();
	m1.show();
	
	return 0;
}