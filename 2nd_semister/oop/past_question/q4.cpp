#include <iostream>
#include <cstring>
using namespace std;

class books
{
    char *author;
    char *title;
    char *publisher;
    float price;
    int stock;

public:

    // Default constructor
    books()
    {
        author = new char[50];
        title = new char[50];
        publisher = new char[50];

        price = 0;
        stock = 0;
    }

    // Function to input book details
    void getData()
    {
        cout << "Enter author: ";
        cin.getline(author, 50);

        cout << "Enter title: ";
        cin.getline(title, 50);

        cout << "Enter publisher: ";
        cin.getline(publisher, 50);

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter stock: ";
        cin >> stock;

        cin.ignore();
    }

    // Function to search book
    bool search(char searchTitle[], char searchAuthor[])
    {
        if (strcmp(title, searchTitle) == 0 &&
            strcmp(author, searchAuthor) == 0)
        {
            return true;
        }

        return false;
    }

    // Function to display book details
    void display()
    {
        cout << "\nBook Details\n";
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
        cout << "Stock: " << stock << endl;
    }

    // Function to sell books
    void sellBook(int copies)
    {
        if (copies <= stock)
        {
            float total = price * copies;

            cout << "Total Cost: " << total << endl;

            stock = stock - copies;
        }
        else
        {
            cout << "Required copies not in stock" << endl;
        }
    }

    // Destructor
    ~books()
    {
        delete[] author;
        delete[] title;
        delete[] publisher;
    }
};

int main()
{
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    books *b = new books[n];

    // Input book information
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of book " << i + 1 << endl;
        b[i].getData();
    }

    char searchTitle[50];
    char searchAuthor[50];

    cout << "\nEnter title of book to search: ";
    cin.getline(searchTitle, 50);

    cout << "Enter author of book to search: ";
    cin.getline(searchAuthor, 50);

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (b[i].search(searchTitle, searchAuthor))
        {
            found = true;

            b[i].display();

            int copies;

            cout << "\nEnter number of copies required: ";
            cin >> copies;

            b[i].sellBook(copies);

            break;
        }
    }

    if (!found)
    {
        cout << "Not found" << endl;
    }

    delete[] b;

    return 0;
}