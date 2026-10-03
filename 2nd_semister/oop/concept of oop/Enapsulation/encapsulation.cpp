// Encapsulation means wrapping data and functions together inside a class and controlling access to the data.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:

    void setBalance(int b)
    {
        balance = b;
    }

    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;

    b1.setBalance(5000);
    b1.display();

    return 0;
}