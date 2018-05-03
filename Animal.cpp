#include <string>
#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(int legs, bool alive, string spec){
	number_of_legs = legs;
	is_alive = alive;
	species = spec;
}

Animal::Animal(){
	set_legs(4);
	set_alive(true);
	set_species("Cats");
}

Animal::~Animal(){
	//leaving empty;
}

void Animal::set_legs(int legs){
	number_of_legs=legs;
}
int Animal::get_legs(){
	return number_of_legs;
}
void Animal::set_alive(bool alive){
	is_alive=alive;
}
bool Animal::get_alive(){
	return is_alive;
}
void Animal::set_species(string spec){
	species=spec;
}
string Animal::get_species(){
	return species;
}

string Animal::describe(){
	return species << " with " << number_of_legs << " legs";
}




