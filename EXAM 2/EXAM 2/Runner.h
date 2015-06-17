//I affirm that all code given below was written solely by me, Danielle, and that any help I received adhered to the rules stated for this exam.
#ifndef RUNNER
#define RUNNER

#include <iostream>
#include <string>
#include <vector>
using namespace std; 

class Runner{
public:
	Runner();
	Runner(string newfirstname, string newlastname, int newpace); 
	Runner(vector<int> r);
	
	string getFirstName();
	string getLastName();
	int getPace();

private:
	string firstname;
	string lastname;
	int pace; 
};

#endif