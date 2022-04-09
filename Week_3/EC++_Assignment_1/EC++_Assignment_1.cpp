#include <iostream>
#include <bitset>

using namespace std;

int main()  {
    uint16_t data = 0b1011101001011011;

    uint16_t seat_belts_mask = 0b1111100000000000;
    uint16_t windows_mask = 0b0000011110000000;
    uint16_t doors_mask = 0b0000000001111000;
    uint16_t lights_mask = 0b0000000000000111;

    cout << "Seat Belt status: " << bitset<16>(data & seat_belts_mask) << endl;
    cout << "Window status: " << bitset<16>(data & windows_mask) << endl;
    cout << "Door status: " << bitset<16>(data & doors_mask) << endl;
    cout << "Light status: " << bitset<16>(data & lights_mask) << endl;


}