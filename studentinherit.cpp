#include "studentinherit.h"
#include <iostream>
#include <string>
using namespace std;

studentinherit ::studentinherit(string firstname, string lastname, int age, string department, double gpa) {
	/*person(firstname, lastname, age) {*/
	this->set_age(age);
	this->set_firstname(firstname);
	this->set_lastname(lastname);
	this->department = department;
	this->gpa = gpa;
}

void studentinherit :: set_department(string department) {
	this->department = department;
}
void studentinherit :: set_gpa(double gpa) {
	this->gpa = gpa;
}
string studentinherit :: get_department() {
	return this->department;
}
double studentinherit :: get_gpa() {
	return this->gpa;
}

void studentinherit :: person_info() {
	
	cout << "  name : " << first_name + " " + last_name << endl;
	cout << "  age  : " << age << endl;
	cout << "  department : " << this->department << endl;
	cout << "  gpa  : " << this->gpa << endl;
}
