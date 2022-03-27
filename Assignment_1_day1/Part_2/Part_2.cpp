#include <iostream>

using namespace std;

#define size 5

void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[], int n)    { 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++)   { 

        // Find the minimum element in unsorted array 
        min_idx = i;
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
        } 
    }

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

    selectionSort(array, size);

    cout <<"By using the selection sort algoritm, we can sort from smallest to largest: " << endl;
    for(i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }

    cout << endl << endl;

}