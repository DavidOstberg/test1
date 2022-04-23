#include <iostream>
#include <string>

#include <Books.hpp>
#include <Shop.hpp>

#define size 50

using namespace std;

void PrintMenu();
int ReadMenuInput();

int main()  {

    //declaration and initialization
    Books* books = new Books[size];
    Shop shop;
    int input;
    bool found = false;

    PrintMenu();

    //main loop
    for(int x = 0; x <= size; x++)   {
        input = ReadMenuInput();

        //If input not 1-5, try again
        if((input < 1) || (input > 5))
        {cout << input << " is not an option, try again!"<<endl<<endl;}

        //If input 1, add book
        else if(input == 1) {cin.ignore(); books[x].addBook();}

        //If input 2, search and perform purchase
        else if(input == 2) {shop.getBuyInfo();
            int i;
            for(i = 0; i < size; i++)   {
                found = false;
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    shop.printBookFound();
                    if(shop.requestedCopies <= books[i].copies) {
                        books[i].copies -= shop.requestedCopies;
                        shop.printPurchaseOK();
                        cout << "Total cost: " << books[i].price * shop.requestedCopies << endl;
                        cout << books[i].copies << " copies left in the store." << endl << endl;
                        break;
                    }
                    else {cout << "But only " << books[i].copies << " copies available, try again with less amount!" << endl << endl;
                    found = true; break;}
                }
            }
            if(found != true){shop.printSearchFailed();}
        }
        
        //If input 3, search book and display it
        else if(input == 3) {shop.getSearchInput();
            found = false;
            for(int i = 0; i < size; i++)   {
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    shop.printBookFound();
                    books[i].printBook();
                    break;
                }
            }
            if(found != true){shop.printSearchFailed();}
        }
        
        //If input 4, search book and edit it
        else if(input == 4) {shop.getSearchInput();
            found = false;
            for(int i = 0; i < size; i++)   {
                if(shop.requestedTitle == books[i].title && shop.requestedAuthor == books[i].author)   {
                    found = true;
                    shop.printBookFound();
                    books[i].addBook();
                    break;
                }
            }
            if(found != true){shop.printSearchFailed();}
        }

        //If input 5, end program
        else if(input == 5) {break;}
        
        //Print menu if not end of program
        if(x < size) {PrintMenu();}
    }
    
    //Closing shop and clearing dynamic memory
    shop.printShopClosing();   
    delete[] books;
}