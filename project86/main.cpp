#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw() { cout << "Rysuję kształt." << endl; }
    virtual ~Shape() {}
};

class Circle:public Shape{
    void draw() override { cout << "Rysuję koło." << endl; }
};

class Square:public Shape{
    void draw() override { cout << "Rysuję kwadrat." << endl; }
};

class Triangle:public Shape{
    void draw() override { cout << "Rysuję trójkąt." << endl; }
};

class Rectangle:public Shape{
    void draw() override { cout << "Rysuję prostokąt." << endl; }
};



int main() {
  Shape* shapes[] = {new Circle(), new Square(), new Triangle(), new Rectangle() };
    for (Shape* s : shapes) {
        delete s;
    }

    return 0;
}

