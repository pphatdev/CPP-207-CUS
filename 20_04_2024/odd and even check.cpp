#include<iostream>
using namespace std;

int main() { 

	int number;
	cout << "Enter an Intager and I will tell you if it \n";
	cout << "is odd or even: ";
	cin >> number;
	
	if (number % 2==0)
		cout << " is even.";
	else 
		cout << " is odd.";
		
	return 0;
}