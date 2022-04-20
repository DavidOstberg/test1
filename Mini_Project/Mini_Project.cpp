#include <iostream>
#include <string>

#include <Books.hpp>
#include <Shop.hpp>

#define size 30

using namespace std;

void PrintMenu();
int ReadMenuInput();

int main()  {

    Books* books = new Books[size];
    Shop shop;
    int input;
    bool found = false;
    PrintMenu();
    for(int x = 0; x <= size; x++)   {
        input = ReadMenuInput();
        if((input < 1) || (input > 5))
        {cout << input << " is not an option, try again!"<<endl<<endl;}
        else if(input == 1) {books[x].addBook();}
        else if(input == 2) {shop.getBuyInfo();
                int i;
                for(i = 0; i < size; i++)   {
                    found = false;
                    if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                        cout << "Book found successfully!" << endl;
                        found = true;
                        if(shop.requestedCopies <= books[i].copies){
                            books[i].copies -= shop.requestedCopies;
                            cout << "Book(s) bought successfully!" << endl;
                            cout << "Total cost: " << books[i].price * shop.requestedCopies << endl;
                            cout << books[i].copies << " copies left in the store." << endl << endl;
                            break;
                        }
                    else {cout << "But only " << books->copies << " copies available, try again with less amount!" << endl << endl;
                    found = true; break;}
                }
            }
            if(found != true){
            cout << shop.requestedTitle << " not found in inventory." << endl << endl;}
        }
        else if(input == 3) {shop.getSearchOrEditInfo();
            found = false;
            for(int i = 0; i < size; i++)   {
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    cout << "Book found successfully!" << endl;
                    cout << "Author: " << books[i].author << endl;
                    cout << "Title: " << books[i].title << endl;
                    cout << "Publisher: " << books[i].publisher << endl;
                    cout << "Price: " << books[i].price << endl;
                    cout << books[i].copies << " copies available in store." << endl << endl;
                    break;
                }
            }
            if(found != true){
            cout << shop.requestedTitle << " not found in inventory." << endl << endl;}
        }
        else if(input == 4) {shop.getSearchOrEditInfo();
            found = false;
            for(int i = 0; i < size; i++)   {
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    cout << "Book found successfully!" << endl;
                    cout << "Enter Author Name: ";
                    cin >> books[i].author;
                    cout << "Enter Title Name: ";
                    cin >> books[i].title;
                    cout << "Enter Publisher Name: ";
                    cin >> books[i].publisher;
                    cout << "Enter Price: ";
                    cin >> books[i].price;
                    cout << "Enter Copies: ";
                    cin >> books[i].copies;
                    cout << endl << endl;
                    break;
                    }
                }
            if(found != true){
            cout << shop.requestedTitle << " not found in inventory." << endl << endl;}
        }
        else if(input == 5) {break;}
        if(x < size) {PrintMenu();}
    }
    cout << "Closing bookstore for today, see you tomorrow!" << endl;    
    delete[] books;
}