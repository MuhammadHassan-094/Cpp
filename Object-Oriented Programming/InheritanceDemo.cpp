#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // pure virtual
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() { cout << "Circle area: " << 3.14 * radius * radius << endl; }
};

class Square : public Shape {
private:
    float side;
public:
    Square(float s) : side(s) {}
    void area() { cout << "Square area: " << side * side << endl; }
};

int main() {
    Shape *s1 = new Circle(5);
    Shape *s2 = new Square(4);
    s1->area();
    s2->area();
    delete s1;
    delete s2;
    return 0;
}
