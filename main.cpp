#include <iostream>
#include<random>
#include "rectangle.h"
#include "person.h"
#include "Item.h"
#include "teacher.h"
#include "studentinherit.h"
using namespace std;
int main()
{
    srand(time(NULL));
    person *pupil[10];
    int r;

    for (int i = 0; i < 10; i++) {
        r = rand() % 3;
        cout << r << endl;
        if (r == 0) {
            pupil[i] = new person(" person_name ", " person_surname ", rand() % 70);
        }
        else if (r == 1) {
            pupil[i] = new studentinherit(" student_name ", " student_surname ", rand()%70, " stuent_department ", rand() % 4 + 1);
        }
        else if (r == 2) {
            pupil[i] = new teacher(" teacher_name ", " teacher_surname ", rand()%70,  " teacher_department ", rand() % 70);
        }
    }

    for (person *p : pupil) {
        p -> person_info();
        cout << endl;
    }
    

}
