#include <iostream>
using namespace std;

class format
{
	public :
		
		
	void rollno()
	{
		cout<<"`````````````````````````````````````````````````````````````````"<<endl;
		cout<<" ROLL NO     SUB1    SUB2    SUB3    TOTAL     PERCENTAGE"<<endl;
		cout<<"`````````````````````````````````````````````````````````````````"<<endl;
		cout<<"    1         30      25      45      100     "<<100/(float)3<<endl;
		cout<<"    2         25      20      25       70     "<<70/(float)3<<endl;
		cout<<"    3         20      15      35       70     "<<70/(float)3<<endl;
		cout<<"    4         35      30      40      105     "<<105/(float)3<<endl;
	}
};
int main ()
{
	format f;
	f.rollno();
	return 0;
}