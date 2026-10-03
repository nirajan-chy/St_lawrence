// Create a class Student with data members name and age. Create an object and display the student's information.

#include<iostream>
#include<string>
using namespace std;
class Student {
  public :
  string name;
  int age ;

  void display(){
    cout << "Name : "<< name << endl;
    cout << "Age :" << age << endl;

  }

};
int main(){
  Student s1;
  s1.name = "Nirajan ";
  s1.age = 19;
  s1.display();
  return 0;
}