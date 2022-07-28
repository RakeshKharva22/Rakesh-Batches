#include <iostream>
using namespace std;

class cricketer
{
	public :
		
		string name, role ,bs;
		int no,age,tm,tr,ave,bestp;
		
		cricketer()
		{
			name="Virat kohli";
			role="Batsman ";
			bs="right handed ";
			no=18;
			age=32;
			tm=100;
			tr=5000;
			bestp=176;
			ave=tr/(float)tm;
		}
};

class batsman :public cricketer
{
	public :
		
		void display()
		{
			cout<<"************************************"<<endl;
			cout<<"           BATSMAN DETAILS"<<endl;
			cout<<"************************************"<<endl;
			
			cout<<"  Batsman name :"<<name<<endl;
			cout<<"  Role :"<<role<<endl;
			cout<<"  Batting style :"<<bs<<endl;
			cout<<"  Batsman no :"<<no<<endl;
			cout<<"  age :"<<age<<endl;
			cout<<"  Match play :"<<tm<<endl;
			cout<<"  Runs :"<<tr<<endl;
			cout<<"  Highest :"<<bestp<<endl;
			cout<<"  average :"<<ave;
			
		}
};
int main()
{
	batsman b1;
	b1.display();
	return 0;
}