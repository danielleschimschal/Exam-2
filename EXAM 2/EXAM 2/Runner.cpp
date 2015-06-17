//I affirm that all code given below was written solely by me, Danielle, and that any help I received adhered to the rules stated for this exam.
#include "Runner.h"
 

Runner::Runner(){
	firstname = "Tammy";
	lastname = "Zinc";
	pace = 436;
}
Runner::Runner(string newfirstname,  string newlastname, int newpace){
	firstname = newfirstname;
	lastname = newlastname;
	pace = newpace;
}

string Runner::getFirstName(){
	return firstname; 
}

string Runner::getLastName(){
	return lastname; 
}

int Runner::getPace(){
	return pace; 
}