#include<iostream>
using namespace std;

int main()
{
    double math, khmer, computer, average;
    string rank, name, ask_able;

    cout << "Hello! What is your name ?: "; cin >> name;
    cout << "Hello " << name << " Can I ask you some question ? "; cin >> ask_able;
    
    if (ask_able == "yes" or ask_able == "YES")
    {
    	cout << "\n\x1B[32mThanks for your kindness (><) \033[0m\n\n" << endl;
    	cout << "What is your math score ?: "; cin >> math;
	    cout << "What is your Khmer score ?: "; cin >> khmer;
	    cout << "What is your Computer Score ?: "; cin >> computer;
	    cout << "\nThank you! \n\nHere is your total score: " << math + khmer + computer << endl;
		cout << "\nDo you want to find your score average ?: "; cin >> ask_able;
		
		if (ask_able == "yes" or ask_able == "YES")
    	{
		    average = (math + khmer + computer ) / 3.0;
		    
		    if ( average >= 90)
		    	rank = "A";
		    else if( average >= 80 )
		    	rank = "B";
		    else if( average >= 70 )
		    	rank = "C";
		    else if( average >= 60 )
		    	rank = "D";
		    else if ( average >= 50 )
		    	rank = "E";
			else 
		    	rank = "F";
	
		    cout << "\n\nHere is your information" << endl;
		    cout << "\n\x1B[32mName: " << name << endl;
		    cout << "Total Score: " << math + khmer + computer << endl;
		    cout << "Rank: " << rank << endl;
		    cout << "Average: " << average << endl;
		    return 0;	
		}
		else 
		{
			cout << "Thank you! see you next time " << endl;	
		}
	}
	else
	{
		cout << "Thank you! see you next time " << endl;	
	}
	return 0;
}