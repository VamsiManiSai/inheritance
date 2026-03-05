#pragma once
#include "person.h"
#include <string>
using namespace std;	

class teacher : public person
{
	private:
		string title;
		double salary;

	public:
		teacher(string firstname, string lastname, int age, string title, double salary);

		void set_title(string title);
		void set_salary(double salary);

		string get_title();
		double get_salary();

		void person_info() override;
};

