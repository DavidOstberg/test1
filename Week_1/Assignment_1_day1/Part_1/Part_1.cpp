#include <iostream>

using namespace std;

#define size 5

int main () {
   
    int i, j, temp;
    int array[size];

    cout << "Enter " << size << " integer numbers: ";
    for(i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << endl << "You have choosen the following numbers: " << endl;
    for(i = 0; i<size; i++) {
        cout << array[i] << "\t";
    }

    cout << endl << endl;

    // Bubble sort algoritm
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(array[j] < array[i]) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            }
        }
    }

    cout <<"By using the bubble sort algoritm, we can sort from smallest to largest: " << endl;
    for(i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }

    cout << endl << endl;

    return 0;
}