#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    void setData(string n, int a) { 
        name = n; 
        age = a; 
    }
    void display() { cout << "Name: " << name << ", Age: " << age << endl; }
};

int main() {
    Person p;
    p.setData("Hassan", 22);
    p.display();
    return 0;
}
