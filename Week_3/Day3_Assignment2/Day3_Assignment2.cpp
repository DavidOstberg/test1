#include <iostream>
#include <vector>
#include <map>

#define size 9999

using namespace std;

int main()  {
    
    srand(time(0));
    vector<int> vec = {(rand() % 33)};

    for(int i = 0; i < size; i++)   {
    vec.emplace(vec.end(), (rand() % 33));}

    map<int, int> frequency;
    for(int i: vec)
        ++frequency[i];
    for(const auto& e: frequency)
        cout << "Element " << e.first << " encountered " << e.second << " times\n";

}