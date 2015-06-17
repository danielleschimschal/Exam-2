//I affirm that all code given below was written solely by me, Danielle, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Runner.h"
using namespace std;

int main(){

	ifstream raceList;
	ofstream color, color1, color2, color3, color4, color5, color6;
	string first_name;
	string last_name;
	int pace;
	int i = 1;
	vector<Runner> v;
	void sort(vector <Runner> v, int n);


	raceList.open("C:\\Users\\dschi_000\\Desktop\\registrants.txt");	/// Access file on my computer, unsure how to make it accessible on other computers

	if (raceList.fail()){
		cout << "File does not exist" << endl; /// couts that file does not exist if file can't be found
	}


	color.open("C:\\Users\\dschi_000\\Desktop\\white.txt");		/// creates documents to write to
	color1.open("C:\\Users\\dschi_000\\Desktop\\yellow.txt");
	color2.open("C:\\Users\\dschi_000\\Desktop\\green.txt");
	color3.open("C:\\Users\\dschi_000\\Desktop\\orange.txt");
	color4.open("C:\\Users\\dschi_000\\Desktop\\blue.txt");
	color5.open("C:\\Users\\dschi_000\\Desktop\\lilac.txt");
	color6.open("C:\\Users\\dschi_000\\Desktop\\red.txt");

	

	while (!raceList.eof()){

		raceList >> first_name >> last_name >> pace;
		Runner runner1(first_name, last_name, pace);		// creates runner
		v.push_back(runner1);		// adds runner to vector
	}
	
		sort(v, 1001);
			
		/// sorts into different text files based on pace... not sorted in order by pace because i couldn't make the function work
		/// hopefully i was on the right track with my sort function, i just couldn't figure out how to actually make it work
		
		for (int i = 0; i < 1001; i++){
			if (v[i].getPace() >= 0 && v[i].getPace() <= 360){
				color << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}

			else if (v[i].getPace() > 360 && v[i].getPace() <= 420){
				color1 << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}

			else if (v[i].getPace() > 420 && v[i].getPace() <= 480){
				color2 << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}

			else if (v[i].getPace() > 480 && v[i].getPace() <= 540){
				color3 << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}
			else if (v[i].getPace() > 540 && v[i].getPace() <= 600){
				color4 << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}

			else if (v[i].getPace() > 600 && v[i].getPace() <= 720){
				color5 << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}

			else if (v[i].getPace() > 720 && v[i].getPace() <= 1200){
				color6 << v[i].getFirstName() << " " << v[i].getLastName() << " " << v[i].getPace() << endl;
			}
		}
		}
	



void sort(vector <Runner> g , int n){			// this sorts the list by pace by I can't figure out how to get the first and last names to stay with the pace.
												// i think i need to use the getline function somehow but I can't figure it out.					
	bool changed = true;
	int j = 0;
	Runner temp;
	while(changed)	{
		changed = false;
		j++; 
		for (int i = 0; i < n - 1; i++){
			if (g[i].getPace() > g[i + 1].getPace())
			{
				temp = g[i];
				g[i] = g[i + 1];
				g[i+1] = temp;
				changed = true;

		}
		}
		
	} while (changed);
	
	for (int i = 0; i < 1000; i++){
		cout << g[i].getFirstName() << " " << g[i].getLastName() << " " << g[i].getPace() << endl;
	}
	

}