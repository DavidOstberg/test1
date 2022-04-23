#ifndef SHOP_HPP
#define SHOP_HPP

#include <iostream>
#include <string>

using namespace std;

class Shop : public Books {

public:
    string requestedAuthor, requestedTitle;
    int requestedCopies;

    void getBuyInfo() {
        cout << "Enter Title of Book: ";
        cin.ignore();
        getline(cin, requestedTitle);
        cout << "Enter Author of Book: ";
        getline(cin, requestedAuthor);
        cout << "Enter Number of Books to Buy: ";
        cin >> requestedCopies;
        while(cin.fail()) {
        cout << "Error, try again!" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> requestedCopies;}
        cout << endl;
    }

    void getSearchOrEditInfo() {
        cin.ignore();
        cout << "Enter Title of Book: ";
        getline(cin, requestedTitle);
        cout << "Enter Author of Book: ";
        getline(cin, requestedAuthor);
        cout << endl;
    }

    void printSearchFailed()    {
        cout << requestedTitle << " by " << requestedAuthor << " not found in inventory." << endl << endl;
    }

};

#endif  //SHOP_HPP