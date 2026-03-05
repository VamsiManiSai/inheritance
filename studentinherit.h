#pragma once
#include <string>
using namespace std;

class student
{
	private:
		string name;
		string course;
		int score;
		char lettergrade;
	public:
		void set_name(string name);

		void set_course(string course);

		void set_score(int score);

		void set_lettergrade(char letter_grade);

		string get_name();

		string get_course();

		int get_score();

		char get_lettergrade();

	public:
		void display();

		void curve_grade();
};

