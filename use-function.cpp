#include<iostream>
using namespace std;

string getName()
{
    string name;

    cout << "What is your name? " << endl;
    cin >> name;

    return name;
}


int main()
{
    getName();
    return 0;
}