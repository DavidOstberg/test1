#ifndef BOOKS_HPP
#define BOOKS_HPP

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
        getline(cin, author);
        cout << "Enter Title Name: ";
        getline(cin, title);
        cout << "Enter Publisher Name: ";
        getline(cin, publisher);
        cout << "Enter Price: ";
        cin >> price;
        while(cin.fail()) {
        cout << "Error, try again!" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> price;}
        cout << "Enter Number of Copies: ";
        cin >> copies;
        while(cin.fail()) {
        cout << "Error, try again!" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> copies;}
        cout << endl;
    }

    void printBook()    {
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
        cout << copies << " copies available in store." << endl << endl;
    }

};

#endif  //BOOKS_HPP