#include <iostream>
using namespace std;

class A{
public:
int mat1[3][3], mat2[3][3],i ,j ,mat3[3][3];
			
void func1()
{
    cout<<"Enter elements of metrix : 1";
	cout<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Element ["<<i<<"]["<<j<<"] = ";
			cin>>mat1[i][j];	
		}
		
		
	}
	
}
	
void func2()
{
   cout<<"Enter elements of matrix : 2";
   cout<<endl<<endl;
   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Element ["<<i<<"]["<<j<<"] = ";
			cin>>mat2[i][j];	
		}
		
		
	}
}

void func3()
{
	cout<<"\nAddition the two given matrix \n";
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			cout<<"    "<<mat3[i][j];	
		}
		cout<<endl;
	}
	
	

}
		
};

int main()
{
	A a1;
	a1.func1();
	a1.func2();
	a1.func3();
	return 0;
}