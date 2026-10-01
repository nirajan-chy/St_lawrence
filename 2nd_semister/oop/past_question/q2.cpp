// Create a class STUDENT with data members name and marks. Write a member function that will take two objects of the STUDENT class and return the object having higher marks.

#include<iostream>
using namespace std;

class STUDENT{
  private :
  string name ;
  int marks ;

  public :
  // function to input the details of students 
  void input(){
    cout << "Enter the name of student:";
    cin >> name ;

    cout << "Enter the marks of student :";
    cin >> marks;
  
  }
   
  // finding the students who take higher marks 
  STUDENT higherMarks(STUDENT s1 , STUDENT s2){
    if(s1.marks > s2.marks)
    return s1 ;
    else 
    return s2;
  }

  void display(){
    cout  << "Student Name : " << name << endl;
    cout << "Student Marks :" << marks << endl;
  }
};

int main(){
  STUDENT s1 , s2 , result ;
  cout << "Enter the details of Student 1 : "<< endl;
  s1.input();
  cout << "Enter the details of student 2 :" << endl;
  s2.input();

  result = s1.higherMarks(s1, s2);
  cout << "\n Student with higher marks :" <<endl;
  result.display();
  return 0;


}

