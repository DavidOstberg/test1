#include <iostream>
#include <bitset>
#include <set>

#define size 4

using namespace std;

int main()  {

    union Data {
        uint16_t d = 0;
    }data[5];

    int speed;
    int distance[size];

    set<int> speeds = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300};
    set<int> distances = {0, 150, 300, 450, 600, 750, 900, 1050};

    cout << "Enter one speed (km/h): ";
    cin >> speed;
    cout << endl << "Enter four distances (mm): ";
    for(int i = 0; i < size; i++)   {
        cin >> distance[i];
    }

    int speeed = *speeds.lower_bound(speed);
    int front = *distances.lower_bound(distance[0]);
    int rear = *distances.lower_bound(distance[1]);
    int right = *distances.lower_bound(distance[2]);
    int left = *distances.lower_bound(distance[3]);

    cout << endl;

switch (speeed)
{
case 0:
    data[0].d = 0 << 12;
    cout << bitset<16>(data[0].d) << endl;
case 20:
    data[0].d = 1 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 40:
    data[0].d = 2 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 60:
    data[0].d = 3 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 80:
    data[0].d = 4 << 12;
    cout << bitset<16>(data[0].d) << endl;
case 100:
    data[0].d = 5 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 120:
    data[0].d = 6 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 140:
    data[0].d = 7 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 160:
    data[0].d = 8 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 180:
    data[0].d = 9 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 200:
    data[0].d = 10 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 220:
    data[0].d = 11 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 240:
    data[0].d = 12 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 260:
    data[0].d = 13 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 280:
    data[0].d = 14 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;
case 300:
    data[0].d = 15 << 12;
    cout << bitset<16>(data[0].d) << endl;
    break;

default :
    cout << "Speed out of scope, abort!" << endl << endl;
    break;
}

switch (front)
{
case 0:
    data[1].d = 0 << 9;
    cout << bitset<16>(data[1].d) << endl;
case 150:
    data[1].d = 1 << 9;
    cout << bitset<16>(data[1].d) << endl;
    break;
case 300:
    data[1].d = 2 << 9;
    cout << bitset<16>(data[1].d) << endl;
    break;
case 450:
    data[1].d = 3 << 9;
    cout << bitset<16>(data[1].d) << endl;
    break;
case 600:
    data[1].d = 4 << 9;
    cout << bitset<16>(data[1].d) << endl;
case 750:
    data[1].d = 5 << 9;
    cout << bitset<16>(data[1].d) << endl;
    break;
case 900:
    data[1].d = 6 << 9;
    cout << bitset<16>(data[1].d) << endl;
    break;
case 1050:
    data[1].d = 7 << 9;
    cout << bitset<16>(data[1].d) << endl;
    break;

default :
    cout << "Distance out of scope, abort!" << endl << endl;
    break;
}

switch (rear)
{
case 0:
    data[2].d = 0 << 6;
    cout << bitset<16>(data[2].d) << endl;
case 150:
    data[2].d = 1 << 6;
    cout << bitset<16>(data[2].d) << endl;
    break;
case 300:
    data[2].d = 2 << 6;
    cout << bitset<16>(data[2].d) << endl;
    break;
case 450:
    data[2].d = 3 << 6;
    cout << bitset<16>(data[2].d) << endl;
    break;
case 600:
    data[2].d = 4 << 6;
    cout << bitset<16>(data[2].d) << endl;
case 750:
    data[2].d = 5 << 6;
    cout << bitset<16>(data[2].d) << endl;
    break;
case 900:
    data[2].d = 6 << 6;
    cout << bitset<16>(data[2].d) << endl;
    break;
case 1050:
    data[2].d = 7 << 6;
    cout << bitset<16>(data[2].d) << endl;
    break;

default :
    cout << "Distance out of scope, abort!" << endl << endl;
    break;
}

switch (right)
{
case 0:
    data[3].d = 0 << 3;
    cout << bitset<16>(data[3].d) << endl;
case 150:
    data[3].d = 1 << 3;
    cout << bitset<16>(data[3].d) << endl;
    break;
case 300:
    data[3].d = 2 << 3;
    cout << bitset<16>(data[3].d) << endl;
    break;
case 450:
    data[3].d = 3 << 3;
    cout << bitset<16>(data[3].d) << endl;
    break;
case 600:
    data[3].d = 4 << 3;
    cout << bitset<16>(data[3].d) << endl;
case 750:
    data[3].d = 5 << 3;
    cout << bitset<16>(data[3].d) << endl;
    break;
case 900:
    data[3].d = 6 << 3;
    cout << bitset<16>(data[3].d) << endl;
    break;
case 1050:
    data[3].d = 7 << 3;
    cout << bitset<16>(data[3].d) << endl;
    break;

default :
    cout << "Distance out of scope, abort!" << endl << endl;
    break;
}

switch (left)
{
case 0:
    data[4].d = 0;
    cout << bitset<16>(data[4].d) << endl;
case 150:
    data[4].d = 1;
    cout << bitset<16>(data[4].d) << endl;
    break;
case 300:
    data[4].d = 2;
    cout << bitset<16>(data[4].d) << endl;
    break;
case 450:
    data[4].d = 3;
    cout << bitset<16>(data[4].d) << endl;
    break;
case 600:
    data[4].d = 4;
    cout << bitset<16>(data[4].d) << endl;
case 750:
    data[4].d = 5;
    cout << bitset<16>(data[4].d) << endl;
    break;
case 900:
    data[4].d = 6;
    cout << bitset<16>(data[4].d) << endl;
    break;
case 1050:
    data[4].d = 7;
    cout << bitset<16>(data[4].d) << endl;
    break;

default :
    cout << "Distance out of scope, abort!" << endl << endl;
    break;
}

cout << endl << bitset<16>(data[0].d + data[1].d + data[2].d + data[3].d +data[4].d) << endl << endl;

}