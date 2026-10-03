// Members declared as public can be accessed from outside the class using an object.


//. Example

#include <iostream>
using namespace std ;
 class Student {
  public :
  string name ;

  void display(){
    cout << "Name :" << name << endl;

  }
 };

 int main(){
  Student s1 ;
  s1.name = "Nirajan";
  s1.display(); // Nirajan
 }