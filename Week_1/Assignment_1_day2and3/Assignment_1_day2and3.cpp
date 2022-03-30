#include <iostream>
#include <string.h>

using namespace std;

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new) {

    if(n_old == 0)  {
        cout << "Error!" << endl;
        return 0;
    }
    else {
        int i, j = 0;
        for( i = 0; i < n_old-1; i++)  {
            if(arr_old[i] != arr_old[i+1])  {
                arr_new[j] = arr_old[i];
                j++;
            } 
        }
    cout << "New Array: ";
    return j;
    }
}

int main()  {

    string string;
    cout << "Enter an sorted array of numbers: ";
    getline(cin, string);

    int str_length = string.length();

    int oldArray[str_length] = { 0 };

    int i, j = 0;

    for(i = 0; string[i] != '\0'; i++)  {
        if(string[i] == ' ')    {
            continue;
        }
        else{
            oldArray[j] = oldArray[j] * 10 + (string[i] - 48);
            j++;
        }
    }

    cout << "Old Array: ";
    for(int i = 0; i < j; i++ )   {
    cout << oldArray[i] << " ";
    }
    cout << endl;

    int old_size = sizeof(oldArray)/sizeof(oldArray[0]);

    int newArray[old_size];

    int *new_size = newArray;

    int size = removeDuplicates(oldArray, old_size, newArray, new_size);

    for(int i = 0; i < size; i++)   {
        cout << *new_size << " ";
        new_size++;
    }

    cout << endl;

}