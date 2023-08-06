#include <iostream>
using namespace std;
class student
{
public:
    int roll;

private:
    int age;

public:
    void display()
    {
        cout << age << " " << roll << endl;
    }
    int setage(int a)
    {
        age = a;
        return age;
    }
    int getage()
    {
        return age;
    }
};
int main()
{
    student s1;
    cout << "Any random values in age and roll " << endl;
    s1.display();
    s1.roll = 101;
    // s1.age=329; it gives error because age is private.
    s1.setage(10);
    s1.getage();
    cout << "THE S1 AGE IS: " << s1.getage() << " AND ROLL IS: " << s1.roll << endl;

    student *s2 = new student;
    cout << "\nAny random values in age and roll " << endl;
    s2->display();
    s2->roll = 102;
    //  s2->age = 123; it gives an error because age is private.
    s2->setage(20);
    s2->getage();
    cout << "THE S2 AGE IS: " << s2->getage() << " AND ROLL IS: " << s2->roll << endl;
}