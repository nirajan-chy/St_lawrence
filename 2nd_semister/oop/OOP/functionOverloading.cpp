#include<iostream>
using namespace std;
class Calculator {
  public:
  // function with 2 interger parameter 
  int add(int a , int b){
    return a + b;
  }
// function with 3 integer parameter 
int add(int a , int b , int c){
  return a + b + c;
}

// function with 2 double parameter 
double add(double a , double b){
  return a + b;

}
};

int main(){
  Calculator c;
  cout << c.add(2,3) << endl;  
  cout << c.add(2 , 3,4 ) << endl;
  cout << c.add(2.5 , 2.5) << endl;
}

