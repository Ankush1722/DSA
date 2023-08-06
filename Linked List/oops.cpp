#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    int age;
};

int main()
{
    // CREATES OBJECTS STATICALLY
    student s1;
    s1.age = 20;
    s1.roll_no = 101;
    cout << "THE S1 AGE IS :" << s1.age << endl;
    cout << "THE S1 ROLL IS: " << s1.roll_no << endl;

    // CREATES OBJECT DYNAMICALLY
    student *s2 = new student;
    (*s2).age = 23;      // OR s2 -> age = 23;
    (*s2).roll_no = 102; // OR s2 -> roll_no = 102;
    cout << "THE S2 AGE IS: " << s2->age << endl;
    cout << "THE S2 ROLL IS: " << s2->roll_no << endl;
}