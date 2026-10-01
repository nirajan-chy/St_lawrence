// What is aggregation? Write a program for implementing following:

// Create a class author with attributes name and qualification. Also create a class publication with pname. From these classes derive a classes derive a class book having attributes title and price. Each of the three classes should have getdata() method to get their data from user. The classes should have putdata() method to display the data. Create instance of the class book in main.

// inheritence concept 

#include <iostream>
using namespace std ;

class Author {
  protected : 
  string name ;
  string qualification;

  public : 
  void getdata(){
    cout << "Enter author name : ";
    cin >> name ;

    cout << "Enter qualification :";
    cin >> qualification;
  }
  void putdata (){
    cout << "Author Name : " << name << endl;
    cout << "Qualification :" << qualification << endl;

  }
};

class Publication {
  protected :
  string pname ;

  public : 
  void getdata(){
    cout << "Enter publication name :";
    cin >> pname ;
  }
  void putdata(){
    cout << "Publication name : " << pname << endl;
  }
};

class Book : public Author , public Publication {
  private :
  string title ;
  float price ;

  public :
  void getdata (){
    Author::getdata();
    Publication::getdata();

    cout << "Enter book title :";
    cin >> title ;

    cout << "Enter price : ";
    cin >> price ;
  }
  void putdata(){
    Author::putdata();
    Publication::putdata();

    cout << "Book Title :" << title << endl;
    cout << "Price :" << price << endl;
  }
};

int main (){
  Book b;
  b.getdata();
  cout << "\n Book details : \n";
  b.putdata();
  return 0;
}