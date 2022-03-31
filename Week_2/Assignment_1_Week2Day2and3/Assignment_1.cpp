#include <iostream>

using namespace std;

class Shape {
protected:
    float width, height;

public:
    void setValues(float a, float b)
    {width = a, height = b;}
    
    virtual float getArea()
    {return width * height;}
    
    void print() {cout << "Area = " << getArea() << endl; }

    bool operator==(Shape& b) {
    if(this->getArea() == b.getArea()) {return true;}
    else {return false;}
    }

    bool operator>(const Shape& b) {
    if(this->width == b.width) {return true;}
    else {return false;}
    }

    bool operator<(const Shape& b) {
    if(this->height == b.height) {return true;}
    else {return false;}
    }

};

class Circle : public Shape {
public:
    float getArea() {return width * height * 3/4;}   // PI = 3
};                              // radius = width/2 = height/2

class Triangle : public Shape {
public:
    float getArea() {return width * height / 2;}
};

class Rectangle : public Shape {};

class Square : public Shape {};

int main()  {

    // Create objects
    Circle circle;
    Triangle triangle;
    Rectangle rectangle;
    Square square;

    //Set values
    circle.setValues(3,3); //input a = input b since radius
    triangle.setValues(9,2);
    rectangle.setValues(3,3);
    square.setValues(3,3); //input a = input b since square

    //Print calculated areas
    cout << "Circle ";
    circle.print();
    cout << "Triangle ";
    triangle.print();
    cout << "Rectangle ";
    rectangle.print();
    cout << "Square ";
    square.print();
    cout << endl;

    //Compare object area and parameters
    if(circle == triangle) {
        cout << "Circle & Triangle have the same area," << endl;
        if(circle > triangle)  {
            if(circle < triangle)  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

    if(circle == rectangle) {
        cout << "Circle & Rectangle have the same area, " << endl;
        if(circle > rectangle)  {
            if(circle < rectangle)  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }
    if(circle == square) {
        cout << "Circle & Triangle have the same area," << endl;
        if(circle > square)  {
            if(circle < square)  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }
    if(triangle == rectangle) {
        cout << "Triangle & Rectangle have the same area," << endl;
        if(triangle > rectangle)  {
            if(triangle < rectangle)  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }
    if(triangle == square) {
        cout << "Triangle & Square have the same area," << endl;
        if(triangle > square)  {
            if(triangle < square)  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }
    if(square == rectangle) {
        cout << "Square & Rectangle have the same area," << endl;
        if(square > rectangle)  {
            if(square < rectangle)  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }
}