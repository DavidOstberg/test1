#include <iostream>
#include <vector>
#include <set>

#define size 1024

using namespace std;

int main()  {
    
    int number;
    srand(time(0));
    set<int> sorted;

    for(int i = 0; i < size; i++)
    sorted.insert(rand() % size);

    for(int i: sorted)
    cout << i << endl;

    cout << "Enter a random number: ";
    cin >> number;

    auto lower = sorted.begin();
    auto upper = sorted.begin();

    for(int i = 1; i < 6; i++) {            // 5 Look ups
        lower = sorted.find(number-i);
        if (lower != sorted.end()) {break;}
    }

    cout << "Closest lower number: " << *lower << endl;


    for(int i = 1; i < 6; i++) {            // Plus 5 look ups < 12 in total
        upper = sorted.find(number+i);
        if (upper != sorted.end()) {break;}
    }

    cout << "Closest upper number: " << *upper << endl;
}