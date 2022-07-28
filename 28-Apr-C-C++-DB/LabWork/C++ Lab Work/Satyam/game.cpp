#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;

class GAME{
	public:
			
		string player_name;
		int rounds;
		int player_score = 0 , computer_score = 0;
        int player_choice,computer_choice;	
        
	    void display()
	    {
	    	
	        cout<<endl;
	        cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	        cout<<"             NAME"<<endl<<endl;
	        cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
    	    
	        cout<<"Enter Your Name : ";
    	    cin>>player_name;
	
        	system("cls");
	
	        cout<<endl;
	        cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	        cout<<"                    ROUNDS"<<endl<<endl;
	        cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
    	    
	        cout<<player_name<<" How Many Rounds You Want To Play? : ";
	        cin>>rounds; 
	
	        for(int round=1;round<=rounds;round++)
	        {
		        system("cls");
	     
		        cout<<endl;
		        cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	            cout<<"             GAME"<<endl<<endl;
	            cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
    	    
		        cout<<"Round No : "<<round<<"/"<<rounds<<endl<<endl;
		        cout<<player_name<<"'s Score = "<<player_score<<endl<<endl;
		        cout<<"Computer Score = "<<computer_score<<endl<<endl<<endl;
		        
		        cout<<"1) Rock"<<endl<<endl;
        		cout<<"2) paper"<<endl<<endl;
	         	cout<<"3) scissor"<<endl<<endl<<endl;
		
        		srand(time(0));
        		computer_choice = (rand()%3)+1;
		
		
		        do
        		{
            		cout<<"Select Your Choice : ";
            		cin>>player_choice;
        			cout<<endl<<endl;
        			cout<<"Computer Choice Is : "<<computer_choice;
        			cout<<endl<<endl<<endl;
           		}
           		
            while(player_choice != 1 && player_choice != 2 && player_choice != 3);
		
		
		    if(player_choice == 1 && computer_choice == 3)
     		{
		    	cout<<"Player Win."<<endl<<endl<<endl;
    			player_score++;
     		}
    		else if(player_choice == 2 && computer_choice == 1)
    		{
    			cout<<"Player Win."<<endl<<endl<<endl;
    			player_score++;
    		}
    		else if(player_choice == 3 && computer_choice == 2)
    		{
    			cout<<"Player Win."<<endl<<endl<<endl;
    			player_score++;
    		} 
    		else if(player_choice == computer_choice)
     		{
    			cout<<"Draw"<<endl<<endl<<endl;
    		} 
     		else
	    	{
	    		cout<<"Computer Win."<<endl<<endl<<endl;
     			computer_score++;
	        }
	        
	        cout<<"Press Any Key To Continue..."<<endl<<endl<<endl;
     	    getch();
	
            }
    
	    
        if(computer_score == player_score)
        {
            cout<<"Game Is Drawn"<<endl<<endl;
    	}
    	else if(player_score > computer_score)
    	{
	    	cout<<player_name<<" You Won The Game."<<endl<<endl;
    	}
    	else
    	{
 	    	cout<<"Computer Won The Game."<<endl<<endl;
      	}
		
	}
};

int main()
{
	GAME g1;
	g1.display();
    return 0;
}