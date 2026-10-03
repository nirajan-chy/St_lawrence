// Create a class Student with data members name and age. Create an object and display the student's information.


#include<iostream>
using namespace std ;

class Rectangle {
  public : 
  int length ;
  int breadth;

  void input (){
    cout << "Enter length";
    cin >> length;
    cout << "Enter breath ";
    cin >> breadth;
  }

  void AreaCalculate (){
   cout << "Area = " << length *breadth;
  }
  
};
int main (){
  Rectangle r1;
  r1.input();
  r1.AreaCalculate();

}

