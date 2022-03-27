#include <iostream>

using namespace std;

unsigned long int lowerValue;
unsigned long int upperValue;


int main()  {

    // declarations and initialziations
    unsigned char array[] = {0xFF, 0xFF};
    int m, n = sizeof(array)/sizeof(array[0]);

    //input values 
    cout << "Enter two positive integers between 0 and 255: ";
    cin >> lowerValue >> upperValue;
    cout << "You have entered " << lowerValue << " and " << upperValue << endl;

    //if lowVal is greater or equal to uppVal
    if ( lowerValue >= upperValue)   {
        for (int x = 0; x < n; x++)  {
            cout << array[x];
        }
        cout << endl;
    }
    //printing all numbers between lowVal and UppVal
    else    {
        m = upperValue - lowerValue -1;
        int array1[m];
        cout << "And therefore choosen the numbers: ";
        for (int z = lowerValue + 1; z < upperValue; z++)   {
            array1[z - lowerValue - 1] = z;
            cout << z << " ";
        }
    
    cout << endl;

        //sorting from highest to lowest
        int temp;
        for(int i = 0; i < m; ++i)  {
            for(int j = 0; j < m ; ++j) {
                if(array1[j] < array1[j+1]) {
                temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;
                }
            }
        }
        cout << "Output: ";
        for(int i = 0; i < m; i++) {
            cout << array1[i] << " ";
    }
    
    cout << ", Output array size: " << m << endl;

    cout << endl;
}
}