#include<iostream>
#include<iomanip>

using namespace std;

int main () {
	
	double math, eng, computer, total, average;
	
	cout 
		<< "Enter the scores of math, English, Computer:";
	cin
		>> math
		>> eng
		>> computer;
	
	total = math + eng + computer;
	
	cout
		<< "Your total score is: "
		<< total
		<< endl;

	average = total / 3.0;
	
	cout
        << fixed
        << showpoint
        << setprecision(1);
	
	cout 
		<< "Your score average is: "
		<< average
		<< endl;
		
	if ( average > 50)
		cout
			<< "Past"
			<< endl;
	else
		cout 
			<< "Fail"
			<< endl;
	
	return 0;
}