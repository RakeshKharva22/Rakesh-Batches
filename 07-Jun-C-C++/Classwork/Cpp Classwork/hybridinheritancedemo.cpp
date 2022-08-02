#include<iostream>
using namespace std;

class rollid{
	protected:
		int rollno;
	public:
		void getId(int id)
		{
			rollno = id;	
		}
		
		void showId()
		{
			cout<<"\nRoll No is : "<<rollno;	
		}	
};

class marks : public rollid{
	protected:
		int sub1,sub2;
	public:	
		void getMarks(int s1, int s2)
		{
			sub1 = s1;
			sub2 = s2;
		}
	
	void showMarks()
	{
		cout<<"\nSubject1 Marks is"<<sub1;
		cout<<"\nSubject2 Marks is"<<sub2;
	}
};

class ExtraMarks {
	protected:
		int sp;
	public:
		void getSP(int s)
		{
			sp = s;
		}
		
		void showSP()
		{
			cout<<"Sports Marks : "<<sp;
		}
};

class Result : public marks,public ExtraMarks{
	protected:
		int total;
	public:
		void display()
		{
			total = sub1+sub2+sp;
			showId();
			showMarks();
			showSP();
			cout<<"Total Marks: "<<total;		
		}
};



int main()
{
	Result res;
	res.getId(10);
	res.getMarks(89,54);
	res.getSP(66);
	res.display();
	
	
	return 0;
}