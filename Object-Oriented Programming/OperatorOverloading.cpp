#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    Complex operator+(Complex const &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex sum = c1 + c2;
    cout << "Sum: "; sum.display();
    return 0;
}
