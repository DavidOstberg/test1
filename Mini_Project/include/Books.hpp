#include <iostream>
#include <string>

using namespace std;

class Books {   

public:
    string author, title, publisher;
    int copies;
    float price;

    void addBook() {
        cout << "Enter Author Name: ";
        cin.ignore();
        getline(cin, author);
        cout << "Enter Title Name: ";
        getline(cin, title);
        cout << "Enter Publisher Name: ";
        getline(cin, publisher);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Copies: ";
        cin >> copies;
        cout << endl;
    }

};