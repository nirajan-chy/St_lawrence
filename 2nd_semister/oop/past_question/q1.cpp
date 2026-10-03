// Create a class BOOK with data members name and price. Write a member function that will take two objects of BOOK class and return the object with lower price.


#include<iostream>
using namespace std ;
 class BOOK{
  private :
  string name ;
  float price ;

  public :
  // Function to input book details .
  void input(){
    cout << "Enter book name :";
    cin >> name ;

    cout << "Enter book price :";
    cin >> price ;

  }
  // Member function to find the book with lower price 
  BOOK lowerPrice(BOOK b1 , BOOK b2){
    if (b1.price < b2.price )
    return b1 ;
    else 
    return b2 ;
  }

  //function to display book details 
  void display (){
    cout << "Book Name : " << name << endl;
    cout << "Book Price : " << price << endl;
  }
 };

 int main (){
  BOOK b1 , b2 , result ;
  cout << "Enter details of Book 1 : " << endl;
  b1.input();

  cout << "Enter details of Book 2 : " << endl;
  b2.input();
  

  result = b1.lowerPrice(b1, b2);
  cout << "\n Book with lower price :" << endl;
  result.display();
  return 0;
 }