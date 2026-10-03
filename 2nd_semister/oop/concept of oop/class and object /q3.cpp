// Create a class Employee with name and salary. Input and display the employee's information.

#include<iostream>
using namespace std ;

class Employee {
  public : 
  string name ;
  int salary ;

  void display(){
    cout << "Name : " << name << endl;
    cout << "Salary :" << salary << endl;

  }
};
 
int main(){
  Employee e1;
  e1.name = "Bunny";
  e1.salary = 10000 ;

  e1.display();
  return 0;
}