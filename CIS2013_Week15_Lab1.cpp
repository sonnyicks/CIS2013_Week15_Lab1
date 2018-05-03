#include <iostream>
#include <string>
#include "Animal.h"


using namespace std;

int main(){
	string spec;
	int legs;
	char alive;
	bool is_alive;

	Animal cat;
	
	cout << "You are making some animals..." << endl;
	cout << "What species of animal do you want to make first? ";
	cin >> spec;
	
	cout << "How many legs does your animal have? ";
	cin >> legs;
	
	cout << "Is it alive? ";
	cin >> alive;
	
	if(alive=='y' || alive=='Y'){
		is_alive=true;
	} else if(alive=='n' || alive=='N'){
		is_alive=false;
	} else {
		cout << "That was not an option..." << endl;
	}

	
	Animal users(legs, is_alive, spec);
	cout << "Also, I am going to make you a cat" << endl;
	cat.describe();
	
	
	return 0;
}