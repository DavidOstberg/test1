#include <iostream>
#include <string.h>

#define num 2

using namespace std;

class Service {

    public:
    int records;
    string date;
    string services[num];
    string parts[num];
    string payment;
    int amount;

    ~Service()  {
        cout << endl << "Freed memory from stack: " << endl
        << "Date: " << date << endl
        << "Services: " << services[1] << " " << services[2] << endl
        << "Parts: " << parts[1] << " " << parts[2] << endl
        << "Payment: " << payment << endl
        << "Amount: " << amount << endl;
    }

    void getData()    {
        cout << "Enter date: ";
        cin >> date;
 
        cout << "Enter performed services: ";
        for(int i = 0; i < num; i++)  {
            cin >> services[i];
        }

        cout << "Enter changed parts: ";
        for(int i = 0; i < num; i++)   {
            cin >> parts[i];
        }

        cout << "Choose payment - Cash, Card or Paypal: ";
        cin >> payment;

        cout << "Choose amount: ";
        cin >> amount;
    }

    void display()  {
        cout << endl << "Date: " << date << endl;
        cout << "Services: ";
        for(int i = 0; i < num; i++)  {
            cout << services[i] << " ";
        }
        cout << endl << "Parts: ";
        for(int i = 0; i < num; i++)  {
            cout << parts[i] << " ";
        }
        cout << endl << "Payment: " << payment << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main()  {

    int records;
    cout << "Enter number of records: ";
    cin >> records;
    Service* array = new Service[records];

    for(int i = 0; i < records; i++)    {
    array[i].getData();
    }
    for(int i = 0; i < records; i++)    {
    array[i].display();
    }

    Service triggerDestructorFor;
    triggerDestructorFor.date = 1;
    triggerDestructorFor.payment = 1;
    triggerDestructorFor.amount = 1;

    for(int i = 0; i < records; i++)    {
    triggerDestructorFor.services[i] = 1;
    triggerDestructorFor.parts[i] = 1;
    }
}