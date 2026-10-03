// Members declared as private cannot be directly accessed from outside the class.

#include<iostream>
using namespace std;

class Student{
  private :
  string name ;

  public:
  void setName (string name ){
    this->name = name ;
  }

  void display(){
    cout << "Name:" << name << endl;

  }
};

int main (){
  Student s1 ;
  
   // we cannot do like this 

  // s1.name = "Bunny";
  // s1.display();

  s1.setName("BUNNY");
  s1.display();
  return 0;
}