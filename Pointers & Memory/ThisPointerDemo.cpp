#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name; // using this pointer
        this->age = age;
    }
    void display() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main() {
    Student s("Hassan", 22);
    s.display();
    return 0;
}
