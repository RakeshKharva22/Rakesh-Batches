#include <iostream>
#include <string.h>
using namespace std;

class Riddhi
{
	public :
		
		char s1[20];
		char s2[20];
		
		Riddhi(char str1[20], char str2[20])
		{
			strcpy (s1,str1);
			strcpy (s2,str2);
		}
		
		void operator +()
		{
			cout<<"concatenate :"<<strcat(s1,s2);
		}
};
int main()
{
	char str1[20]="tops";
	char str2[20]="technology";
	Riddhi r(str1,str2);
	+r;
	return 0;
}