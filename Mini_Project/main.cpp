#include <iostream>
#include <string>

#include <Books.hpp>
#include <Shop.hpp>

#define size 50

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
        else if(input == 1) {cin.ignore(); books[x].addBook();}
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
            if(found != true){shop.printSearchFailed();}
        }
        else if(input == 3) {shop.getSearchOrEditInfo();
            found = false;
            for(int i = 0; i < size; i++)   {
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    cout << "Book found successfully!" << endl;
                    books[i].printBook();
                    break;
                }
            }
            if(found != true){shop.printSearchFailed();}
        }
        else if(input == 4) {shop.getSearchOrEditInfo();
            found = false;
            for(int i = 0; i < size; i++)   {
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    cout << "Book found successfully!" << endl;
                    books[i].addBook();
                    break;
                    }
                }
            if(found != true){shop.printSearchFailed();}
        }
        else if(input == 5) {break;}
        if(x < size) {PrintMenu();}
    }
    cout << "Closing bookstore for today, see you tomorrow!" << endl;    
    delete[] books;
}