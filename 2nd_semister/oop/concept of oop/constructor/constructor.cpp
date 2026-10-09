// A constructor is a special member function of a class that is automatically called when an object is created......

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:

    Student()
    {
        name = "Bunny";
        age = 20;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
} 