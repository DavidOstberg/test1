#include <iostream>

using namespace std;

template <typename T1, typename T2>
bool isAreaEqual(T1 &a, T2 &b) {
    return a.getArea() == b.getArea() ? true : false;
}

template <typename T1, typename T2>
bool isWidthEqual(T1 &a, T2 &b) {
    return a.width == b.width ? true : false;
}

template <typename T1, typename T2>
bool isHeightEqual(T1 &a, T2 &b) {
    return a.height == b.height ? true : false;
}

class Shape {

public:
    float width, height;

    void setValues(float a, float b)
    {width = a, height = b;}
    
    virtual float getArea()
    {return width * height;}
    
    void print() {cout << "Area = " << getArea() << endl; }

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
    if(isAreaEqual<Circle,Triangle>(circle, triangle)) {
        cout << "Circle & Triangle have the same area," << endl;
        if(isWidthEqual<Circle,Triangle>(circle, triangle))  {
            if(isHeightEqual<Circle,Triangle>(circle, triangle))  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

    if(isAreaEqual<Circle,Rectangle>(circle, rectangle)) {
        cout << "Circle & Rectangle have the same area," << endl;
        if(isWidthEqual<Circle,Rectangle>(circle, rectangle))  {
            if(isHeightEqual<Circle,Rectangle>(circle, rectangle))  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

    if(isAreaEqual<Circle,Square>(circle, square)) {
        cout << "Circle & Square have the same area," << endl;
        if(isWidthEqual<Circle,Square>(circle, square))  {
            if(isHeightEqual<Circle,Square>(circle, square))  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

    if(isAreaEqual<Triangle,Rectangle>(triangle, rectangle)) {
        cout << "Triangle & Rectangle have the same area," << endl;
        if(isWidthEqual<Triangle,Rectangle>(triangle, rectangle))  {
            if(isHeightEqual<Triangle,Rectangle>(triangle, rectangle))  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

    if(isAreaEqual<Triangle,Square>(triangle, square)) {
        cout << "Triangle & Sqaure have the same area," << endl;
        if(isWidthEqual<Triangle,Square>(triangle, square))  {
            if(isHeightEqual<Triangle,Square>(triangle, square))  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

    if(isAreaEqual<Rectangle,Square>(rectangle, square)) {
        cout << "Rectangle & Sqaure have the same area," << endl;
        if(isWidthEqual<Rectangle,Square>(rectangle, square))  {
            if(isHeightEqual<Rectangle,Square>(rectangle, square))  {
                cout << "and they are equal!" << endl;
            }
        }
        else {cout << "but are not equal." << endl;}
    }

}