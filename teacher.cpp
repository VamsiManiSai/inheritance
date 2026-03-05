#include "teacher.h"
#include <iostream>
#include <string>
using namespace std;

teacher :: teacher(string firstname, string lastname, int age, string title, double salary) :
	person(firstname, lastname, age){
	this->title = title;
	this->salary = salary;
}

void teacher::set_title(string title) {
	this->title = title;
}
void teacher::set_salary(double salary) {
	this->salary = salary;
}

string teacher::get_title() {
	return this->title;
}
double teacher::get_salary() {
	return this->salary;
}

void teacher::person_info() {

	cout << "  name : " << first_name + " " + last_name << endl;
	cout << "  age  : " << age << endl;
	cout << "  title : " << this->title << endl;
	cout << "  salary  : " << this->salary << endl;
}
